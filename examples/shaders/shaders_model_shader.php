/*******************************************************************************************
*
*   raylib [shaders] example - Apply a shader to a 3d model
*
*   NOTE: This example requires raylib OpenGL 3.3 or ES2 versions for shaders support,
*         OpenGL 1.1 does not support shaders, recompile raylib to OpenGL 3.3 version.
*
*   NOTE: Shaders used in this example are #version 330 (OpenGL 3.3), to test this example
*         on OpenGL ES 2.0 platforms (Android, Raspberry Pi, HTML5), use #version 100 shaders
*         raylib comes with shaders ready for both versions, check raylib/shaders install folder
*
*   This example has been created using raylib 1.3 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2014 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

<?php

include __DIR__ . "/../utils.php";

$screenWidth = 800;
$screenHeight = 450;

SetConfigFlags(RL_FLAG_MSAA_4X_HINT);      // Enable Multi Sampling Anti Aliasing 4x (if available)

InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - model shader");

// Define the camera to look into our 3d world
$position = Vector3(4.0, 4.0, 4.0);
$target = Vector3(0.0, 1.0, -1.0);
$up = Vector3(0.0, 1.0, 0.0);
$fovy = 45.0;
$type = RL_CAMERA_PERSPECTIVE;
$camera = Camera3D($position, $target, $up, $fovy, $type);

$model = LoadModel(__DIR__ . "/resources/models/watermill.obj");                   // Load OBJ model
$texture = LoadTexture(__DIR__ . "/resources/models/watermill_diffuse.png");   // Load model texture

// Load shader for model
// NOTE: Defining 0 (NULL) for vertex shader forces usage of internal default vertex shader
$shader = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/grayscale.fs", 330);

// $model.materials[0].shader = $shader;                     // Set shader effect to 3d model
// $model.materials[0].maps[MAP_DIFFUSE].texture = texture; // Bind texture to model
SetModelMaterialTexture($model, 0, RL_MAP_ALBEDO, $texture);
SetModelMaterialShader($model, 0, $shader);

$position = Vector3(0.0, 0.0, 0.0);    // Set model position

SetCameraMode($camera, RL_CAMERA_FREE);         // Set an orbital camera mode

SetTargetFPS(60);                           // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())                // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);                  // Update camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginMode3D($camera);

            DrawModel($model, $position, 0.2, WHITE());   // Draw 3d model with texture

            DrawGrid(10, 1.0);     // Draw a grid

        EndMode3D();

        DrawText("(c) Watermill 3D model by Alberto Cano", $screenWidth - 210, $screenHeight - 20, 10, GRAY());

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadShader($shader);       // Unload shader
UnloadTexture($texture);     // Unload texture
UnloadModel($model);         // Unload model

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
