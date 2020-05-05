/*******************************************************************************************
*
*   raylib [models] example - Heightmap loading and drawing
*
*   This example has been created using raylib 1.8 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2015 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

<?php

include __DIR__ . "/../utils.php";

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - heightmap loading and drawing");

// Define our custom camera to look into our 3d world
$position = Vector3(18.0, 16.0, 18.0);
$target = Vector3(0.0, 0.0, 0.0);
$up = Vector3(0.0, 1.0, 0.0);
$fovy = 45;
$camera = Camera3D($position, $target, $up, $fovy, 0);

$image = LoadImage(__DIR__ . "/resources/heightmap.png");   // Load heightmap image (RAM)
$texture = LoadTextureFromImage($image);                    // Convert image to texture (VRAM)

$mesh = GenMeshHeightmap($image, Vector3(16, 8, 16));   // Generate heightmap mesh (RAM and VRAM)
$model = LoadModelFromMesh($mesh);                          // Load model from generated mesh

// Set map diffuse texture :(
// model.materials[0].maps[MAP_DIFFUSE].texture = texture;
/// read
SetModelMaterialTexture($model, 0, RL_MAP_ALBEDO, $texture);

$mapPosition = Vector3(-8.0, 0.0, -8.0);                   // Define model position

UnloadImage($image);                     // Unload heightmap image from RAM, already uploaded to VRAM

SetCameraMode($camera, RL_CAMERA_ORBITAL);  // Set an orbital camera mode

SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())            // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);              // Update camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

            BeginMode3D($camera);

                DrawModel($model, $mapPosition, 1.0, RED());

                DrawGrid(20, 1.0);

            EndMode3D();

        DrawTexture($texture, $screenWidth - $texture->width - 20, 20, WHITE());
        DrawRectangleLines($screenWidth - $texture->width - 20, 20, $texture->width, $texture->height, GREEN());

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadTexture($texture);     // Unload texture
UnloadModel($model);         // Unload model

CloseWindow();              // Close window and OpenGL context
