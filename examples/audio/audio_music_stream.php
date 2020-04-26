<?php

use RayLib\RL;

$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [audio] example - music playing (streaming)");

InitAudioDevice();

$music = LoadMusicStream(__DIR__ . "/resources/guitar_noodling.ogg");

PlayMusicStream($music);

$timePlayed = 0;
$pause = false;

SetTargetFPS(60);

while (!WindowShouldClose()) {
    // Update
    UpdateMusicStream($music);

    // Restart music playing (stop and play)
    if (IsKeyPressed(RL_KEY_SPACE)) {
        StopMusicStream($music);
        PlayMusicStream($music);
    }

    // Pause/Resume music playing
    if (IsKeyPressed(RL_KEY_P)) {
        $pause = !$pause;
        if ($pause) {
            PauseMusicStream($music);
        } else {
            ResumeMusicStream($music);
        }
    }

    // Get timePlayed scaled to bar dimensions (400 pixels)
    $timePlayed = GetMusicTimePlayed($music) / GetMusicTimeLength($music) * 400;
    if ($timePlayed > 400) {
        StopMusicStream($music);
    }

    // Draw
    BeginDrawing();

    ClearBackground(RAYWHITE());

    DrawText("MUSIC SHOULD BE PLAYING!", 255, 150, 20, LIGHTGRAY());

    DrawRectangle(200, 200, 400, 12, LIGHTGRAY());
    DrawRectangle(200, 200, $timePlayed, 12, MAROON());
    DrawRectangleLines(200, 200, 400, 12, GRAY());

    DrawText("PRESS SPACE TO RESTART MUSIC", 215, 250, 20, LIGHTGRAY());
    DrawText("PRESS P TO PAUSE/RESUME MUSIC", 208, 280, 20, LIGHTGRAY());

    EndDrawing();
}


// De-Initialization
//--------------------------------------------------------------------------------------
// UnloadMusicStream($music);   // Unload music stream buffers from RAM

CloseAudioDevice();         // Close audio device (music streaming is automatically stopped)

CloseWindow();              // Close window and OpenGL context
