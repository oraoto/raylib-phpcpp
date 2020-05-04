<?php

// Initialization
//--------------------------------------------------------------------------------------
$screenWidth = 800;
$screenHeight = 450;

SetConfigFlags(RL_FLAG_MSAA_4X_HINT);
InitWindow($screenWidth, $screenHeight, "Physac [raylib] - Physics demo");

// Physac logo drawing position
$logoX = $screenWidth - MeasureText("Physac", 30) - 10;
$logoY = 15;
$needsReset = false;

// Initialize physics and default physics bodies
InitPhysics();

// Create floor rectangle physics body
$floor = CreatePhysicsBodyRectangle(Vector2($screenWidth/2, $screenHeight), 500, 100, 10);
$floor->enabled = false;         // Disable body state to convert it to static (no dynamics, but collisions)

// Create obstacle circle physics body
$circle = CreatePhysicsBodyCircle(Vector2($screenWidth/2, $screenHeight/2), 45, 10);
$circle->enabled = false;        // Disable body state to convert it to static (no dynamics, but collisions)

SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    // Delay initialization of variables due to physics reset async
    RunPhysicsStep();

    if ($needsReset)
    {
        $floor = CreatePhysicsBodyRectangle(Vector2($screenWidth/2, $screenHeight), 500, 100, 10);
        $floor->enabled = false;         // Disable body state to convert it to static (no dynamics, but collisions)

        // Create obstacle circle physics body
        $circle = CreatePhysicsBodyCircle(Vector2($screenWidth/2, $screenHeight/2), 45, 10);
        $circle->enabled = false;        // Disable body state to convert it to static (no dynamics, but collisions)

        $needsReset = false;
    }

    // Reset physics input
    if (IsKeyPressed(RL_KEY_R))
    {
        ResetPhysics();
        $needsReset = true;
    }

    // Physics body creation inputs
    if (IsMouseButtonPressed(RL_MOUSE_LEFT_BUTTON)) CreatePhysicsBodyPolygon(GetMousePosition(), GetRandomValue(20, 80), GetRandomValue(3, 8), 10);
    else if (IsMouseButtonPressed(RL_MOUSE_RIGHT_BUTTON)) CreatePhysicsBodyCircle(GetMousePosition(), GetRandomValue(10, 45), 10);

    // Destroy falling physics bodies
    $bodiesCount = GetPhysicsBodiesCount();
    for ($i = $bodiesCount - 1; $i >= 0; $i--)
    {
        $body = GetPhysicsBody($i);
        if ($body && ($body->position->y > $screenHeight *2)) DestroyPhysicsBody($body);
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(BLACK());

        DrawFPS($screenWidth - 90, $screenHeight - 30);

        // Draw created physics bodies
        $bodiesCount = GetPhysicsBodiesCount();
        for ($i = 0; $i < $bodiesCount; $i++)
        {
            $body = GetPhysicsBody($i);

            if ($body != NULL)
            {
                $vertexCount = GetPhysicsShapeVerticesCount($i);
                for ($j = 0; $j < $vertexCount; $j++)
                {
                    // Get physics bodies shape vertices to draw lines
                    // Note: GetPhysicsShapeVertex() already calculates rotation transformations
                    $vertexA = GetPhysicsShapeVertex($body, $j);

                    $jj = ((($j + 1) < $vertexCount) ? ($j + 1) : 0);   // Get next vertex or first to close the shape
                    $vertexB = GetPhysicsShapeVertex($body, $jj);

                    DrawLineV($vertexA, $vertexB, GREEN());     // Draw a line between two vertex positions
                }
            }
        }

        DrawText("Left mouse button to create a polygon", 10, 10, 10, WHITE());
        DrawText("Right mouse button to create a circle", 10, 25, 10, WHITE());
        DrawText("Press 'R' to reset example", 10, 40, 10, WHITE());

        DrawText("Physac", $logoX, $logoY, 30, WHITE());
        DrawText("Powered by", $logoX + 50, $logoY - 7, 10, WHITE());

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
ClosePhysics();       // Unitialize physics

CloseWindow();        // Close window and OpenGL context
//--------------------------------------------------------------------------------------
