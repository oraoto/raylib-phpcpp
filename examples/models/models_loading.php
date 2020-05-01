<?php

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [models] example - models loading");

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(50, 50, 50), Vector3(0, 10, 0), Vector3(0, 1, 0), 45.0, RL_CAMERA_PERSPECTIVE);

$model = LoadModel(__DIR__ . "/resources/models/castle.obj");                 // Load model
$texture = LoadTexture(__DIR__ . "/resources/models/castle_diffuse.png"); // Load model texture
// model.materials[0].maps[MAP_DIFFUSE].texture = texture;                 // Set map diffuse texture
$materials = $model->materials;
$material = $materials[0];
SetMaterialTexture($material, RL_MAP_ALBEDO, $texture);
$materials[0] = $material;
$model->materials = $materials;

$position = Vector3(0.0, 0.0, 0.0);

$bounds = MeshBoundingBox($model->meshes[0]);  // Set model bounds

// NOTE: bounds are calculated from the original size of the model,
// if model is scaled on drawing, bounds must be also scaled

SetCameraMode($camera, RL_CAMERA_FREE);     // Set a free camera mode

$selected = false;          // Selected object flag

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);

    // Load new models/textures on drag&drop
    if (IsFileDropped())
    {
        $droppedFiles = GetDroppedFiles();

        if (count($droppedFiles) == 1) // Only support one file dropped
        {
            if (IsFileExtension($droppedFiles[0], ".obj") ||
                IsFileExtension($droppedFiles[0], ".gltf") ||
                IsFileExtension($droppedFiles[0], ".iqm"))       // Model file formats supported
            {
                UnloadModel($model);                     // Unload previous model
                $model = LoadModel($droppedFiles[0]);     // Load new model
                // model.materials[0].maps[MAP_DIFFUSE].texture = texture; // Set current map diffuse texture
                $materials = $model->materials;
                $material = $materials[0];
                SetMaterialTexture($material, RL_MAP_ALBEDO, $texture);
                $materials[0] = $material;
                $model->materials = $materials;

                $bounds = MeshBoundingBox($model->meshes[0]);
                // TODO: Move camera position from target enough distance to visualize model properly
            }
            else if (IsFileExtension($droppedFiles[0], ".png"))  // Texture file formats supported
            {
                // Unload current model texture and load new one
                UnloadTexture($texture);
                $texture = LoadTexture($droppedFiles[0]);
                // model.materials[0].maps[MAP_DIFFUSE].texture = texture;
                $materials = $model->materials;
                $material = $materials[0];
                SetMaterialTexture($material, RL_MAP_ALBEDO, $texture);
                $materials[0] = $material;
                $model->materials = $materials;
            }
        }

        ClearDroppedFiles();    // Clear internal buffers
    }

    // Select model on mouse click
    if (IsMouseButtonPressed(RL_MOUSE_LEFT_BUTTON))
    {
        // Check collision between ray and box
        if (CheckCollisionRayBox(GetMouseRay(GetMousePosition(), $camera), $bounds)) $selected = !$selected;
        else $selected = false;
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginMode3D($camera);

            DrawModel($model, $position, 1.0, WHITE());        // Draw 3d model with texture

            DrawGrid(20, 10.0);         // Draw a grid

            if ($selected) DrawBoundingBox($bounds, GREEN());   // Draw selection box

        EndMode3D();

        DrawText("Drag & drop model to load mesh/texture.", 10, GetScreenHeight() - 20, 10, DARKGRAY());
        if ($selected) DrawText("MODEL SELECTED", GetScreenWidth() - 110, 10, 10, GREEN());

        DrawText("(c) Castle 3D model by Alberto Cano", $screenWidth - 200, $screenHeight - 20, 10, GRAY());

        DrawFPS(10, 10);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadTexture($texture);     // Unload texture
UnloadModel($model);         // Unload model

CloseWindow();              // Close window and OpenGL context
//--------------------------------------------------------------------------------------
