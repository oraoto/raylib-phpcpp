<?php

include __DIR__ . '/../utils.php';

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

SetConfigFlags(RL_FLAG_MSAA_4X_HINT);      // Enable Multi Sampling Anti Aliasing 4x (if available)

InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - custom uniform variable");

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(8.0, 8.0, 8.0), Vector3(0.0, 1.5, 0.0), Vector3(0.0, 1.0, 0.0), 45, RL_CAMERA_PERSPECTIVE);

$model = LoadModel(__DIR__ . "/resources/models/barracks.obj");                   // Load OBJ model
$texture = LoadTexture(__DIR__ . "/resources/models/barracks_diffuse.png");   // Load model texture (diffuse map)

SetModelMaterialTexture($model, 0, RL_MAP_ALBEDO, $texture);                 // Set model diffuse texture

$position = Vector3(0.0, 0.0, 0.0);

// Load postprocessing shader
// NOTE: Defining 0 (NULL) for vertex shader forces usage of internal default vertex shader
$shader = LoadShader(null, __DIR__ . sprintf("/resources/shaders/glsl%d/swirl.fs", 330));

// Get variable (uniform) location on the shader to connect with the program
// NOTE: If uniform variable could not be found in the shader, function returns -1
$swirlCenterLoc = GetShaderLocation($shader, "center");

$swirlCenter = [$screenWidth/2, $screenHeight/2];

// Create a RenderTexture2D to be used for render to texture
$target = LoadRenderTexture($screenWidth, $screenHeight);

// Setup orbital camera
SetCameraMode($camera, RL_CAMERA_ORBITAL);  // Set an orbital camera mode

SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())            // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    $mousePosition = GetMousePosition();

    $swirlCenter[0] = $mousePosition->x;
    $swirlCenter[1] = $screenHeight - $mousePosition->y;

    // Send new value to the shader to be used on drawing
    SetShaderValue($shader, $swirlCenterLoc, pack('f2', ...$swirlCenter), RL_UNIFORM_VEC2);

    UpdateCamera($camera);              // Update camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginTextureMode($target);       // Enable drawing to texture

            ClearBackground(RAYWHITE());  // Clear texture background

            BeginMode3D($camera);        // Begin 3d mode drawing

                DrawModel($model, $position, 0.5, WHITE());   // Draw 3d model with texture

                DrawGrid(10, 1.0);     // Draw a grid

            EndMode3D();                // End 3d mode drawing, returns to orthographic 2d mode

            DrawText("TEXT DRAWN IN RENDER TEXTURE", 200, 10, 30, RED());

        EndTextureMode();               // End drawing to texture (now we have a texture available for next passes)

        BeginShaderMode($shader);

            // NOTE: Render texture must be y-flipped due to default OpenGL coordinates (left-bottom)
            DrawTextureRec($target->texture, Rectangle(0, 0, $target->texture->width, -$target->texture->height), Vector2(0, 0), WHITE());

        EndShaderMode();

        // Draw some 2d text over drawn texture
        DrawText("(c) Barracks 3D model by Alberto Cano", $screenWidth - 220, $screenHeight - 20, 10, GRAY());

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadShader($shader);           // Unload shader
UnloadTexture($texture);         // Unload texture
UnloadModel($model);             // Unload model
UnloadRenderTexture($target);    // Unload render texture

CloseWindow();                  // Close window and OpenGL context
//--------------------------------------------------------------------------------------
