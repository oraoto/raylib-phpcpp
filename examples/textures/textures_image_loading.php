<?php

use RayLib\RL;

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [textures] example - image loading");

// NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

$image = LoadImage(__DIR__ . "/resources/raylib_logo.png");     // Loaded in CPU memory (RAM)
$texture = LoadTextureFromImage($image);          // Image converted to texture, GPU memory (VRAM)

UnloadImage($image);   // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM
//---------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        DrawTexture($texture, $screenWidth/2 - $texture->width/2, $screenHeight/2 - $texture->height/2, WHITE());

        DrawText("this IS a texture loaded from an image!", 300, 370, 10, GRAY());

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadTexture($texture);       // Texture unloading

CloseWindow();                // Close window and OpenGL context
//--------------------------------------------------------------------------------------
