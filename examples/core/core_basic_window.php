<?php

use RayLib\RL;

// Initialization
$screenWidth = 800;
$screenHeight = 450;

RL::InitWindow($screenWidth, $screenHeight, "raylib [core] example - basic window");

RL::SetTargetFPS(60);

// Main game loop
while (!RL::WindowShouldClose())
{
    // Draw
    RL::BeginDrawing();
    RL::ClearBackground(RL::RAYWHITE());
    RL::DrawText("Congrats! You created your first window!", 190, 200, 20, RL::LIGHTGRAY());
    RL::EndDrawing();
}

// De-Initialization
RL::CloseWindow();
