<?php

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - drawing billboards");

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(5, 4, 5), Vector3(0, 2, 0), Vector3(0, 1, 0), 45, RL_CAMERA_PERSPECTIVE);

$bill = LoadTexture(__DIR__ . "/resources/billboard.png");     // Our texture billboard
$billPosition = Vector3(0.0, 2.0, 0.0);                 // Position where draw billboard

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

            DrawGrid(10, 1.0);        // Draw a grid

            DrawBillboard($camera, $bill, $billPosition, 2.0, WHITE());

        EndMode3D();

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadTexture($bill);        // Unload texture

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
