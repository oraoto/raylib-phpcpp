/*******************************************************************************************
*
*   raylib example - procedural mesh generation
*
*   This example has been created using raylib 1.8 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2017 Ramon Santamaria (Ray San)
*
********************************************************************************************/

<?php

include __DIR__ . "./../utils.php";

define("NUM_MODELS", 8);      // Parametric 3d shapes to generate

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - mesh generation");

// We generate a checked image for texturing
$checked = GenImageChecked(2, 2, 1, 1, RED(), GREEN());
$texture = LoadTextureFromImage($checked);
UnloadImage($checked);

$models[NUM_MODELS] = [];

$models[0] = LoadModelFromMesh(GenMeshPlane(2, 2, 5, 5));
$models[1] = LoadModelFromMesh(GenMeshCube(2.0, 1.0, 2.0));
$models[2] = LoadModelFromMesh(GenMeshSphere(2, 32, 32));
$models[3] = LoadModelFromMesh(GenMeshHemiSphere(2, 16, 16));
$models[4] = LoadModelFromMesh(GenMeshCylinder(1, 2, 16));
$models[5] = LoadModelFromMesh(GenMeshTorus(0.25, 4.0, 16, 32));
$models[6] = LoadModelFromMesh(GenMeshKnot(1.0, 2.0, 16, 128));
$models[7] = LoadModelFromMesh(GenMeshPoly(5, 2.0));

// Set checked texture as default diffuse component for all models material
for ($i = 0; $i < NUM_MODELS; $i++) {
    SetModelMaterialTexture($models[$i], 0, RL_MAP_ALBEDO, $texture);
}

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(5.0, 5.0, 5.0 ), Vector3(0.0, 0.0, 0.0), Vector3(0.0, 1.0, 0.0 ), 45.0, 0);

// Model drawing position
$position = Vector3(0.0, 0.0, 0.0);

$currentModel = 0;

SetCameraMode($camera, RL_CAMERA_ORBITAL);  // Set a orbital camera mode

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);      // Update internal camera and our camera

    if (IsMouseButtonPressed(RL_MOUSE_LEFT_BUTTON))
    {
        $currentModel = ($currentModel + 1)%NUM_MODELS; // Cycle between the textures
    }

    if (IsKeyPressed(RL_KEY_RIGHT))
    {
        $currentModel++;
        if ($currentModel >= NUM_MODELS) $currentModel = 0;
    }
    else if (IsKeyPressed(RL_KEY_LEFT))
    {
        $currentModel--;
        if ($currentModel < 0) $currentModel = NUM_MODELS - 1;
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginMode3D($camera);

            DrawModel($models[$currentModel], $position, 1.0, WHITE());

            DrawGrid(10, 1.0);

        EndMode3D();

        DrawRectangle(30, 400, 310, 30, Fade(SKYBLUE(), 0.5));
        DrawRectangleLines(30, 400, 310, 30, Fade(DARKBLUE(), 0.5));
        DrawText("MOUSE LEFT BUTTON to CYCLE PROCEDURAL MODELS", 40, 410, 10, BLUE());

        switch($currentModel)
        {
            case 0: DrawText("PLANE", 680, 10, 20, DARKBLUE()); break;
            case 1: DrawText("CUBE", 680, 10, 20, DARKBLUE()); break;
            case 2: DrawText("SPHERE", 680, 10, 20, DARKBLUE()); break;
            case 3: DrawText("HEMISPHERE", 640, 10, 20, DARKBLUE()); break;
            case 4: DrawText("CYLINDER", 680, 10, 20, DARKBLUE()); break;
            case 5: DrawText("TORUS", 680, 10, 20, DARKBLUE()); break;
            case 6: DrawText("KNOT", 680, 10, 20, DARKBLUE()); break;
            case 7: DrawText("POLY", 680, 10, 20, DARKBLUE()); break;
            default: break;
        }

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadTexture($texture); // Unload texture

// Unload models data (GPU VRAM)
for ($i = 0; $i < NUM_MODELS; $i++) UnloadModel($models[$i]);

CloseWindow();          // Close window and OpenGL context
//--------------------------------------------------------------------------------------
