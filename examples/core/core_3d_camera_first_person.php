<?php

use RayLib\RL;

// Initialization
const MAX_COLUMNS = 20;
$screenWidth = 800;
$screenHeight = 450;

RL::InitWindow($screenWidth, $screenHeight, "raylib [core] example - 3d camera first person");

// Define the camera to look into our 3d world (position, target, up vector)
$position = RL::Vector3(4.0, 2.0, 4.0);
$target = RL::Vector3(0.0, 1.8, 0.0);
$up = RL::Vector3(0.0, 1.0, 0.0);
$fovy = 60.0;
$type = RL::CAMERA_PERSPECTIVE;
$camera = RL::Camera3D($position, $target, $up, $fovy, $type);

// Generates some random columns
$heights = [];
$positions = [];
$colors = [];

for ($i = 0; $i < MAX_COLUMNS; $i++)
{
    $height = RL::GetRandomValue(1, 12);
    $heights[] = $height;
    $positions[] = RL::Vector3(RL::GetRandomValue(-15, 15), $height / 2, RL::GetRandomValue(-15, 15));
    $colors[] = RL::Color(RL::GetRandomValue(20, 255), RL::GetRandomValue(10, 55), 30, 255);
}

RL::SetCameraMode($camera, RL::CAMERA_FIRST_PERSON); // Set a first person camera mode

RL::SetTargetFPS(60);                           // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!RL::WindowShouldClose())                // Detect window close button or ESC key
{

    // Update
    //----------------------------------------------------------------------------------
    RL::UpdateCamera($camera);                  // Update camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    RL::BeginDrawing();

    RL::ClearBackground(RL::RAYWHITE());

        RL::BeginMode3D($camera);

            RL::DrawPlane(RL::Vector3(0.0, 0.0, 0.0), RL::Vector2(32.0, 32.0), RL::LIGHTGRAY()); // Draw ground
            RL::DrawCube(RL::Vector3(-16.0, 2.5, 0.0), 1.0, 5.0, 32.0, RL::BLUE());     // Draw a blue wall
            RL::DrawCube(RL::Vector3(16.0, 2.5, 0.0), 1.0, 5.0, 32.0, RL::LIME());      // Draw a green wall
            RL::DrawCube(RL::Vector3(0.0, 2.5, 16.0), 32.0, 5.0, 1.0, RL::GOLD());      // Draw a yellow wall

            // Draw some cubes around
            for ($i = 0; $i < MAX_COLUMNS; $i++)
            {
                RL::DrawCube($positions[$i], 2.0, $heights[$i], 2.0, $colors[$i]);
                RL::DrawCubeWires($positions[$i], 2.0, $heights[$i], 2.0, RL::MAROON());
            }

        RL::EndMode3D();

    RL::DrawRectangle( 10, 10, 220, 70, RL::Fade(RL::SKYBLUE(), 0.5));
    RL::DrawRectangleLines( 10, 10, 220, 70, RL::BLUE());

    RL::DrawText("First person camera default controls:", 20, 20, 10, RL::BLACK());
    RL::DrawText("- Move with keys: W, A, S, D", 40, 40, 10, RL::DARKGRAY());
    RL::DrawText("- Mouse move to look around", 40, 60, 10, RL::DARKGRAY());

    RL::EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
RL::CloseWindow();        // Close window and OpenGL context
//--------------------------------------------------------------------------------------
