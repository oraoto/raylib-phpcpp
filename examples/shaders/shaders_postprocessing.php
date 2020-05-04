<?php

include __DIR__ . '/../utils.php';

const FX_GRAYSCALE       = 0;
const FX_POSTERIZATION   = 1;
const FX_DREAM_VISION    = 2;
const FX_PIXELIZER       = 3;
const FX_CROSS_HATCHING  = 4;
const FX_CROSS_STITCHING = 5;
const FX_PREDATOR_VIEW   = 6;
const FX_SCANLINES       = 7;
const FX_FISHEYE         = 8;
const FX_SOBEL           = 9;
const FX_BLOOM           = 10;
const FX_BLUR            = 11;
const MAX_POSTPRO_SHADERS = 12;

$postproShaderText = [
    FX_GRAYSCALE       => "GRAYSCALE",
    FX_POSTERIZATION   => "POSTERIZATION",
    FX_DREAM_VISION    => "DREAM_VISION",
    FX_PIXELIZER       => "PIXELIZER",
    FX_CROSS_HATCHING  => "CROSS_HATCHING",
    FX_CROSS_STITCHING => "CROSS_STITCHING",
    FX_PREDATOR_VIEW   => "PREDATOR_VIEW",
    FX_SCANLINES       => "SCANLINES",
    FX_FISHEYE         => "FISHEYE",
    FX_SOBEL           => "SOBEL",
    FX_BLOOM           => "BLOOM",
    FX_BLUR            => "BLUR",
    //"FXAA"
];

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

SetConfigFlags(RL_FLAG_MSAA_4X_HINT);      // Enable Multi Sampling Anti Aliasing 4x (if available)

InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - postprocessing shader");

// Define the camera to look into our 3d world
$camera = Camera3D(Vector3(2.0, 3.0, 2.0), Vector3(0.0, 1.0, 0.0), Vector3(0.0, 1.0, 0.0), 45.0, 0);

$model = LoadModel(__DIR__ . "/resources/models/church.obj");                 // Load OBJ model
$texture = LoadTexture(__DIR__ . "/resources/models/church_diffuse.png"); // Load model texture (diffuse map)
SetModelMaterialTexture($model, 0, RL_MAP_ALBEDO, $texture);                      // Set model diffuse texture

$position = Vector3(0.0, 0.0, 0.0);                             // Set model position

// Load all postpro shaders
// NOTE 1: All postpro shader use the base vertex shader (DEFAULT_VERTEX_SHADER)
// NOTE 2: We load the correct shader depending on GLSL version
// NOTE: Defining 0 (NULL) for vertex shader forces usage of internal default vertex shader
$shaders[FX_GRAYSCALE]       = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/grayscale.fs");
$shaders[FX_POSTERIZATION]   = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/posterization.fs");
$shaders[FX_DREAM_VISION]    = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/dream_vision.fs");
$shaders[FX_PIXELIZER]       = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/pixelizer.fs");
$shaders[FX_CROSS_HATCHING]  = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/cross_hatching.fs");
$shaders[FX_CROSS_STITCHING] = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/cross_stitching.fs");
$shaders[FX_PREDATOR_VIEW]   = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/predator.fs");
$shaders[FX_SCANLINES]       = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/scanlines.fs");
$shaders[FX_FISHEYE]         = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/fisheye.fs");
$shaders[FX_SOBEL]           = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/sobel.fs");
$shaders[FX_BLOOM]           = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/bloom.fs");
$shaders[FX_BLUR]            = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/blur.fs");

$currentShader = FX_GRAYSCALE;

// Create a RenderTexture2D to be used for render to texture
$target = LoadRenderTexture($screenWidth, $screenHeight);

// Setup orbital camera
SetCameraMode($camera, RL_CAMERA_ORBITAL);  // Set an orbital camera mode

SetTargetFPS(60);                       // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())            // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    UpdateCamera($camera);              // Update camera

    if (IsKeyPressed(RL_KEY_RIGHT)) $currentShader++;
    else if (IsKeyPressed(RL_KEY_LEFT)) $currentShader--;

    if ($currentShader >= MAX_POSTPRO_SHADERS) $currentShader = 0;
    else if ($currentShader < 0) $currentShader = MAX_POSTPRO_SHADERS - 1;
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE());

        BeginTextureMode($target);       // Enable drawing to texture

            ClearBackground(RAYWHITE());  // Clear texture background

            BeginMode3D($camera);        // Begin 3d mode drawing

                DrawModel($model, $position, 0.1, WHITE());   // Draw 3d model with texture

                DrawGrid(10, 1.0);     // Draw a grid

            EndMode3D();                // End 3d mode drawing, returns to orthographic 2d mode

        EndTextureMode();               // End drawing to texture (now we have a texture available for next passes)

        // Render previously generated texture using selected postpro shader
        BeginShaderMode($shaders[$currentShader]);

            // NOTE: Render texture must be y-flipped due to default OpenGL coordinates (left-bottom)
            DrawTextureRec($target->texture, Rectangle(0, 0, $target->texture->width, -$target->texture->height), Vector2(0, 0), WHITE());

        EndShaderMode();

        // Draw 2d shapes and text over drawn texture
        DrawRectangle(0, 9, 580, 30, Fade(LIGHTGRAY(), 0.7));

        DrawText("(c) Church 3D model by Alberto Cano", $screenWidth - 200, $screenHeight - 20, 10, GRAY());

        DrawText("CURRENT POSTPRO SHADER:", 10, 15, 20, BLACK());
        DrawText($postproShaderText[$currentShader], 330, 15, 20, RED());
        DrawText("< >", 540, 10, 30, DARKBLUE());

        DrawFPS(700, 15);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------

// Unload all postpro shaders
for ($i = 0; $i < MAX_POSTPRO_SHADERS; $i++) UnloadShader($shaders[$i]);

UnloadTexture($texture);         // Unload texture
UnloadModel($model);             // Unload model
UnloadRenderTexture($target);    // Unload render texture

CloseWindow();                  // Close window and OpenGL context
//--------------------------------------------------------------------------------------

return 0;
