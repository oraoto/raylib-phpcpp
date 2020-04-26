<?php

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

$materials = $model->materials;
$material = $materials[0];
$material->shader = $shader;
SetMaterialTexture($material, RL_MAP_ALBEDO, $texture);
$materials[0] = $material;
$model->materials = $materials;

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
