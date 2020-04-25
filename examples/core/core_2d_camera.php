<?php

// Initialization
const MAX_BUILDINGS = 100;

$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [core] example - 2d camera");


$player = Rectangle(400, 280, 40, 40);
$buildings = [];
$buildColrs = [];

$spacing = 0;

for ($i = 0; $i < MAX_BUILDINGS; $i++)
{
    $width = GetRandomValue(50, 200);
    $height = GetRandomValue(100, 800);
    $y = $screenHeight - 130 - $height;
    $x = -6000 + $spacing;
    $building = Rectangle($x, $y, $width, $height);

    $buildings[] = $building;

    $spacing += $buildings[$i]->width;

    $buildColors[$i] = Color(GetRandomValue(200, 240), GetRandomValue(200, 240), GetRandomValue(200, 250), 255);
}

$target = Vector2($player->x + 20, $player->y + 20);
$offset = Vector2($screenWidth / 2, $screenHeight / 2);;
$rotation = 0.0;
$zoom = 1.0;
$camera = Camera2D($offset, $target, $rotation, $zoom);

SetTargetFPS(60);

while (!WindowShouldClose()) {
    // Update
    //----------------------------------------------------------------------------------
    if (IsKeyDown(KEY_RIGHT)) {
        $player->x = $player->x + 2; // Player movement
        $offset->x = $offset->x - 2; // Camera displacement with player movement
        $camera->offset = $offset;
    } elseif (IsKeyDown(KEY_LEFT)) {
        $player->x = $player->x - 2; // Player movement
        $offset->x = $offset->x + 2; // Camera displacement with player movement
        $camera->offset = $offset;
    }

    // Camera target follows player
    $camera->target = Vector2($player->x + 20, $player->y + 20);

    // Camera rotation controls
    if (IsKeyDown(KEY_A)) {
        $camera->rotation = $camera->rotation - 1;
    } elseif (IsKeyDown(KEY_S)) {
        $camera->rotation = $camera->rotation + 1;
    }

    // Limit camera rotation to 80 degrees (-40 to 40)
    if ($camera->rotation > 40) {
        $camera->rotation = 40;
    } elseif ($camera->rotation < -40) {
        $camera->rotation = -40;
    }

    // Camera zoom controls
    $camera->zoom = $camera->zoom + (GetMouseWheelMove() * 0.05);

    if ($camera->zoom > 3.0) {
        $camera->zoom = 3.0;
    } elseif ($camera->zoom < 0.1) {
        $camera->zoom = 0.1;
    }

    // Camera reset (zoom and rotation)
    if (IsKeyPressed(KEY_R)) {
        $camera->zoom = 1.0;
        $camera->rotation = 0.0;
    }

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    ClearBackground(RAYWHITE());

    BeginMode2D($camera);

        DrawRectangle(-6000, 320, 13000, 8000, DARKGRAY());

        for ($i = 0; $i < MAX_BUILDINGS; $i++) {
            DrawRectangleRec($buildings[$i], $buildColors[$i]);
        }

        DrawRectangleRec($player, RED());

        DrawLine($camera->target->x, -$screenHeight * 10, $camera->target->x, $screenHeight * 10, GREEN());
        DrawLine(-$screenWidth * 10, $camera->target->y, $screenWidth * 10, $camera->target->y, GREEN());

    EndMode2D($camera);

    DrawText("SCREEN AREA", 640, 10, 20, RED());

    DrawRectangle(0, 0, $screenWidth, 5, RED());
    DrawRectangle(0, 5, 5, $screenHeight - 10, RED());
    DrawRectangle($screenWidth - 5, 5, 5, $screenHeight - 10, RED());
    DrawRectangle(0, $screenHeight - 5, $screenWidth, 5, RED());

    DrawRectangle(10, 10, 250, 113, Fade(SKYBLUE(), 0.5));
    DrawRectangleLines( 10, 10, 250, 113, BLUE());

    DrawText("Free 2d camera controls:", 20, 20, 10, BLACK());
    DrawText("- Right/Left to move Offset", 40, 40, 10, DARKGRAY());
    DrawText("- Mouse Wheel to Zoom in-out", 40, 60, 10, DARKGRAY());
    DrawText("- A / S to Rotate", 40, 80, 10, DARKGRAY());
    DrawText("- R to reset Zoom and Rotation", 40, 100, 10, DARKGRAY());

    EndDrawing();

}

CloseWindow();
