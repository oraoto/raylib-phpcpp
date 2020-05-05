/*******************************************************************************************
*
*   raylib [shaders] example - Texture Waves
*
*   NOTE: This example requires raylib OpenGL 3.3 or ES2 versions for shaders support,
*         OpenGL 1.1 does not support shaders, recompile raylib to OpenGL 3.3 version.
*
*   NOTE: Shaders used in this example are #version 330 (OpenGL 3.3), to test this example
*         on OpenGL ES 2.0 platforms (Android, Raspberry Pi, HTML5), use #version 100 shaders
*         raylib comes with shaders ready for both versions, check raylib/shaders install folder
*
*   This example has been created using raylib 2.5 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Example contributed by Anata (@anatagawa) and reviewed by Ramon Santamaria (@raysan5)
*
*   Copyright (c) 2019 Anata (@anatagawa) and Ramon Santamaria (@raysan5)
*
********************************************************************************************/

<?php

$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - texture waves");

// Load texture texture to apply shaders
$texture = LoadTexture(__DIR__ . "/resources/space.png");

// Load shader and setup location points and values
$shader = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/wave.fs");

$secondsLoc = GetShaderLocation($shader, "secondes");
$freqXLoc = GetShaderLocation($shader, "freqX");
$freqYLoc = GetShaderLocation($shader, "freqY");
$ampXLoc = GetShaderLocation($shader, "ampX");
$ampYLoc = GetShaderLocation($shader, "ampY");
$speedXLoc = GetShaderLocation($shader, "speedX");
$speedYLoc = GetShaderLocation($shader, "speedY");

// Shader uniform values that can be updated at any time
$freqX = 25.0;
$freqY = 25.0;
$ampX = 5.0;
$ampY = 5.0;
$speedX = 8.0;
$speedY = 8.0;

$screenSize = [(float)GetScreenWidth(), (float)GetScreenHeight()];
SetShaderValue($shader, GetShaderLocation($shader, "size"), pack('f2', ...$screenSize), RL_UNIFORM_VEC2);
SetShaderValue($shader, $freqXLoc, pack('f1', $freqX), RL_UNIFORM_FLOAT);
SetShaderValue($shader, $freqYLoc, pack('f1', $freqY), RL_UNIFORM_FLOAT);
SetShaderValue($shader, $ampXLoc, pack('f1', $ampX), RL_UNIFORM_FLOAT);
SetShaderValue($shader, $ampYLoc, pack('f1', $ampY), RL_UNIFORM_FLOAT);
SetShaderValue($shader, $speedXLoc, pack('f1', $speedX), RL_UNIFORM_FLOAT);
SetShaderValue($shader, $speedYLoc, pack('f1', $speedY), RL_UNIFORM_FLOAT);

$seconds = 0.0;

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
// -------------------------------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    $seconds += GetFrameTime();

    SetShaderValue($shader, $secondsLoc, pack('f1', $seconds), RL_UNIFORM_FLOAT);
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginShaderMode($shader);

            DrawTexture($texture, 0, 0, WHITE());
            DrawTexture($texture, $texture->width, 0, WHITE());

        EndShaderMode();

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadShader($shader);         // Unload shader
UnloadTexture($texture);       // Unload texture

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
