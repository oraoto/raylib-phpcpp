<?php

include __DIR__ . "/../utils.php";

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - first person maze");

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(0.2, 0.4, 0.2), Vector3(0.0, 0.0, 0.0), Vector3(0.0, 1.0, 0.0), 45, 0 );

$imMap = LoadImage(__DIR__ . "/resources/cubicmap.png");      // Load cubicmap image (RAM)
$cubicmap = LoadTextureFromImage($imMap);       // Convert image to texture to display (VRAM)
$mesh = GenMeshCubicmap($imMap, Vector3(1.0, 1.0, 1.0));
$model = LoadModelFromMesh($mesh);

// NOTE: By default each cube is mapped to one part of texture atlas
$texture = LoadTexture(__DIR__ . "/resources/cubicmap_atlas.png");    // Load map texture
SetModelMaterialTexture($model, 0, RL_MAP_ALBEDO, $texture);          // Set map diffuse texture

// Get map image data to be used for collision detection
$mapPixels = GetImageData($imMap);
UnloadImage($imMap);             // Unload image from RAM

$mapPosition = Vector3(-16.0, 0.0, -8.0);  // Set model position
$playerPosition = $camera->position;       // Set player position

SetCameraMode($camera, RL_CAMERA_FIRST_PERSON);     // Set camera mode

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    $oldCamPos = $camera->position;    // Store old camera position

    UpdateCamera($camera);      // Update camera

    // Check player collision (we simplify to 2D collision detection)
    $playerPos = Vector2($camera->position->x, $camera->position->z);
    $playerRadius = 0.1;  // Collision radius (player is modelled as a cilinder for collision)

    $playerCellX = (int)($playerPos->x - $mapPosition->x + 0.5);
    $playerCellY = (int)($playerPos->y - $mapPosition->z + 0.5);

    // Out-of-limits security check
    if ($playerCellX < 0) $playerCellX = 0;
    else if ($playerCellX >= $cubicmap->width) $playerCellX = $cubicmap->width - 1;

    if ($playerCellY < 0) $playerCellY = 0;
    else if ($playerCellY >= $cubicmap->height) $playerCellY = $cubicmap->height - 1;

    // Check map collisions using image data and player position
    // TODO: Improvement: Just check player surrounding cells for collision
    for ($y = 0; $y < $cubicmap->height; $y++)
    {
        for ($x = 0; $x < $cubicmap->width; $x++)
        {
            if (($mapPixels[$y*$cubicmap->width + $x]->r == 255) &&       // Collision: white pixel, only check R channel
                (CheckCollisionCircleRec($playerPos, $playerRadius,
                                         Rectangle($mapPosition->x - 0.5 + $x * 1.0, $mapPosition->z - 0.5 + $y * 1.0, 1.0, 1.0))))
            {
                // Collision detected, reset camera position
                $camera->position = $oldCamPos;
            }
        }
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginMode3D($camera);

             DrawModel($model, $mapPosition, 1.0, WHITE());                     // Draw maze map
            //DrawCubeV($playerPosition, Vector3(0.2, 0.4, 0.2), RED());  // Draw player

        EndMode3D();

        DrawTextureEx($cubicmap, Vector2(GetScreenWidth() - $cubicmap->width * 4 - 20, 20), 0.0, 4.0, WHITE());
        DrawRectangleLines(GetScreenWidth() - $cubicmap->width * 4 - 20, 20, $cubicmap->width * 4, $cubicmap->height * 4, GREEN());

        // Draw player position radar
        DrawRectangle(GetScreenWidth() - $cubicmap->width * 4 - 20 + $playerCellX * 4, 20 + $playerCellY * 4, 4, 4, RED());

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
// free(mapPixels);            // Unload color array

UnloadTexture($cubicmap);    // Unload cubicmap texture
UnloadTexture($texture);     // Unload map texture
UnloadModel($model);         // Unload map model

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
