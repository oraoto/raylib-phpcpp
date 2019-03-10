<?php

use RayLib\RL;

// Initialization
$screenWidth = 800;
$screenHeight = 450;
$ballPosition = RL::Vector2($screenWidth / 2, $screenHeight / 2);

RL::InitWindow($screenWidth, $screenHeight, "raylib [core] example - basic window");

RL::SetTargetFPS(60);

// Main game loop
while (!RL::WindowShouldClose())
{
    // Update
    if (RL::IsKeyDown(RL::KEY_RIGHT)) $ballPosition->x = $ballPosition->x + 2.0;
    if (RL::IsKeyDown(RL::KEY_LEFT))  $ballPosition->x = $ballPosition->x - 2.0;
    if (RL::IsKeyDown(RL::KEY_UP))    $ballPosition->y = $ballPosition->y - 2.0;
    if (RL::IsKeyDown(RL::KEY_DOWN))  $ballPosition->y = $ballPosition->y + 2.0;

    // Draw
    RL::BeginDrawing();
    RL::ClearBackground(RL::RAYWHITE());
    RL::DrawText("move the ball with arrow keys", 10, 10, 20, RL::DARKGRAY());
    RL::DrawCircleV($ballPosition, 50, RL::MAROON());
    RL::EndDrawing();
}
// De-Initialization
RL::CloseWindow();
