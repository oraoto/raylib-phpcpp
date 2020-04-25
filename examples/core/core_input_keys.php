<?php

// Initialization
$screenWidth = 800;
$screenHeight = 450;
$ballPosition = Vector2($screenWidth / 2, $screenHeight / 2);

InitWindow($screenWidth, $screenHeight, "raylib [core] example - basic window");

SetTargetFPS(60);

// Main game loop
while (!WindowShouldClose())
{
    // Update
    if (IsKeyDown(KEY_RIGHT)) $ballPosition->x = $ballPosition->x + 2.0;
    if (IsKeyDown(KEY_LEFT))  $ballPosition->x = $ballPosition->x - 2.0;
    if (IsKeyDown(KEY_UP))    $ballPosition->y = $ballPosition->y - 2.0;
    if (IsKeyDown(KEY_DOWN))  $ballPosition->y = $ballPosition->y + 2.0;

    // Draw
    BeginDrawing();
    ClearBackground(RAYWHITE());
    DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY());
    DrawCircleV($ballPosition, 50, MAROON());
    EndDrawing();
}
// De-Initialization
CloseWindow();
