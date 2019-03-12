<?php

use RayLib\RL;

$screenWidth = 800;
$screenHeight = 450;

RL::InitWindow($screenWidth, $screenHeight, "raylib [audio] example - music playing (streaming)");

RL::InitAudioDevice();

$music = RL::LoadMusicStream(__DIR__ . "/resources/guitar_noodling.ogg");

RL::PlayMusicStream($music);

$timePlayed = 0;
$pause = false;

RL::SetTargetFPS(60);

while (!RL::WindowShouldClose()) {
    // Update
    RL::UpdateMusicStream($music);

    // Restart music playing (stop and play)
    if (RL::IsKeyPressed(RL::KEY_SPACE)) {
        RL::StopMusicStream($music);
        RL::PlayMusicStream($music);
    }

    // Pause/Resume music playing
    if (RL::IsKeyPressed(RL::KEY_P)) {
        $pause = !$pause;
        if ($pause) {
            RL::PauseMusicStream($music);
        } else {
            RL::ResumeMusicStream($music);
        }
    }

    // Get timePlayed scaled to bar dimensions (400 pixels)
    $timePlayed = RL::GetMusicTimePlayed($music) / RL::GetMusicTimeLength($music) * 400;
    if ($timePlayed > 400) {
        RL::StopMusicStream($music);
    }

    // Draw
    RL::BeginDrawing();

    RL::ClearBackground(RL::RAYWHITE());

    RL::DrawText("MUSIC SHOULD BE PLAYING!", 255, 150, 20, RL::LIGHTGRAY());

    RL::DrawRectangle(200, 200, 400, 12, RL::LIGHTGRAY());
    RL::DrawRectangle(200, 200, $timePlayed, 12, RL::MAROON());
    RL::DrawRectangleLines(200, 200, 400, 12, RL::GRAY());

    RL::DrawText("PRESS SPACE TO RESTART MUSIC", 215, 250, 20, RL::LIGHTGRAY());
    RL::DrawText("PRESS P TO PAUSE/RESUME MUSIC", 208, 280, 20, RL::LIGHTGRAY());

    RL::EndDrawing();
}


// De-Initialization
//--------------------------------------------------------------------------------------
// RL::UnloadMusicStream($music);   // Unload music stream buffers from RAM

RL::CloseAudioDevice();         // Close audio device (music streaming is automatically stopped)

RL::CloseWindow();              // Close window and OpenGL context
