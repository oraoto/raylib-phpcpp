<?php

use RayLib\RL;

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

RL::InitWindow($screenWidth, $screenHeight, "raylib [models] example - heightmap loading and drawing");

// Define our custom camera to look into our 3d world
$position = RL::Vector3(18.0, 16.0, 18.0);
$target = RL::Vector3(0.0, 0.0, 0.0);
$up = RL::Vector3(0.0, 1.0, 0.0);
$fovy = 45;
$camera = RL::Camera3D($position, $target, $up, $fovy, 0);

$image = RL::LoadImage(__DIR__ . "/resources/heightmap.png");   // Load heightmap image (RAM)
$texture = RL::LoadTextureFromImage($image);                    // Convert image to texture (VRAM)

$mesh = RL::GenMeshHeightmap($image, RL::Vector3(16, 8, 16));   // Generate heightmap mesh (RAM and VRAM)
$model = RL::LoadModelFromMesh($mesh);                          // Load model from generated mesh

// Set map diffuse texture
$material = $model->material;
$maps = $material->maps;
$maps[RL::MAP_ALBEDO]->texture = $texture;
$material->maps = $maps;
$model->material = $material;

$mapPosition = RL::Vector3(-8.0, 0.0, -8.0);                   // Define model position

RL::UnloadImage($image);                     // Unload heightmap image from RAM, already uploaded to VRAM

RL::SetCameraMode($camera, RL::CAMERA_ORBITAL);  // Set an orbital camera mode

RL::SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!RL::WindowShouldClose())            // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    RL::UpdateCamera($camera);              // Update camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    RL::BeginDrawing();

        RL::ClearBackground(RL::RAYWHITE());

            RL::BeginMode3D($camera);

                RL::DrawModel($model, $mapPosition, 1.0, RL::RED());

                RL::DrawGrid(20, 1.0);

            RL::EndMode3D();

        RL::DrawTexture($texture, $screenWidth - $texture->width - 20, 20, RL::WHITE());
        RL::DrawRectangleLines($screenWidth - $texture->width - 20, 20, $texture->width, $texture->height, RL::GREEN());

        RL::DrawFPS(10, 10);

    RL::EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
RL::UnloadTexture($texture);     // Unload texture
RL::UnloadModel($model);         // Unload model

RL::CloseWindow();              // Close window and OpenGL context
