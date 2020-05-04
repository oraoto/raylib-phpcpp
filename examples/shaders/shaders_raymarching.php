<?php

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

SetConfigFlags(RL_FLAG_WINDOW_RESIZABLE);
InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - raymarching shapes");

$camera = Camera3D(Vector3(2.5, 2.5, 3.0), Vector3(0.0, 0.0, 0.7), Vector3(0, 1, 0), 65, 0);
SetCameraMode($camera, RL_CAMERA_FREE);                 // Set camera mode

// Load raymarching shader
// NOTE: Defining 0 (NULL) for vertex shader forces usage of internal default vertex shader
$shader = LoadShader(null, __DIR__ . sprintf("/resources/shaders/glsl%d/raymarching.fs", 330));

// Get shader locations for required uniforms
$viewEyeLoc = GetShaderLocation($shader, "viewEye");
$viewCenterLoc = GetShaderLocation($shader, "viewCenter");
$runTimeLoc = GetShaderLocation($shader, "runTime");
$resolutionLoc = GetShaderLocation($shader, "resolution");

$resolution = [ (float)$screenWidth, (float)$screenHeight ];
SetShaderValue($shader, $resolutionLoc, pack('f2', ...$resolution), RL_UNIFORM_VEC2);

$runTime = 0.0;

SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())            // Detect window close button or ESC key
{
    // Check if screen is resized
    //----------------------------------------------------------------------------------
    if(IsWindowResized())
    {
        $screenWidth = GetScreenWidth();
        $screenHeight = GetScreenHeight();
        $resolution = [ (float)$screenWidth, (float)$screenHeight ];
        SetShaderValue($shader, $resolutionLoc, pack('f2', ...$resolution), RL_UNIFORM_VEC2);
    }

    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);              // Update camera

    $cameraPos = [$camera->position->x, $camera->position->y, $camera->position->z ];
    $cameraTarget = [$camera->target->x, $camera->target->y, $camera->target->z ];

    $deltaTime = GetFrameTime();
    $runTime += $deltaTime;

    // Set shader required uniform values
    SetShaderValue($shader, $viewEyeLoc, pack('f3', ...$cameraPos), RL_UNIFORM_VEC3);
    SetShaderValue($shader, $viewCenterLoc, pack('f3', ...$cameraTarget), RL_UNIFORM_VEC3);
    SetShaderValue($shader, $runTimeLoc, pack('f1', $runTime), RL_UNIFORM_FLOAT);
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        // We only draw a white full-screen rectangle,
        // frame is generated in shader using raymarching
        BeginShaderMode($shader);
           DrawRectangle(0, 0, $screenWidth, $screenHeight, WHITE());
        EndShaderMode();

        DrawText("(c) Raymarching shader by Iñigo Quilez. MIT License.", $screenWidth - 280, $screenHeight - 20, 10, BLACK());
        DrawFPS(10, 10);
    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadShader($shader);           // Unload shader

CloseWindow();                  // Close window and OpenGL context
//--------------------------------------------------------------------------------------
