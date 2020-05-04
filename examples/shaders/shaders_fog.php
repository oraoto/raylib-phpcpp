<?php

include __DIR__ . '/../utils.php';

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

SetConfigFlags(RL_FLAG_MSAA_4X_HINT);  // Enable Multi Sampling Anti Aliasing 4x (if available)
InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - fog");

// Define the camera to look into our 3d world
$camera = Camera3D(
    Vector3( 2.0, 2.0, 6.0 ),      // position
    Vector3( 0.0, 0.5, 0.0 ),      // target
    Vector3( 0.0, 1.0, 0.0 ),      // up
    45.0, RL_CAMERA_PERSPECTIVE );        // fov, type

// Load models and texture
$modelA = LoadModelFromMesh(GenMeshTorus(0.4, 1.0, 16, 32));
$modelB = LoadModelFromMesh(GenMeshCube(1.0, 1.0, 1.0));
$modelC = LoadModelFromMesh(GenMeshSphere(0.5, 32, 32));
$texture = LoadTexture(__DIR__ . "/resources/texel_checker.png");

// Assign texture to default model material
SetModelMaterialTexture($modelA, 0, RL_MAP_ALBEDO, $texture);
SetModelMaterialTexture($modelB, 0, RL_MAP_ALBEDO, $texture);
SetModelMaterialTexture($modelC, 0, RL_MAP_ALBEDO, $texture);

// Load shader and set up some uniforms
$shader = LoadShader(__DIR__ . sprintf("/resources/shaders/glsl%d/base_lighting.vs", 330),
                     __DIR__ . sprintf("/resources/shaders/glsl%d/fog.fs", 330));

SetShaderLoc($shader, RL_LOC_MATRIX_MODEL, GetShaderLocation($shader, "matModel"));
SetShaderLoc($shader, RL_LOC_VECTOR_VIEW, GetShaderLocation($shader, "viewPos"));

// Ambient light level
$ambientLoc = GetShaderLocation($shader, "ambient");
SetShaderValue($shader, $ambientLoc, pack('f4', 0.2, 0.2, 0.2, 1.0), RL_UNIFORM_VEC4);

$fogDensity = 0.15;
$fogDensityLoc = GetShaderLocation($shader, "fogDensity");
SetShaderValue($shader, $fogDensityLoc, pack('f1', $fogDensity), RL_UNIFORM_FLOAT);

// NOTE: All models share the same shader
SetModelMaterialShader($modelA, 0, $shader);
SetModelMaterialShader($modelB, 0, $shader);
SetModelMaterialShader($modelC, 0, $shader);

// Using just 1 point lights
CreateLight(RL_LIGHT_POINT, Vector3(0, 2, 6), Vector3Zero(), WHITE(), $shader);

SetCameraMode($camera, RL_CAMERA_ORBITAL);  // Set an orbital camera mode

SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())            // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);              // Update camera

    if (IsKeyDown(RL_KEY_UP))
    {
        $fogDensity += 0.001;
        if ($fogDensity > 1.0) $fogDensity = 1.0;
    }

    if (IsKeyDown(RL_KEY_DOWN))
    {
        $fogDensity -= 0.001;
        if ($fogDensity < 0.0) $fogDensity = 0.0;
    }

    SetShaderValue($shader, $fogDensityLoc, pack('f1', $fogDensity), RL_UNIFORM_FLOAT);

    // Rotate the torus
    $modelA->transform = MatrixMultiply($modelA->transform, MatrixRotateX(-0.025));
    $modelA->transform = MatrixMultiply($modelA->transform, MatrixRotateZ(0.012));

    // Update the light shader with the camera view position
    $v = pack('f3', $camera->position->x, $camera->position->y, $camera->position->z);
    SetShaderValue($shader, $shader->locs[RL_LOC_VECTOR_VIEW], $v, RL_UNIFORM_VEC3);
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(GRAY());

        BeginMode3D($camera);

            // Draw the three models
            DrawModel($modelA, Vector3Zero(), 1.0, WHITE());
            DrawModel($modelB, Vector3(-2.6, 0, 0), 1.0, WHITE());
            DrawModel($modelC, Vector3(2.6, 0, 0), 1.0, WHITE());

            for ($i = -20; $i < 20; $i += 2) DrawModel($modelA, Vector3($i, 0, 2), 1.0, WHITE());

        EndMode3D();

        DrawText(sprintf("Use KEY_UP/KEY_DOWN to change fog density [%.2f]", $fogDensity), 10, 10, 20, RAYWHITE());

        DrawFPS(10, 30);
    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadModel($modelA);        // Unload the model A
UnloadModel($modelB);        // Unload the model B
UnloadModel($modelC);        // Unload the model C
UnloadTexture($texture);     // Unload the texture
UnloadShader($shader);       // Unload shader

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
