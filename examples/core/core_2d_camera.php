<?php

use RayLib\RL;

// Initialization
const MAX_BUILDINGS = 100;

$screenWidth = 800;
$screenHeight = 450;

RL::InitWindow($screenWidth, $screenHeight, "raylib [core] example - 2d camera");


$player = RL::Rectangle(400, 280, 40, 40);
$buildings = [];
$buildColrs = [];

$spacing = 0;

for ($i = 0; $i < MAX_BUILDINGS; $i++)
{
    $width = RL::GetRandomValue(50, 200);
    $height = RL::GetRandomValue(100, 800);
    $y = $screenHeight - 130 - $height;
    $x = -6000 + $spacing;
    $building = RL::Rectangle($x, $y, $width, $height);

    $buildings[] = $building;

    $spacing += $buildings[$i]->width;

    $buildColors[$i] = RL::Color(RL::GetRandomValue(200, 240), RL::GetRandomValue(200, 240), RL::GetRandomValue(200, 250), 255);
}

$target = RL::Vector2($player->x + 20, $player->y + 20);
$offset = RL::Vector2(0, 0);;
$rotation = 0.0;
$zoom = 1.0;
$camera = RL::Camera2D($offset, $target, $rotation, $zoom);

RL::SetTargetFPS(60);


while (!RL::WindowShouldClose()) {
    // Update
    //----------------------------------------------------------------------------------
    if (RL::IsKeyDown(RL::KEY_RIGHT)) {
        $player->x = $player->x + 2; // Player movement
        $offset->x = $offset->x - 2; // Camera displacement with player movement
        $camera->offset = $offset;
    } elseif (RL::IsKeyDown(RL::KEY_LEFT)) {
        $player->x = $player->x - 2; // Player movement
        $offset->x = $offset->x + 2; // Camera displacement with player movement
        $camera->offset = $offset;
    }

    // Camera target follows player
    $camera->target = RL::Vector2($player->x + 20, $player->y + 20);

    // Camera rotation controls
    if (RL::IsKeyDown(RL::KEY_A)) {
        $camera->rotation = $camera->rotation - 1;
    } elseif (RL::IsKeyDown(RL::KEY_S)) {
        $camera->rotation = $camera->rotation + 1;
    }

    // Limit camera rotation to 80 degrees (-40 to 40)
    if ($camera->rotation > 40) {
        $camera->rotation = 40;
    } elseif ($camera->rotation < -40) {
        $camera->rotation = -40;
    }

    // Camera zoom controls
    $camera->zoom = $camera->zoom + (RL::GetMouseWheelMove() * 0.05);

    if ($camera->zoom > 3.0) {
        $camera->zoom = 3.0;
    } elseif ($camera->zoom < 0.1) {
        $camera->zoom = 0.1;
    }

    // Camera reset (zoom and rotation)
    if (RL::IsKeyPressed(RL::KEY_R)) {
        $camera->zoom = 1.0;
        $camera->rotation = 0.0;
    }

    // Draw
    //----------------------------------------------------------------------------------
    RL::BeginDrawing();

    RL::ClearBackground(RL::RAYWHITE());

    RL::BeginMode2D($camera);

        RL::DrawRectangle(-6000, 320, 13000, 8000, RL::DARKGRAY());

        for ($i = 0; $i < MAX_BUILDINGS; $i++) {
            RL::DrawRectangleRec($buildings[$i], $buildColors[$i]);
        }

        RL::DrawRectangleRec($player, RL::RED());

        RL::DrawLine($camera->target->x, -$screenHeight * 10, $camera->target->x, $screenHeight * 10, RL::GREEN());
        RL::DrawLine(-$screenWidth * 10, $camera->target->y, $screenWidth * 10, $camera->target->y, RL::GREEN());

    RL::EndMode2D($camera);

    RL::DrawText("SCREEN AREA", 640, 10, 20, RL::RED());

    RL::DrawRectangle(0, 0, $screenWidth, 5, RL::RED());
    RL::DrawRectangle(0, 5, 5, $screenHeight - 10, RL::RED());
    RL::DrawRectangle($screenWidth - 5, 5, 5, $screenHeight - 10, RL::RED());
    RL::DrawRectangle(0, $screenHeight - 5, $screenWidth, 5, RL::RED());

    RL::DrawRectangle(10, 10, 250, 113, RL::Fade(RL::SKYBLUE(), 0.5));
    RL::DrawRectangleLines( 10, 10, 250, 113, RL::BLUE());

    RL::DrawText("Free 2d camera controls:", 20, 20, 10, RL::BLACK());
    RL::DrawText("- Right/Left to move Offset", 40, 40, 10, RL::DARKGRAY());
    RL::DrawText("- Mouse Wheel to Zoom in-out", 40, 60, 10, RL::DARKGRAY());
    RL::DrawText("- A / S to Rotate", 40, 80, 10, RL::DARKGRAY());
    RL::DrawText("- R to reset Zoom and Rotation", 40, 100, 10, RL::DARKGRAY());

    RL::EndDrawing();

}

RL::CloseWindow();
