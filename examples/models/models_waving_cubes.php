/*******************************************************************************************
*
*   raylib [models] example - Waving cubes
*
*   This example has been created using raylib 2.5 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Example contributed by Codecat (@codecat) and reviewed by Ramon Santamaria (@raysan5)
*
*   Copyright (c) 2019 Codecat (@codecat) and Ramon Santamaria (@raysan5)
*
********************************************************************************************/

<?php
// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - waving cubes");

// Initialize the camera
$camera = Camera3D(Vector3(30, 20, 30), Vector3(0, 0, 0), Vector3(0, 1, 0), 70, RL_CAMERA_PERSPECTIVE);

// Specify the amount of blocks in each direction
$numBlocks = 15;
$numBlocks_half = $numBlocks / 2;

SetTargetFPS(60);
//--------------------------------------------------------------------------------------

$raywhite = RAYWHITE();

$cubeColors = [];
for ($x = 0; $x < $numBlocks; $x++)
{
    for ($y = 0; $y < $numBlocks; $y++)
    {
        for ($z = 0; $z < $numBlocks; $z++)
        {
            $cubeColors[$x][$y][$z] = ColorFromHSV(Vector3(((($x + $y + $z)*18)%360), 0.75, 0.9));
        }
    }
}

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    $time = GetTime();

    // Calculate time scale for cube position and size
    $scale = (2.0 + sin($time)) * 0.7;

    // Move camera around the scene
    $cameraTime = $time * 0.3;
    $position = $camera->position;
    $position->x = cos($cameraTime) * 40.0;
    $position->z = sin($cameraTime) * 40.0;
    $camera->position = $position;

    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground($raywhite);

        BeginMode3D($camera);

            DrawGrid(10, 5);

            for ($x = 0; $x < $numBlocks; $x++)
            {
                for ($y = 0; $y < $numBlocks; $y++)
                {
                    for ($z = 0; $z < $numBlocks; $z++)
                    {
                        // Scale of the blocks depends on x/y/z positions
                        $blockScale = ($x + $y + $z)/30.0;

                        // Scatter makes the waving effect by adding blockScale over time
                        $scatter = sin($blockScale * 20.0 + $time * 4.0);

                        // Calculate the cube position
                        $cubePos = Vector3(
                            ($x - $numBlocks_half) * ($scale*3.0) + $scatter,
                            ($y - $numBlocks_half) * ($scale*2.0) + $scatter,
                            ($z - $numBlocks_half) * ($scale*3.0) + $scatter
                        );

                        // Pick a color with a hue depending on cube position for the rainbow color effect
                        $cubeColor = $cubeColors[$x][$y][$z];
                        // $cubeColor = ColorFromHSV(Vector3(((($x + $y + $z)*18)%360), 0.75, 0.9));

                        // Calculate cube size
                        $cubeSize = (2.4 - $scale) * $blockScale;

                        // And finally, draw the cube!
                        DrawCube($cubePos, $cubeSize, $cubeSize, $cubeSize, $cubeColor);
                    }
                }
            }

        EndMode3D();

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
CloseWindow();        // Close window and OpenGL context
//--------------------------------------------------------------------------------------
