/*******************************************************************************************
*
*   raylib [models] example - Skybox loading and drawing
*
*   This example has been created using raylib 1.8 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2017 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

<?php

include __DIR__ . "/../utils.php";

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - skybox loading and drawing");

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(1, 1, 1), Vector3(4, 1, 4), Vector3(0, 1, 0), 45.0, 0);

// Load skybox model
$cube = GenMeshCube(1.0, 1.0, 1.0);
$skybox = LoadModelFromMesh($cube);

// Load skybox shader and set required locations
// NOTE: Some locations are automatically set at shader loading

$shader = LoadShader(__DIR__ . "/resources/shaders/glsl330/skybox.vs", __DIR__ . "/resources/shaders/glsl330/skybox.fs");
SetModelMaterialShader($skybox, 0, $shader);
SetShaderValue($skybox->materials[0]->shader, GetShaderLocation($skybox->materials[0]->shader, "environmentMap"), pack('i', RL_MAP_CUBEMAP), RL_UNIFORM_INT);

// Load cubemap shader and setup required shader locations
$shdrCubemap = LoadShader(__DIR__ . "/resources/shaders/glsl330/cubemap.vs", __DIR__ . "/resources/shaders/glsl330/cubemap.fs");
SetShaderValue($shdrCubemap, GetShaderLocation($shdrCubemap, "equirectangularMap"), pack('i', 0), RL_UNIFORM_INT);

// Load HDR panorama (sphere) texture
$texHDR = LoadTexture(__DIR__ . "/resources/dresden_square.hdr");

// Generate cubemap (texture with 6 quads-cube-mapping) from panorama HDR texture
// NOTE: New texture is generated rendering to texture, shader computes the sphre->cube coordinates mapping
SetModelMaterialTexture($skybox, 0, RL_MAP_CUBEMAP, GenTextureCubemap($shdrCubemap, $texHDR, 512));

UnloadTexture($texHDR);      // Texture not required anymore, cubemap already generated
UnloadShader($shdrCubemap);  // Unload cubemap generation shader, not required anymore

SetCameraMode($camera, RL_CAMERA_FIRST_PERSON);  // Set a first person camera mode

SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())            // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);              // Update camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginMode3D($camera);

            DrawModel($skybox, Vector3(0, 0, 0), 1.0, WHITE());

            DrawGrid(10, 1);

        EndMode3D();

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadShader($skybox->materials[0]->shader);
UnloadTexture($skybox->materials[0]->maps[RL_MAP_CUBEMAP]->texture);

UnloadModel($skybox);        // Unload skybox model

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
