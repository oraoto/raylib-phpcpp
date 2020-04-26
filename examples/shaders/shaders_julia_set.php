<?php

const POINTS_OF_INTEREST = [
    [ -0.348827, 0.607167 ],
    [ -0.786268, 0.169728 ],
    [ -0.8, 0.156 ],
    [ 0.285, 0.0 ],
    [ -0.835, -0.2321 ],
    [ -0.70176, -0.3842 ],
];

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

InitWindow($screenWidth, $screenHeight, "raylib [shaders] example - julia sets");

// Load julia set shader
// NOTE: Defining 0 (NULL) for vertex shader forces usage of internal default vertex shader
$shader = LoadShader(null, __DIR__ . "/resources/shaders/glsl330/julia_set.fs", 330);

// c constant to use in z^2 + c
$c = [ POINTS_OF_INTEREST[0][0], POINTS_OF_INTEREST[0][1] ];

// Offset and zoom to draw the julia set at. (centered on screen and default size)
$offset = [ -(float)$screenWidth/2, -(float)$screenHeight/2 ];
$zoom = 1.0;

$offsetSpeed = Vector2(0.0, 0.0);

// Get variable (uniform) locations on the shader to connect with the program
// NOTE: If uniform variable could not be found in the shader, function returns -1
$cLoc = GetShaderLocation($shader, "c");
$zoomLoc = GetShaderLocation($shader, "zoom");
$offsetLoc = GetShaderLocation($shader, "offset");

// Tell the shader what the screen dimensions, zoom, offset and c are
$screenDims = [ (float)$screenWidth, (float)$screenHeight ];
SetShaderValue($shader, GetShaderLocation($shader, "screenDims"), pack('f2', ...$screenDims), RL_UNIFORM_VEC2);

SetShaderValue($shader, $cLoc, pack('f2', ...$c), RL_UNIFORM_VEC2);
SetShaderValue($shader, $zoomLoc, pack('f', $zoom), RL_UNIFORM_FLOAT);
SetShaderValue($shader, $offsetLoc, pack('f2', ...$offset), RL_UNIFORM_VEC2);

// Create a RenderTexture2D to be used for render to texture
$target = LoadRenderTexture($screenWidth, $screenHeight);

$incrementSpeed = 0;         // Multiplier of speed to change c value
$showControls = true;       // Show controls
$pause = false;             // Pause animation

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    // Press [1 - 6] to reset c to a point of interest
    if (IsKeyPressed(RL_KEY_ONE) ||
           IsKeyPressed(RL_KEY_TWO) ||
           IsKeyPressed(RL_KEY_THREE) ||
           IsKeyPressed(RL_KEY_FOUR) ||
           IsKeyPressed(RL_KEY_FIVE) ||
           IsKeyPressed(RL_KEY_SIX))
    {
        if (IsKeyPressed(RL_KEY_ONE)) {
            $c = POINTS_OF_INTEREST[0];
        } else if (IsKeyPressed(RL_KEY_TWO)) {
            $c = POINTS_OF_INTEREST[1];
        } else if (IsKeyPressed(RL_KEY_THREE)) {
            $c = POINTS_OF_INTEREST[2];
        } else if (IsKeyPressed(RL_KEY_FOUR)) {
            $c = POINTS_OF_INTEREST[3];
        } else if (IsKeyPressed(RL_KEY_FIVE)) {
            $c = POINTS_OF_INTEREST[4];
        } else if (IsKeyPressed(RL_KEY_SIX)) {
            $c = POINTS_OF_INTEREST[5];
        }
        SetShaderValue($shader, $cLoc, pack('f2', ...$c), RL_UNIFORM_VEC2);
    }

    if (IsKeyPressed(RL_KEY_SPACE)) $pause = !$pause;                 // Pause animation (c change)
    if (IsKeyPressed(RL_KEY_F1)) $showControls = !$showControls;  // Toggle whether or not to show controls

    if (!$pause)
    {
        if (IsKeyPressed(RL_KEY_RIGHT)) $incrementSpeed++;
        else if (IsKeyPressed(RL_KEY_LEFT)) $incrementSpeed--;

        // TODO: The idea is to zoom and move around with mouse
        // Probably offset movement should be proportional to zoom level
        if (IsMouseButtonDown(RL_MOUSE_LEFT_BUTTON) || IsMouseButtonDown(RL_MOUSE_RIGHT_BUTTON))
        {
            if (IsMouseButtonDown(RL_MOUSE_LEFT_BUTTON)) $zoom += $zoom*0.003;
            if (IsMouseButtonDown(RL_MOUSE_RIGHT_BUTTON)) $zoom -= $zoom*0.003;

            $mousePos = GetMousePosition();

            $offsetSpeed->x = $mousePos->x - $screenWidth / 2;
            $offsetSpeed->y = $mousePos->y - $screenHeight /2;

            // Slowly move camera to targetOffset
            $offset[0] += GetFrameTime() * $offsetSpeed->x*0.8;
            $offset[1] += GetFrameTime() * $offsetSpeed->y*0.8;
        }
        else $offsetSpeed = Vector2(0.0, 0.0);

        SetShaderValue($shader, $zoomLoc, pack('f', $zoom), RL_UNIFORM_FLOAT);
        SetShaderValue($shader, $offsetLoc, pack('f2', ...$offset), RL_UNIFORM_VEC2);

        // Increment c value with time
        $amount = GetFrameTime() * $incrementSpeed * 0.0005;
        $c[0] += $amount;
        $c[1] += $amount;

        SetShaderValue($shader, $cLoc, pack('f2', ...$c), RL_UNIFORM_VEC2);
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(BLACK());         // Clear the screen of the previous frame.

            // Using a render texture to draw Julia set
        BeginTextureMode($target);       // Enable drawing to texture
            ClearBackground(BLACK());     // Clear the render texture
            // Draw a rectangle in shader mode to be used as shader canvas
            // NOTE: Rectangle uses font white character texture coordinates,
            // so shader can not be applied here directly because input vertexTexCoord
            // do not represent full screen coordinates (space where want to apply shader)
            DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), BLACK());
        EndTextureMode();

        // Draw the saved texture and rendered julia set with shader
        // NOTE: We do not invert texture on Y, already considered inside shader
        BeginShaderMode($shader);
            DrawTexture($target->texture, 0, 0, WHITE());
        EndShaderMode();

        if ($showControls)
        {
            DrawText("Press Mouse buttons right/left to zoom in/out and move", 10, 15, 10, RAYWHITE());
            DrawText("Press KEY_F1 to toggle these controls", 10, 30, 10, RAYWHITE());
            DrawText("Press KEYS [1 - 6] to change point of interest", 10, 45, 10, RAYWHITE());
            DrawText("Press KEY_LEFT | KEY_RIGHT to change speed", 10, 60, 10, RAYWHITE());
            DrawText("Press KEY_SPACE to pause movement animation", 10, 75, 10, RAYWHITE());
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
UnloadShader($shader);           // Unload shader
UnloadRenderTexture($target);    // Unload render texture

CloseWindow();                  // Close window and OpenGL context
//--------------------------------------------------------------------------------------
