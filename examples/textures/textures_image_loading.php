<?php

use RayLib\RL;

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

RL::InitWindow($screenWidth, $screenHeight, "raylib [textures] example - image loading");

// NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

$image = RL::LoadImage(__DIR__ . "/resources/raylib_logo.png");     // Loaded in CPU memory (RAM)
$texture = RL::LoadTextureFromImage($image);          // Image converted to texture, GPU memory (VRAM)

RL::UnloadImage($image);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM
//---------------------------------------------------------------------------------------

// Main game loop
while (!RL::WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    RL::BeginDrawing();

        RL::ClearBackground(RL::RAYWHITE());

        RL::DrawTexture($texture, $screenWidth/2 - $texture->width/2, $screenHeight/2 - $texture->height/2, RL::WHITE());

        RL::DrawText("this IS a texture loaded from an image!", 300, 370, 10, RL::GRAY());

    RL::EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
RL::UnloadTexture($texture);       // Texture unloading

RL::CloseWindow();                // Close window and OpenGL context
//--------------------------------------------------------------------------------------
