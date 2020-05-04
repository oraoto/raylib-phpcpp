<?php

/**
 * Initialize window and OpenGL context
 * @param int $width
 * @param int $height
 * @param  string $title
 * @return void
*/
function InitWindow($width ,$height ,$title){}

/**
 * Check if KEY_ESCAPE pressed or Close icon pressed
 * @return int
*/
function WindowShouldClose(){}

/**
 * Close window and unload OpenGL context
 * @return void
*/
function CloseWindow(){}

/**
 * Check if window has been initialized successfully
 * @return int
*/
function IsWindowReady(){}

/**
 * Check if window has been minimized (or lost focus)
 * @return int
*/
function IsWindowMinimized(){}

/**
 * Check if window has been resized
 * @return int
*/
function IsWindowResized(){}

/**
 * Check if window is currently hidden
 * @return int
*/
function IsWindowHidden(){}

/**
 * Check if window is currently fullscreen
 * @return int
*/
function IsWindowFullscreen(){}

/**
 * Toggle fullscreen mode (only PLATFORM_DESKTOP)
 * @return void
*/
function ToggleFullscreen(){}

/**
 * Show the window
 * @return void
*/
function UnhideWindow(){}

/**
 * Hide the window
 * @return void
*/
function HideWindow(){}

/**
 * Set icon for window (only PLATFORM_DESKTOP)
 * @param \RayLib\Image $image
 * @return void
*/
function SetWindowIcon($image){}

/**
 * Set title for window (only PLATFORM_DESKTOP)
 * @param  string $title
 * @return void
*/
function SetWindowTitle($title){}

/**
 * Set window position on screen (only PLATFORM_DESKTOP)
 * @param int $x
 * @param int $y
 * @return void
*/
function SetWindowPosition($x ,$y){}

/**
 * Set monitor for the current window (fullscreen mode)
 * @param int $monitor
 * @return void
*/
function SetWindowMonitor($monitor){}

/**
 * Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
 * @param int $width
 * @param int $height
 * @return void
*/
function SetWindowMinSize($width ,$height){}

/**
 * Set window dimensions
 * @param int $width
 * @param int $height
 * @return void
*/
function SetWindowSize($width ,$height){}

/**
 * Get native window handle
 * @return string
*/
function GetWindowHandle(){}

/**
 * Get current screen width
 * @return int
*/
function GetScreenWidth(){}

/**
 * Get current screen height
 * @return int
*/
function GetScreenHeight(){}

/**
 * Get number of connected monitors
 * @return int
*/
function GetMonitorCount(){}

/**
 * Get primary monitor width
 * @param int $monitor
 * @return int
*/
function GetMonitorWidth($monitor){}

/**
 * Get primary monitor height
 * @param int $monitor
 * @return int
*/
function GetMonitorHeight($monitor){}

/**
 * Get primary monitor physical width in millimetres
 * @param int $monitor
 * @return int
*/
function GetMonitorPhysicalWidth($monitor){}

/**
 * Get primary monitor physical height in millimetres
 * @param int $monitor
 * @return int
*/
function GetMonitorPhysicalHeight($monitor){}

/**
 * Get window position XY on monitor
 * @return \RayLib\Vector2
*/
function GetWindowPosition(){}

/**
 * Get the human-readable, UTF-8 encoded name of the primary monitor
 * @param int $monitor
 * @return  string
*/
function GetMonitorName($monitor){}

/**
 * Get clipboard text content
 * @return  string
*/
function GetClipboardText(){}

/**
 * Set clipboard text content
 * @param  string $text
 * @return void
*/
function SetClipboardText($text){}

/**
 * Shows cursor
 * @return void
*/
function ShowCursor(){}

/**
 * Hides cursor
 * @return void
*/
function HideCursor(){}

/**
 * Check if cursor is not visible
 * @return int
*/
function IsCursorHidden(){}

/**
 * Enables cursor (unlock cursor)
 * @return void
*/
function EnableCursor(){}

/**
 * Disables cursor (lock cursor)
 * @return void
*/
function DisableCursor(){}

/**
 * Set background color (framebuffer clear color)
 * @param \RayLib\Color $color
 * @return void
*/
function ClearBackground($color){}

/**
 * Setup canvas (framebuffer) to start drawing
 * @return void
*/
function BeginDrawing(){}

/**
 * End canvas drawing and swap buffers (double buffering)
 * @return void
*/
function EndDrawing(){}

/**
 * Initialize 2D mode with custom camera (2D)
 * @param \RayLib\Camera2D $camera
 * @return void
*/
function BeginMode2D($camera){}

/**
 * Ends 2D mode with custom camera
 * @return void
*/
function EndMode2D(){}

/**
 * Initializes 3D mode with custom camera (3D)
 * @param \RayLib\Camera3D $camera
 * @return void
*/
function BeginMode3D($camera){}

/**
 * Ends 3D mode and returns to default 2D orthographic mode
 * @return void
*/
function EndMode3D(){}

/**
 * Initializes render texture for drawing
 * @param \RayLib\RenderTexture2D $target
 * @return void
*/
function BeginTextureMode($target){}

/**
 * Ends drawing to render texture
 * @return void
*/
function EndTextureMode(){}

/**
 * Begin scissor mode (define screen area for following drawing)
 * @param int $x
 * @param int $y
 * @param int $width
 * @param int $height
 * @return void
*/
function BeginScissorMode($x ,$y ,$width ,$height){}

/**
 * End scissor mode
 * @return void
*/
function EndScissorMode(){}

/**
 * Returns a ray trace from mouse position
 * @param \RayLib\Vector2 $mousePosition
 * @param \RayLib\Camera3D $camera
 * @return \RayLib\Ray
*/
function GetMouseRay($mousePosition ,$camera){}

/**
 * Returns camera transform matrix (view matrix)
 * @param \RayLib\Camera3D $camera
 * @return \RayLib\Matrix
*/
function GetCameraMatrix($camera){}

/**
 * Returns camera 2d transform matrix
 * @param \RayLib\Camera2D $camera
 * @return \RayLib\Matrix
*/
function GetCameraMatrix2D($camera){}

/**
 * Returns the screen space position for a 3d world space position
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Camera3D $camera
 * @return \RayLib\Vector2
*/
function GetWorldToScreen($position ,$camera){}

/**
 * Returns size position for a 3d world space position
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Camera3D $camera
 * @param int $width
 * @param int $height
 * @return \RayLib\Vector2
*/
function GetWorldToScreenEx($position ,$camera ,$width ,$height){}

/**
 * Returns the screen space position for a 2d camera world space position
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Camera2D $camera
 * @return \RayLib\Vector2
*/
function GetWorldToScreen2D($position ,$camera){}

/**
 * Returns the world space position for a 2d camera screen space position
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Camera2D $camera
 * @return \RayLib\Vector2
*/
function GetScreenToWorld2D($position ,$camera){}

/**
 * Set target FPS (maximum)
 * @param int $fps
 * @return void
*/
function SetTargetFPS($fps){}

/**
 * Returns current FPS
 * @return int
*/
function GetFPS(){}

/**
 * Returns time in seconds for last frame drawn
 * @return float
*/
function GetFrameTime(){}

/**
 * Returns elapsed time in seconds since InitWindow()
 * @return double
*/
function GetTime(){}

/**
 * Returns hexadecimal value for a Color
 * @param \RayLib\Color $color
 * @return int
*/
function ColorToInt($color){}

/**
 * Returns color normalized as float [0..1]
 * @param \RayLib\Color $color
 * @return \RayLib\Vector4
*/
function ColorNormalize($color){}

/**
 * Returns color from normalized values [0..1]
 * @param \RayLib\Vector4 $normalized
 * @return \RayLib\Color
*/
function ColorFromNormalized($normalized){}

/**
 * Returns HSV values for a Color
 * @param \RayLib\Color $color
 * @return \RayLib\Vector3
*/
function ColorToHSV($color){}

/**
 * Returns a Color from HSV values
 * @param \RayLib\Vector3 $hsv
 * @return \RayLib\Color
*/
function ColorFromHSV($hsv){}

/**
 * Returns a Color struct from hexadecimal value
 * @param int $hexValue
 * @return \RayLib\Color
*/
function GetColor($hexValue){}

/**
 * Color fade-in or fade-out, alpha goes from 0.0f to 1.0f
 * @param \RayLib\Color $color
 * @param float $alpha
 * @return \RayLib\Color
*/
function Fade($color ,$alpha){}

/**
 * Setup window configuration flags (view FLAGS)
 * @param unsigned int $flags
 * @return void
*/
function SetConfigFlags($flags){}

/**
 * Set the current threshold (minimum) log level
 * @param int $logType
 * @return void
*/
function SetTraceLogLevel($logType){}

/**
 * Set the exit threshold (minimum) log level
 * @param int $logType
 * @return void
*/
function SetTraceLogExit($logType){}

/**
 * Set a trace log callback to enable custom logging
 * @param void ()(int,  string, int) $callback
 * @return void
*/
function SetTraceLogCallback($callback){}

/**
 * Required for: va_list - Only used by TraceLogCallback
 * @param int $logType
 * @param  string $text
 * @return void
*/
function TraceLog($logType ,$text){}

/**
 * Takes a screenshot of current screen (saved a .png)
 * @param  string $fileName
 * @return void
*/
function TakeScreenshot($fileName){}

/**
 * Returns a random value between min and max (both included)
 * @param int $min
 * @param int $max
 * @return int
*/
function GetRandomValue($min ,$max){}

/**
 * Load file data as byte array (read)
 * @param  string $fileName
 * @param unsigned int  $bytesRead
 * @return unsigned string
*/
function LoadFileData($fileName ,$bytesRead){}

/**
 * Save data to file from byte array (write)
 * @param  string $fileName
 * @param string $data
 * @param unsigned int $bytesToWrite
 * @return void
*/
function SaveFileData($fileName ,$data ,$bytesToWrite){}

/**
 * Load text data from file (read), returns a '\0' terminated string
 * @param  string $fileName
 * @return string
*/
function LoadFileText($fileName){}

/**
 * Save text data to file (write), string must be '\0' terminated
 * @param  string $fileName
 * @param string $text
 * @return void
*/
function SaveFileText($fileName ,$text){}

/**
 * Check if file exists
 * @param  string $fileName
 * @return int
*/
function FileExists($fileName){}

/**
 * Check file extension
 * @param  string $fileName
 * @param  string $ext
 * @return int
*/
function IsFileExtension($fileName ,$ext){}

/**
 * Check if a directory path exists
 * @param  string $dirPath
 * @return int
*/
function DirectoryExists($dirPath){}

/**
 * Get pointer to extension for a filename string
 * @param  string $fileName
 * @return  string
*/
function GetExtension($fileName){}

/**
 * Get pointer to filename for a path string
 * @param  string $filePath
 * @return  string
*/
function GetFileName($filePath){}

/**
 * Get filename string without extension (uses static string)
 * @param  string $filePath
 * @return  string
*/
function GetFileNameWithoutExt($filePath){}

/**
 * Get full path for a given fileName with path (uses static string)
 * @param  string $filePath
 * @return  string
*/
function GetDirectoryPath($filePath){}

/**
 * Get previous directory path for a given path (uses static string)
 * @param  string $dirPath
 * @return  string
*/
function GetPrevDirectoryPath($dirPath){}

/**
 * Get current working directory (uses static string)
 * @return  string
*/
function GetWorkingDirectory(){}

/**
 * Get filenames in a directory path (memory should be freed)
 * @param  string $dirPath
 * @param int  $count
 * @return string
*/
function GetDirectoryFiles($dirPath ,$count){}

/**
 * Clear directory files paths buffers (free memory)
 * @return void
*/
function ClearDirectoryFiles(){}

/**
 * Change working directory, returns true if success
 * @param  string $dir
 * @return int
*/
function ChangeDirectory($dir){}

/**
 * Check if a file has been dropped into window
 * @return int
*/
function IsFileDropped(){}

/**
 * Get dropped files names (memory should be freed)
 * @param int  $count
 * @return string
*/
function GetDroppedFiles($count){}

/**
 * Clear dropped files paths buffer (free memory)
 * @return void
*/
function ClearDroppedFiles(){}

/**
 * Get file modification time (last write time)
 * @param  string $fileName
 * @return long
*/
function GetFileModTime($fileName){}

/**
 * Compress data (DEFLATE algorythm)
 * @param unsigned string $data
 * @param int $dataLength
 * @param int  $compDataLength
 * @return unsigned string
*/
function CompressData($data ,$dataLength ,$compDataLength){}

/**
 * Decompress data (DEFLATE algorythm)
 * @param unsigned string $compData
 * @param int $compDataLength
 * @param int  $dataLength
 * @return unsigned string
*/
function DecompressData($compData ,$compDataLength ,$dataLength){}

/**
 * Save integer value to storage file (to defined position)
 * @param unsigned int $position
 * @param int $value
 * @return void
*/
function SaveStorageValue($position ,$value){}

/**
 * Load integer value from storage file (from defined position)
 * @param unsigned int $position
 * @return int
*/
function LoadStorageValue($position){}

/**
 * Open URL with default system browser (if available)
 * @param  string $url
 * @return void
*/
function OpenURL($url){}

/**
 * Detect if a key has been pressed once
 * @param int $key
 * @return int
*/
function IsKeyPressed($key){}

/**
 * Detect if a key is being pressed
 * @param int $key
 * @return int
*/
function IsKeyDown($key){}

/**
 * Detect if a key has been released once
 * @param int $key
 * @return int
*/
function IsKeyReleased($key){}

/**
 * Detect if a key is NOT being pressed
 * @param int $key
 * @return int
*/
function IsKeyUp($key){}

/**
 * Set a custom key to exit program (default is ESC)
 * @param int $key
 * @return void
*/
function SetExitKey($key){}

/**
 * Get key pressed, call it multiple times for chars queued
 * @return int
*/
function GetKeyPressed(){}

/**
 * Detect if a gamepad is available
 * @param int $gamepad
 * @return int
*/
function IsGamepadAvailable($gamepad){}

/**
 * Check gamepad name (if available)
 * @param int $gamepad
 * @param  string $name
 * @return int
*/
function IsGamepadName($gamepad ,$name){}

/**
 * Return gamepad internal name id
 * @param int $gamepad
 * @return  string
*/
function GetGamepadName($gamepad){}

/**
 * Detect if a gamepad button has been pressed once
 * @param int $gamepad
 * @param int $button
 * @return int
*/
function IsGamepadButtonPressed($gamepad ,$button){}

/**
 * Detect if a gamepad button is being pressed
 * @param int $gamepad
 * @param int $button
 * @return int
*/
function IsGamepadButtonDown($gamepad ,$button){}

/**
 * Detect if a gamepad button has been released once
 * @param int $gamepad
 * @param int $button
 * @return int
*/
function IsGamepadButtonReleased($gamepad ,$button){}

/**
 * Detect if a gamepad button is NOT being pressed
 * @param int $gamepad
 * @param int $button
 * @return int
*/
function IsGamepadButtonUp($gamepad ,$button){}

/**
 * Get the last gamepad button pressed
 * @return int
*/
function GetGamepadButtonPressed(){}

/**
 * Return gamepad axis count for a gamepad
 * @param int $gamepad
 * @return int
*/
function GetGamepadAxisCount($gamepad){}

/**
 * Return axis movement value for a gamepad axis
 * @param int $gamepad
 * @param int $axis
 * @return float
*/
function GetGamepadAxisMovement($gamepad ,$axis){}

/**
 * Detect if a mouse button has been pressed once
 * @param int $button
 * @return int
*/
function IsMouseButtonPressed($button){}

/**
 * Detect if a mouse button is being pressed
 * @param int $button
 * @return int
*/
function IsMouseButtonDown($button){}

/**
 * Detect if a mouse button has been released once
 * @param int $button
 * @return int
*/
function IsMouseButtonReleased($button){}

/**
 * Detect if a mouse button is NOT being pressed
 * @param int $button
 * @return int
*/
function IsMouseButtonUp($button){}

/**
 * Returns mouse position X
 * @return int
*/
function GetMouseX(){}

/**
 * Returns mouse position Y
 * @return int
*/
function GetMouseY(){}

/**
 * Returns mouse position XY
 * @return \RayLib\Vector2
*/
function GetMousePosition(){}

/**
 * Set mouse position XY
 * @param int $x
 * @param int $y
 * @return void
*/
function SetMousePosition($x ,$y){}

/**
 * Set mouse offset
 * @param int $offsetX
 * @param int $offsetY
 * @return void
*/
function SetMouseOffset($offsetX ,$offsetY){}

/**
 * Set mouse scaling
 * @param float $scaleX
 * @param float $scaleY
 * @return void
*/
function SetMouseScale($scaleX ,$scaleY){}

/**
 * Returns mouse wheel movement Y
 * @return int
*/
function GetMouseWheelMove(){}

/**
 * Returns touch position X for touch point 0 (relative to screen size)
 * @return int
*/
function GetTouchX(){}

/**
 * Returns touch position Y for touch point 0 (relative to screen size)
 * @return int
*/
function GetTouchY(){}

/**
 * Returns touch position XY for a touch point index (relative to screen size)
 * @param int $index
 * @return \RayLib\Vector2
*/
function GetTouchPosition($index){}

/**
 * Enable a set of gestures using flags
 * @param unsigned int $gestureFlags
 * @return void
*/
function SetGesturesEnabled($gestureFlags){}

/**
 * Check if a gesture have been detected
 * @param int $gesture
 * @return int
*/
function IsGestureDetected($gesture){}

/**
 * Get latest detected gesture
 * @return int
*/
function GetGestureDetected(){}

/**
 * Get touch points count
 * @return int
*/
function GetTouchPointsCount(){}

/**
 * Get gesture hold time in milliseconds
 * @return float
*/
function GetGestureHoldDuration(){}

/**
 * Get gesture drag vector
 * @return \RayLib\Vector2
*/
function GetGestureDragVector(){}

/**
 * Get gesture drag angle
 * @return float
*/
function GetGestureDragAngle(){}

/**
 * Get gesture pinch delta
 * @return \RayLib\Vector2
*/
function GetGesturePinchVector(){}

/**
 * Get gesture pinch angle
 * @return float
*/
function GetGesturePinchAngle(){}

/**
 * Set camera mode (multiple camera modes available)
 * @param \RayLib\Camera3D $camera
 * @param int $mode
 * @return void
*/
function SetCameraMode($camera ,$mode){}

/**
 * Update camera position for selected mode
 * @param \RayLib\Camera3D  $camera
 * @return void
*/
function UpdateCamera($camera){}

/**
 * Set camera pan key to combine with mouse movement (free camera)
 * @param int $panKey
 * @return void
*/
function SetCameraPanControl($panKey){}

/**
 * Set camera alt key to combine with mouse movement (free camera)
 * @param int $altKey
 * @return void
*/
function SetCameraAltControl($altKey){}

/**
 * Set camera smooth zoom key to combine with mouse (free camera)
 * @param int $szKey
 * @return void
*/
function SetCameraSmoothZoomControl($szKey){}

/**
 * Set camera move controls (1st person and 3rd person cameras)
 * @param int $frontKey
 * @param int $backKey
 * @param int $rightKey
 * @param int $leftKey
 * @param int $upKey
 * @param int $downKey
 * @return void
*/
function SetCameraMoveControls($frontKey ,$backKey ,$rightKey ,$leftKey ,$upKey ,$downKey){}

/**
 * Draw a pixel
 * @param int $posX
 * @param int $posY
 * @param \RayLib\Color $color
 * @return void
*/
function DrawPixel($posX ,$posY ,$color){}

/**
 * Draw a pixel (Vector version)
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Color $color
 * @return void
*/
function DrawPixelV($position ,$color){}

/**
 * Draw a line
 * @param int $startPosX
 * @param int $startPosY
 * @param int $endPosX
 * @param int $endPosY
 * @param \RayLib\Color $color
 * @return void
*/
function DrawLine($startPosX ,$startPosY ,$endPosX ,$endPosY ,$color){}

/**
 * Draw a line (Vector version)
 * @param \RayLib\Vector2 $startPos
 * @param \RayLib\Vector2 $endPos
 * @param \RayLib\Color $color
 * @return void
*/
function DrawLineV($startPos ,$endPos ,$color){}

/**
 * Draw a line defining thickness
 * @param \RayLib\Vector2 $startPos
 * @param \RayLib\Vector2 $endPos
 * @param float $thick
 * @param \RayLib\Color $color
 * @return void
*/
function DrawLineEx($startPos ,$endPos ,$thick ,$color){}

/**
 * Draw a line using cubic-bezier curves in-out
 * @param \RayLib\Vector2 $startPos
 * @param \RayLib\Vector2 $endPos
 * @param float $thick
 * @param \RayLib\Color $color
 * @return void
*/
function DrawLineBezier($startPos ,$endPos ,$thick ,$color){}

/**
 * Draw lines sequence
 * @param \RayLib\Vector2  $points
 * @param int $numPoints
 * @param \RayLib\Color $color
 * @return void
*/
function DrawLineStrip($points ,$numPoints ,$color){}

/**
 * Draw a color-filled circle
 * @param int $centerX
 * @param int $centerY
 * @param float $radius
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCircle($centerX ,$centerY ,$radius ,$color){}

/**
 * Draw a piece of a circle
 * @param \RayLib\Vector2 $center
 * @param float $radius
 * @param int $startAngle
 * @param int $endAngle
 * @param int $segments
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCircleSector($center ,$radius ,$startAngle ,$endAngle ,$segments ,$color){}

/**
 * Draw circle sector outline
 * @param \RayLib\Vector2 $center
 * @param float $radius
 * @param int $startAngle
 * @param int $endAngle
 * @param int $segments
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCircleSectorLines($center ,$radius ,$startAngle ,$endAngle ,$segments ,$color){}

/**
 * Draw a gradient-filled circle
 * @param int $centerX
 * @param int $centerY
 * @param float $radius
 * @param \RayLib\Color $color1
 * @param \RayLib\Color $color2
 * @return void
*/
function DrawCircleGradient($centerX ,$centerY ,$radius ,$color1 ,$color2){}

/**
 * Draw a color-filled circle (Vector version)
 * @param \RayLib\Vector2 $center
 * @param float $radius
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCircleV($center ,$radius ,$color){}

/**
 * Draw circle outline
 * @param int $centerX
 * @param int $centerY
 * @param float $radius
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCircleLines($centerX ,$centerY ,$radius ,$color){}

/**
 * Draw ellipse
 * @param int $centerX
 * @param int $centerY
 * @param float $radiusH
 * @param float $radiusV
 * @param \RayLib\Color $color
 * @return void
*/
function DrawEllipse($centerX ,$centerY ,$radiusH ,$radiusV ,$color){}

/**
 * Draw ellipse outline
 * @param int $centerX
 * @param int $centerY
 * @param float $radiusH
 * @param float $radiusV
 * @param \RayLib\Color $color
 * @return void
*/
function DrawEllipseLines($centerX ,$centerY ,$radiusH ,$radiusV ,$color){}

/**
 * Draw ring
 * @param \RayLib\Vector2 $center
 * @param float $innerRadius
 * @param float $outerRadius
 * @param int $startAngle
 * @param int $endAngle
 * @param int $segments
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRing($center ,$innerRadius ,$outerRadius ,$startAngle ,$endAngle ,$segments ,$color){}

/**
 * Draw ring outline
 * @param \RayLib\Vector2 $center
 * @param float $innerRadius
 * @param float $outerRadius
 * @param int $startAngle
 * @param int $endAngle
 * @param int $segments
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRingLines($center ,$innerRadius ,$outerRadius ,$startAngle ,$endAngle ,$segments ,$color){}

/**
 * Draw a color-filled rectangle
 * @param int $posX
 * @param int $posY
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangle($posX ,$posY ,$width ,$height ,$color){}

/**
 * Draw a color-filled rectangle (Vector version)
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Vector2 $size
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangleV($position ,$size ,$color){}

/**
 * Draw a color-filled rectangle
 * @param \RayLib\Rectangle $rec
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangleRec($rec ,$color){}

/**
 * Draw a color-filled rectangle with pro parameters
 * @param \RayLib\Rectangle $rec
 * @param \RayLib\Vector2 $origin
 * @param float $rotation
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectanglePro($rec ,$origin ,$rotation ,$color){}

/**
 * Draw a vertical-gradient-filled rectangle
 * @param int $posX
 * @param int $posY
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $color1
 * @param \RayLib\Color $color2
 * @return void
*/
function DrawRectangleGradientV($posX ,$posY ,$width ,$height ,$color1 ,$color2){}

/**
 * Draw a horizontal-gradient-filled rectangle
 * @param int $posX
 * @param int $posY
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $color1
 * @param \RayLib\Color $color2
 * @return void
*/
function DrawRectangleGradientH($posX ,$posY ,$width ,$height ,$color1 ,$color2){}

/**
 * Draw a gradient-filled rectangle with custom vertex colors
 * @param \RayLib\Rectangle $rec
 * @param \RayLib\Color $col1
 * @param \RayLib\Color $col2
 * @param \RayLib\Color $col3
 * @param \RayLib\Color $col4
 * @return void
*/
function DrawRectangleGradientEx($rec ,$col1 ,$col2 ,$col3 ,$col4){}

/**
 * Draw rectangle outline
 * @param int $posX
 * @param int $posY
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangleLines($posX ,$posY ,$width ,$height ,$color){}

/**
 * Draw rectangle outline with extended parameters
 * @param \RayLib\Rectangle $rec
 * @param int $lineThick
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangleLinesEx($rec ,$lineThick ,$color){}

/**
 * Draw rectangle with rounded edges
 * @param \RayLib\Rectangle $rec
 * @param float $roundness
 * @param int $segments
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangleRounded($rec ,$roundness ,$segments ,$color){}

/**
 * Draw rectangle with rounded edges outline
 * @param \RayLib\Rectangle $rec
 * @param float $roundness
 * @param int $segments
 * @param int $lineThick
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRectangleRoundedLines($rec ,$roundness ,$segments ,$lineThick ,$color){}

/**
 * Draw a color-filled triangle (vertex in counter-clockwise order!)
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @param \RayLib\Vector2 $v3
 * @param \RayLib\Color $color
 * @return void
*/
function DrawTriangle($v1 ,$v2 ,$v3 ,$color){}

/**
 * Draw triangle outline (vertex in counter-clockwise order!)
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @param \RayLib\Vector2 $v3
 * @param \RayLib\Color $color
 * @return void
*/
function DrawTriangleLines($v1 ,$v2 ,$v3 ,$color){}

/**
 * Draw a triangle fan defined by points (first vertex is the center)
 * @param \RayLib\Vector2  $points
 * @param int $numPoints
 * @param \RayLib\Color $color
 * @return void
*/
function DrawTriangleFan($points ,$numPoints ,$color){}

/**
 * Draw a triangle strip defined by points
 * @param \RayLib\Vector2  $points
 * @param int $pointsCount
 * @param \RayLib\Color $color
 * @return void
*/
function DrawTriangleStrip($points ,$pointsCount ,$color){}

/**
 * Draw a regular polygon (Vector version)
 * @param \RayLib\Vector2 $center
 * @param int $sides
 * @param float $radius
 * @param float $rotation
 * @param \RayLib\Color $color
 * @return void
*/
function DrawPoly($center ,$sides ,$radius ,$rotation ,$color){}

/**
 * Draw a polygon outline of n sides
 * @param \RayLib\Vector2 $center
 * @param int $sides
 * @param float $radius
 * @param float $rotation
 * @param \RayLib\Color $color
 * @return void
*/
function DrawPolyLines($center ,$sides ,$radius ,$rotation ,$color){}

/**
 * Check collision between two rectangles
 * @param \RayLib\Rectangle $rec1
 * @param \RayLib\Rectangle $rec2
 * @return int
*/
function CheckCollisionRecs($rec1 ,$rec2){}

/**
 * Check collision between two circles
 * @param \RayLib\Vector2 $center1
 * @param float $radius1
 * @param \RayLib\Vector2 $center2
 * @param float $radius2
 * @return int
*/
function CheckCollisionCircles($center1 ,$radius1 ,$center2 ,$radius2){}

/**
 * Check collision between circle and rectangle
 * @param \RayLib\Vector2 $center
 * @param float $radius
 * @param \RayLib\Rectangle $rec
 * @return int
*/
function CheckCollisionCircleRec($center ,$radius ,$rec){}

/**
 * Get collision rectangle for two rectangles collision
 * @param \RayLib\Rectangle $rec1
 * @param \RayLib\Rectangle $rec2
 * @return \RayLib\Rectangle
*/
function GetCollisionRec($rec1 ,$rec2){}

/**
 * Check if point is inside rectangle
 * @param \RayLib\Vector2 $point
 * @param \RayLib\Rectangle $rec
 * @return int
*/
function CheckCollisionPointRec($point ,$rec){}

/**
 * Check if point is inside circle
 * @param \RayLib\Vector2 $point
 * @param \RayLib\Vector2 $center
 * @param float $radius
 * @return int
*/
function CheckCollisionPointCircle($point ,$center ,$radius){}

/**
 * Check if point is inside a triangle
 * @param \RayLib\Vector2 $point
 * @param \RayLib\Vector2 $p1
 * @param \RayLib\Vector2 $p2
 * @param \RayLib\Vector2 $p3
 * @return int
*/
function CheckCollisionPointTriangle($point ,$p1 ,$p2 ,$p3){}

/**
 * Load image from file into CPU memory (RAM)
 * @param  string $fileName
 * @return \RayLib\Image
*/
function LoadImage($fileName){}

/**
 * Load image from Color array data (RGBA - 32bit)
 * @param \RayLib\Color  $pixels
 * @param int $width
 * @param int $height
 * @return \RayLib\Image
*/
function LoadImageEx($pixels ,$width ,$height){}

/**
 * Load image from raw data with parameters
 * @param string $data
 * @param int $width
 * @param int $height
 * @param int $format
 * @return \RayLib\Image
*/
function LoadImagePro($data ,$width ,$height ,$format){}

/**
 * Load image from RAW file data
 * @param  string $fileName
 * @param int $width
 * @param int $height
 * @param int $format
 * @param int $headerSize
 * @return \RayLib\Image
*/
function LoadImageRaw($fileName ,$width ,$height ,$format ,$headerSize){}

/**
 * Unload image from CPU memory (RAM)
 * @param \RayLib\Image $image
 * @return void
*/
function UnloadImage($image){}

/**
 * Export image data to file
 * @param \RayLib\Image $image
 * @param  string $fileName
 * @return void
*/
function ExportImage($image ,$fileName){}

/**
 * Export image as code file defining an array of bytes
 * @param \RayLib\Image $image
 * @param  string $fileName
 * @return void
*/
function ExportImageAsCode($image ,$fileName){}

/**
 * Get pixel data from image as a Color struct array
 * @param \RayLib\Image $image
 * @return \RayLib\Color
*/
function GetImageData($image){}

/**
 * Get pixel data from image as Vector4 array (float normalized)
 * @param \RayLib\Image $image
 * @return \RayLib\Vector4
*/
function GetImageDataNormalized($image){}

/**
 * Generate image: plain color
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $color
 * @return \RayLib\Image
*/
function GenImageColor($width ,$height ,$color){}

/**
 * Generate image: vertical gradient
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $top
 * @param \RayLib\Color $bottom
 * @return \RayLib\Image
*/
function GenImageGradientV($width ,$height ,$top ,$bottom){}

/**
 * Generate image: horizontal gradient
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $left
 * @param \RayLib\Color $right
 * @return \RayLib\Image
*/
function GenImageGradientH($width ,$height ,$left ,$right){}

/**
 * Generate image: radial gradient
 * @param int $width
 * @param int $height
 * @param float $density
 * @param \RayLib\Color $inner
 * @param \RayLib\Color $outer
 * @return \RayLib\Image
*/
function GenImageGradientRadial($width ,$height ,$density ,$inner ,$outer){}

/**
 * Generate image: checked
 * @param int $width
 * @param int $height
 * @param int $checksX
 * @param int $checksY
 * @param \RayLib\Color $col1
 * @param \RayLib\Color $col2
 * @return \RayLib\Image
*/
function GenImageChecked($width ,$height ,$checksX ,$checksY ,$col1 ,$col2){}

/**
 * Generate image: white noise
 * @param int $width
 * @param int $height
 * @param float $factor
 * @return \RayLib\Image
*/
function GenImageWhiteNoise($width ,$height ,$factor){}

/**
 * Generate image: perlin noise
 * @param int $width
 * @param int $height
 * @param int $offsetX
 * @param int $offsetY
 * @param float $scale
 * @return \RayLib\Image
*/
function GenImagePerlinNoise($width ,$height ,$offsetX ,$offsetY ,$scale){}

/**
 * Generate image: cellular algorithm. Bigger tileSize means bigger cells
 * @param int $width
 * @param int $height
 * @param int $tileSize
 * @return \RayLib\Image
*/
function GenImageCellular($width ,$height ,$tileSize){}

/**
 * Create an image duplicate (useful for transformations)
 * @param \RayLib\Image $image
 * @return \RayLib\Image
*/
function ImageCopy($image){}

/**
 * Create an image from another image piece
 * @param \RayLib\Image $image
 * @param \RayLib\Rectangle $rec
 * @return \RayLib\Image
*/
function ImageFromImage($image ,$rec){}

/**
 * Create an image from text (default font)
 * @param  string $text
 * @param int $fontSize
 * @param \RayLib\Color $color
 * @return \RayLib\Image
*/
function ImageText($text ,$fontSize ,$color){}

/**
 * Create an image from text (custom sprite font)
 * @param \RayLib\Font $font
 * @param  string $text
 * @param float $fontSize
 * @param float $spacing
 * @param \RayLib\Color $tint
 * @return \RayLib\Image
*/
function ImageTextEx($font ,$text ,$fontSize ,$spacing ,$tint){}

/**
 * Convert image to POT (power-of-two)
 * @param \RayLib\Image  $image
 * @param \RayLib\Color $fillColor
 * @return void
*/
function ImageToPOT($image ,$fillColor){}

/**
 * Convert image data to desired format
 * @param \RayLib\Image  $image
 * @param int $newFormat
 * @return void
*/
function ImageFormat($image ,$newFormat){}

/**
 * Apply alpha mask to image
 * @param \RayLib\Image  $image
 * @param \RayLib\Image $alphaMask
 * @return void
*/
function ImageAlphaMask($image ,$alphaMask){}

/**
 * Clear alpha channel to desired color
 * @param \RayLib\Image  $image
 * @param \RayLib\Color $color
 * @param float $threshold
 * @return void
*/
function ImageAlphaClear($image ,$color ,$threshold){}

/**
 * Crop image depending on alpha value
 * @param \RayLib\Image  $image
 * @param float $threshold
 * @return void
*/
function ImageAlphaCrop($image ,$threshold){}

/**
 * Premultiply alpha channel
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageAlphaPremultiply($image){}

/**
 * Crop an image to a defined rectangle
 * @param \RayLib\Image  $image
 * @param \RayLib\Rectangle $crop
 * @return void
*/
function ImageCrop($image ,$crop){}

/**
 * Resize image (Bicubic scaling algorithm)
 * @param \RayLib\Image  $image
 * @param int $newWidth
 * @param int $newHeight
 * @return void
*/
function ImageResize($image ,$newWidth ,$newHeight){}

/**
 * Resize image (Nearest-Neighbor scaling algorithm)
 * @param \RayLib\Image  $image
 * @param int $newWidth
 * @param int $newHeight
 * @return void
*/
function ImageResizeNN($image ,$newWidth ,$newHeight){}

/**
 * Resize canvas and fill with color
 * @param \RayLib\Image  $image
 * @param int $newWidth
 * @param int $newHeight
 * @param int $offsetX
 * @param int $offsetY
 * @param \RayLib\Color $color
 * @return void
*/
function ImageResizeCanvas($image ,$newWidth ,$newHeight ,$offsetX ,$offsetY ,$color){}

/**
 * Generate all mipmap levels for a provided image
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageMipmaps($image){}

/**
 * Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
 * @param \RayLib\Image  $image
 * @param int $rBpp
 * @param int $gBpp
 * @param int $bBpp
 * @param int $aBpp
 * @return void
*/
function ImageDither($image ,$rBpp ,$gBpp ,$bBpp ,$aBpp){}

/**
 * Flip image vertically
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageFlipVertical($image){}

/**
 * Flip image horizontally
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageFlipHorizontal($image){}

/**
 * Rotate image clockwise 90deg
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageRotateCW($image){}

/**
 * Rotate image counter-clockwise 90deg
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageRotateCCW($image){}

/**
 * Modify image color: tint
 * @param \RayLib\Image  $image
 * @param \RayLib\Color $color
 * @return void
*/
function ImageColorTint($image ,$color){}

/**
 * Modify image color: invert
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageColorInvert($image){}

/**
 * Modify image color: grayscale
 * @param \RayLib\Image  $image
 * @return void
*/
function ImageColorGrayscale($image){}

/**
 * Modify image color: contrast (-100 to 100)
 * @param \RayLib\Image  $image
 * @param float $contrast
 * @return void
*/
function ImageColorContrast($image ,$contrast){}

/**
 * Modify image color: brightness (-255 to 255)
 * @param \RayLib\Image  $image
 * @param int $brightness
 * @return void
*/
function ImageColorBrightness($image ,$brightness){}

/**
 * Modify image color: replace color
 * @param \RayLib\Image  $image
 * @param \RayLib\Color $color
 * @param \RayLib\Color $replace
 * @return void
*/
function ImageColorReplace($image ,$color ,$replace){}

/**
 * Extract color palette from image to maximum size (memory should be freed)
 * @param \RayLib\Image $image
 * @param int $maxPaletteSize
 * @param int  $extractCount
 * @return \RayLib\Color
*/
function ImageExtractPalette($image ,$maxPaletteSize ,$extractCount){}

/**
 * Get image alpha border rectangle
 * @param \RayLib\Image $image
 * @param float $threshold
 * @return \RayLib\Rectangle
*/
function GetImageAlphaBorder($image ,$threshold){}

/**
 * Clear image background with given color
 * @param \RayLib\Image  $dst
 * @param \RayLib\Color $color
 * @return void
*/
function ImageClearBackground($dst ,$color){}

/**
 * Draw pixel within an image
 * @param \RayLib\Image  $dst
 * @param int $posX
 * @param int $posY
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawPixel($dst ,$posX ,$posY ,$color){}

/**
 * Draw pixel within an image (Vector version)
 * @param \RayLib\Image  $dst
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawPixelV($dst ,$position ,$color){}

/**
 * Draw line within an image
 * @param \RayLib\Image  $dst
 * @param int $startPosX
 * @param int $startPosY
 * @param int $endPosX
 * @param int $endPosY
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawLine($dst ,$startPosX ,$startPosY ,$endPosX ,$endPosY ,$color){}

/**
 * Draw line within an image (Vector version)
 * @param \RayLib\Image  $dst
 * @param \RayLib\Vector2 $start
 * @param \RayLib\Vector2 $end
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawLineV($dst ,$start ,$end ,$color){}

/**
 * Draw circle within an image
 * @param \RayLib\Image  $dst
 * @param int $centerX
 * @param int $centerY
 * @param int $radius
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawCircle($dst ,$centerX ,$centerY ,$radius ,$color){}

/**
 * Draw circle within an image (Vector version)
 * @param \RayLib\Image  $dst
 * @param \RayLib\Vector2 $center
 * @param int $radius
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawCircleV($dst ,$center ,$radius ,$color){}

/**
 * Draw rectangle within an image
 * @param \RayLib\Image  $dst
 * @param int $posX
 * @param int $posY
 * @param int $width
 * @param int $height
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawRectangle($dst ,$posX ,$posY ,$width ,$height ,$color){}

/**
 * Draw rectangle within an image (Vector version)
 * @param \RayLib\Image  $dst
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Vector2 $size
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawRectangleV($dst ,$position ,$size ,$color){}

/**
 * Draw rectangle within an image
 * @param \RayLib\Image  $dst
 * @param \RayLib\Rectangle $rec
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawRectangleRec($dst ,$rec ,$color){}

/**
 * Draw rectangle lines within an image
 * @param \RayLib\Image  $dst
 * @param \RayLib\Rectangle $rec
 * @param int $thick
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawRectangleLines($dst ,$rec ,$thick ,$color){}

/**
 * Draw pixel within an image
 * @param \RayLib\Image  $dst
 * @param \RayLib\Image $src
 * @param \RayLib\Rectangle $srcRec
 * @param \RayLib\Rectangle $dstRec
 * @param \RayLib\Color $tint
 * @return void
*/
function ImageDraw($dst ,$src ,$srcRec ,$dstRec ,$tint){}

/**
 * Draw text (default font) within an image (destination)
 * @param \RayLib\Image  $dst
 * @param \RayLib\Vector2 $position
 * @param  string $text
 * @param int $fontSize
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawText($dst ,$position ,$text ,$fontSize ,$color){}

/**
 * Draw text (custom sprite font) within an image (destination)
 * @param \RayLib\Image  $dst
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Font $font
 * @param  string $text
 * @param float $fontSize
 * @param float $spacing
 * @param \RayLib\Color $color
 * @return void
*/
function ImageDrawTextEx($dst ,$position ,$font ,$text ,$fontSize ,$spacing ,$color){}

/**
 * Load texture from file into GPU memory (VRAM)
 * @param  string $fileName
 * @return \RayLib\Texture2D
*/
function LoadTexture($fileName){}

/**
 * Load texture from image data
 * @param \RayLib\Image $image
 * @return \RayLib\Texture2D
*/
function LoadTextureFromImage($image){}

/**
 * Load cubemap from image, multiple image cubemap layouts supported
 * @param \RayLib\Image $image
 * @param int $layoutType
 * @return \RayLib\Texture2D
*/
function LoadTextureCubemap($image ,$layoutType){}

/**
 * Load texture for rendering (framebuffer)
 * @param int $width
 * @param int $height
 * @return \RayLib\RenderTexture2D
*/
function LoadRenderTexture($width ,$height){}

/**
 * Unload texture from GPU memory (VRAM)
 * @param \RayLib\Texture2D $texture
 * @return void
*/
function UnloadTexture($texture){}

/**
 * Unload render texture from GPU memory (VRAM)
 * @param \RayLib\RenderTexture2D $target
 * @return void
*/
function UnloadRenderTexture($target){}

/**
 * Update GPU texture with new data
 * @param \RayLib\Texture2D $texture
 * @param  string $pixels
 * @return void
*/
function UpdateTexture($texture ,$pixels){}

/**
 * Get pixel data from GPU texture and return an Image
 * @param \RayLib\Texture2D $texture
 * @return \RayLib\Image
*/
function GetTextureData($texture){}

/**
 * Get pixel data from screen buffer and return an Image (screenshot)
 * @return \RayLib\Image
*/
function GetScreenData(){}

/**
 * Generate GPU mipmaps for a texture
 * @param \RayLib\Texture2D  $texture
 * @return void
*/
function GenTextureMipmaps($texture){}

/**
 * Set texture scaling filter mode
 * @param \RayLib\Texture2D $texture
 * @param int $filterMode
 * @return void
*/
function SetTextureFilter($texture ,$filterMode){}

/**
 * Set texture wrapping mode
 * @param \RayLib\Texture2D $texture
 * @param int $wrapMode
 * @return void
*/
function SetTextureWrap($texture ,$wrapMode){}

/**
 * Draw a Texture2D
 * @param \RayLib\Texture2D $texture
 * @param int $posX
 * @param int $posY
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTexture($texture ,$posX ,$posY ,$tint){}

/**
 * Draw a Texture2D with position defined as Vector2
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextureV($texture ,$position ,$tint){}

/**
 * Draw a Texture2D with extended parameters
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Vector2 $position
 * @param float $rotation
 * @param float $scale
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextureEx($texture ,$position ,$rotation ,$scale ,$tint){}

/**
 * Draw a part of a texture defined by a rectangle
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Rectangle $sourceRec
 * @param \RayLib\Vector2 $position
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextureRec($texture ,$sourceRec ,$position ,$tint){}

/**
 * Draw texture quad with tiling and offset parameters
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Vector2 $tiling
 * @param \RayLib\Vector2 $offset
 * @param \RayLib\Rectangle $quad
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextureQuad($texture ,$tiling ,$offset ,$quad ,$tint){}

/**
 * Draw a part of a texture defined by a rectangle with 'pro' parameters
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Rectangle $sourceRec
 * @param \RayLib\Rectangle $destRec
 * @param \RayLib\Vector2 $origin
 * @param float $rotation
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTexturePro($texture ,$sourceRec ,$destRec ,$origin ,$rotation ,$tint){}

/**
 * Draws a texture (or part of it) that stretches or shrinks nicely
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\NPatchInfo $nPatchInfo
 * @param \RayLib\Rectangle $destRec
 * @param \RayLib\Vector2 $origin
 * @param float $rotation
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextureNPatch($texture ,$nPatchInfo ,$destRec ,$origin ,$rotation ,$tint){}

/**
 * Get pixel data size in bytes (image or texture)
 * @param int $width
 * @param int $height
 * @param int $format
 * @return int
*/
function GetPixelDataSize($width ,$height ,$format){}

/**
 * Get the default Font
 * @return \RayLib\Font
*/
function GetFontDefault(){}

/**
 * Load font from file into GPU memory (VRAM)
 * @param  string $fileName
 * @return \RayLib\Font
*/
function LoadFont($fileName){}

/**
 * Load font from file with extended parameters
 * @param  string $fileName
 * @param int $fontSize
 * @param int  $fontChars
 * @param int $charsCount
 * @return \RayLib\Font
*/
function LoadFontEx($fileName ,$fontSize ,$fontChars ,$charsCount){}

/**
 * Load font from Image (XNA style)
 * @param \RayLib\Image $image
 * @param \RayLib\Color $key
 * @param int $firstChar
 * @return \RayLib\Font
*/
function LoadFontFromImage($image ,$key ,$firstChar){}

/**
 * Load font data for further use
 * @param  string $fileName
 * @param int $fontSize
 * @param int  $fontChars
 * @param int $charsCount
 * @param int $type
 * @return \RayLib\CharInfo
*/
function LoadFontData($fileName ,$fontSize ,$fontChars ,$charsCount ,$type){}

/**
 * Generate image font atlas using chars info
 * @param  \RayLib\CharInfo  $chars
 * @param \RayLib\Rectangle  $recs
 * @param int $charsCount
 * @param int $fontSize
 * @param int $padding
 * @param int $packMethod
 * @return \RayLib\Image
*/
function GenImageFontAtlas($chars ,$recs ,$charsCount ,$fontSize ,$padding ,$packMethod){}

/**
 * Unload Font from GPU memory (VRAM)
 * @param \RayLib\Font $font
 * @return void
*/
function UnloadFont($font){}

/**
 * Shows current FPS
 * @param int $posX
 * @param int $posY
 * @return void
*/
function DrawFPS($posX ,$posY){}

/**
 * Draw text (default font) within an image (destination)
 * @param  string $text
 * @param int $posX
 * @param int $posY
 * @param int $fontSize
 * @param \RayLib\Color $color
 * @return void
*/
function DrawText($text ,$posX ,$posY ,$fontSize ,$color){}

/**
 * Draw text (custom sprite font) within an image (destination)
 * @param \RayLib\Font $font
 * @param  string $text
 * @param \RayLib\Vector2 $position
 * @param float $fontSize
 * @param float $spacing
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextEx($font ,$text ,$position ,$fontSize ,$spacing ,$tint){}

/**
 * Draw text using font inside rectangle limits
 * @param \RayLib\Font $font
 * @param  string $text
 * @param \RayLib\Rectangle $rec
 * @param float $fontSize
 * @param float $spacing
 * @param int $wordWrap
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextRec($font ,$text ,$rec ,$fontSize ,$spacing ,$wordWrap ,$tint){}

/**
 *
 * @param \RayLib\Font $font
 * @param  string $text
 * @param \RayLib\Rectangle $rec
 * @param float $fontSize
 * @param float $spacing
 * @param int $wordWrap
 * @param \RayLib\Color $tint
 * @param int $selectStart
 * @param int $selectLength
 * @param \RayLib\Color $selectTint
 * @param \RayLib\Color $selectBackTint
 * @return void
*/
function DrawTextRecEx($font ,$text ,$rec ,$fontSize ,$spacing ,$wordWrap ,$tint ,$selectStart ,$selectLength ,$selectTint ,$selectBackTint){}

/**
 * Draw one character (codepoint)
 * @param \RayLib\Font $font
 * @param int $codepoint
 * @param \RayLib\Vector2 $position
 * @param float $scale
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawTextCodepoint($font ,$codepoint ,$position ,$scale ,$tint){}

/**
 * Measure string width for default font
 * @param  string $text
 * @param int $fontSize
 * @return int
*/
function MeasureText($text ,$fontSize){}

/**
 * Measure string size for Font
 * @param \RayLib\Font $font
 * @param  string $text
 * @param float $fontSize
 * @param float $spacing
 * @return \RayLib\Vector2
*/
function MeasureTextEx($font ,$text ,$fontSize ,$spacing){}

/**
 * Get index position for a unicode character on font
 * @param \RayLib\Font $font
 * @param int $codepoint
 * @return int
*/
function GetGlyphIndex($font ,$codepoint){}

/**
 * Copy one string to another, returns bytes copied
 * @param string $dst
 * @param  string $src
 * @return int
*/
function TextCopy($dst ,$src){}

/**
 * Check if two text string are equal
 * @param  string $text1
 * @param  string $text2
 * @return int
*/
function TextIsEqual($text1 ,$text2){}

/**
 * Get text length, checks for '\0' ending
 * @param  string $text
 * @return unsigned int
*/
function TextLength($text){}

/**
 * Text formatting with variables (sprintf style)
 * @param  string $text
 * @return  string
*/
function TextFormat($text){}

/**
 * Get a piece of a text string
 * @param  string $text
 * @param int $position
 * @param int $length
 * @return  string
*/
function TextSubtext($text ,$position ,$length){}

/**
 * Replace text string (memory must be freed!)
 * @param string $text
 * @param  string $replace
 * @param  string $by
 * @return string
*/
function TextReplace($text ,$replace ,$by){}

/**
 * Insert text in a position (memory must be freed!)
 * @param  string $text
 * @param  string $insert
 * @param int $position
 * @return string
*/
function TextInsert($text ,$insert ,$position){}

/**
 * Join text strings with delimiter
 * @param  string $textList
 * @param int $count
 * @param  string $delimiter
 * @return  string
*/
function TextJoin($textList ,$count ,$delimiter){}

/**
 * Split text into multiple strings
 * @param  string $text
 * @param char $delimiter
 * @param int  $count
 * @return  string
*/
function TextSplit($text ,$delimiter ,$count){}

/**
 * Append text at specific position and move cursor!
 * @param string $text
 * @param  string $append
 * @param int  $position
 * @return void
*/
function TextAppend($text ,$append ,$position){}

/**
 * Find first text occurrence within a string
 * @param  string $text
 * @param  string $find
 * @return int
*/
function TextFindIndex($text ,$find){}

/**
 * Get upper case version of provided string
 * @param  string $text
 * @return  string
*/
function TextToUpper($text){}

/**
 * Get lower case version of provided string
 * @param  string $text
 * @return  string
*/
function TextToLower($text){}

/**
 * Get Pascal case notation version of provided string
 * @param  string $text
 * @return  string
*/
function TextToPascal($text){}

/**
 * Get integer value from text (negative values not supported)
 * @param  string $text
 * @return int
*/
function TextToInteger($text){}

/**
 * Encode text codepoint into utf8 text (memory must be freed!)
 * @param int  $codepoints
 * @param int $length
 * @return string
*/
function TextToUtf8($codepoints ,$length){}

/**
 * Get all codepoints in a string, codepoints count returned by parameters
 * @param  string $text
 * @param int  $count
 * @return int
*/
function GetCodepoints($text ,$count){}

/**
 * Get total number of characters (codepoints) in a UTF8 encoded string
 * @param  string $text
 * @return int
*/
function GetCodepointsCount($text){}

/**
 * Returns next codepoint in a UTF8 encoded string; 0x3f('?') is returned on failure
 * @param  string $text
 * @param int  $bytesProcessed
 * @return int
*/
function GetNextCodepoint($text ,$bytesProcessed){}

/**
 * Encode codepoint into utf8 text (char array length returned as parameter)
 * @param int $codepoint
 * @param int  $byteLength
 * @return  string
*/
function CodepointToUtf8($codepoint ,$byteLength){}

/**
 * Draw a line in 3D world space
 * @param \RayLib\Vector3 $startPos
 * @param \RayLib\Vector3 $endPos
 * @param \RayLib\Color $color
 * @return void
*/
function DrawLine3D($startPos ,$endPos ,$color){}

/**
 * Draw a point in 3D space, actually a small line
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Color $color
 * @return void
*/
function DrawPoint3D($position ,$color){}

/**
 * Draw a circle in 3D world space
 * @param \RayLib\Vector3 $center
 * @param float $radius
 * @param \RayLib\Vector3 $rotationAxis
 * @param float $rotationAngle
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCircle3D($center ,$radius ,$rotationAxis ,$rotationAngle ,$color){}

/**
 * Draw cube
 * @param \RayLib\Vector3 $position
 * @param float $width
 * @param float $height
 * @param float $length
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCube($position ,$width ,$height ,$length ,$color){}

/**
 * Draw cube (Vector version)
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Vector3 $size
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCubeV($position ,$size ,$color){}

/**
 * Draw cube wires
 * @param \RayLib\Vector3 $position
 * @param float $width
 * @param float $height
 * @param float $length
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCubeWires($position ,$width ,$height ,$length ,$color){}

/**
 * Draw cube wires (Vector version)
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Vector3 $size
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCubeWiresV($position ,$size ,$color){}

/**
 * Draw cube textured
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Vector3 $position
 * @param float $width
 * @param float $height
 * @param float $length
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCubeTexture($texture ,$position ,$width ,$height ,$length ,$color){}

/**
 * Draw sphere
 * @param \RayLib\Vector3 $centerPos
 * @param float $radius
 * @param \RayLib\Color $color
 * @return void
*/
function DrawSphere($centerPos ,$radius ,$color){}

/**
 * Draw sphere with extended parameters
 * @param \RayLib\Vector3 $centerPos
 * @param float $radius
 * @param int $rings
 * @param int $slices
 * @param \RayLib\Color $color
 * @return void
*/
function DrawSphereEx($centerPos ,$radius ,$rings ,$slices ,$color){}

/**
 * Draw sphere wires
 * @param \RayLib\Vector3 $centerPos
 * @param float $radius
 * @param int $rings
 * @param int $slices
 * @param \RayLib\Color $color
 * @return void
*/
function DrawSphereWires($centerPos ,$radius ,$rings ,$slices ,$color){}

/**
 * Draw a cylinder/cone
 * @param \RayLib\Vector3 $position
 * @param float $radiusTop
 * @param float $radiusBottom
 * @param float $height
 * @param int $slices
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCylinder($position ,$radiusTop ,$radiusBottom ,$height ,$slices ,$color){}

/**
 * Draw a cylinder/cone wires
 * @param \RayLib\Vector3 $position
 * @param float $radiusTop
 * @param float $radiusBottom
 * @param float $height
 * @param int $slices
 * @param \RayLib\Color $color
 * @return void
*/
function DrawCylinderWires($position ,$radiusTop ,$radiusBottom ,$height ,$slices ,$color){}

/**
 * Draw a plane XZ
 * @param \RayLib\Vector3 $centerPos
 * @param \RayLib\Vector2 $size
 * @param \RayLib\Color $color
 * @return void
*/
function DrawPlane($centerPos ,$size ,$color){}

/**
 * Draw a ray line
 * @param \RayLib\Ray $ray
 * @param \RayLib\Color $color
 * @return void
*/
function DrawRay($ray ,$color){}

/**
 * Draw a grid (centered at (0, 0, 0))
 * @param int $slices
 * @param float $spacing
 * @return void
*/
function DrawGrid($slices ,$spacing){}

/**
 * Draw simple gizmo
 * @param \RayLib\Vector3 $position
 * @return void
*/
function DrawGizmo($position){}

/**
 * Load model from files (meshes and materials)
 * @param  string $fileName
 * @return \RayLib\Model
*/
function LoadModel($fileName){}

/**
 * Load model from generated mesh (default material)
 * @param \RayLib\Mesh $mesh
 * @return \RayLib\Model
*/
function LoadModelFromMesh($mesh){}

/**
 * Unload model from memory (RAM and/or VRAM)
 * @param \RayLib\Model $model
 * @return void
*/
function UnloadModel($model){}

/**
 * Load meshes from model file
 * @param  string $fileName
 * @param int  $meshCount
 * @return \RayLib\Mesh
*/
function LoadMeshes($fileName ,$meshCount){}

/**
 * Export mesh data to file
 * @param \RayLib\Mesh $mesh
 * @param  string $fileName
 * @return void
*/
function ExportMesh($mesh ,$fileName){}

/**
 * Unload mesh from memory (RAM and/or VRAM)
 * @param \RayLib\Mesh $mesh
 * @return void
*/
function UnloadMesh($mesh){}

/**
 * Load materials from model file
 * @param  string $fileName
 * @param int  $materialCount
 * @return \RayLib\Material
*/
function LoadMaterials($fileName ,$materialCount){}

/**
 * Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
 * @return \RayLib\Material
*/
function LoadMaterialDefault(){}

/**
 * Unload material from GPU memory (VRAM)
 * @param \RayLib\Material $material
 * @return void
*/
function UnloadMaterial($material){}

/**
 * Set texture for a material map type (MAP_DIFFUSE, MAP_SPECULAR...)
 * @param \RayLib\Material  $material
 * @param int $mapType
 * @param \RayLib\Texture2D $texture
 * @return void
*/
function SetMaterialTexture($material ,$mapType ,$texture){}

/**
 * Set material for a mesh
 * @param \RayLib\Model  $model
 * @param int $meshId
 * @param int $materialId
 * @return void
*/
function SetModelMeshMaterial($model ,$meshId ,$materialId){}

/**
 * Load model animations from file
 * @param  string $fileName
 * @param int  $animsCount
 * @return \RayLib\ModelAnimation
*/
function LoadModelAnimations($fileName ,$animsCount){}

/**
 * Update model animation pose
 * @param \RayLib\Model $model
 * @param \RayLib\ModelAnimation $anim
 * @param int $frame
 * @return void
*/
function UpdateModelAnimation($model ,$anim ,$frame){}

/**
 * Unload animation data
 * @param \RayLib\ModelAnimation $anim
 * @return void
*/
function UnloadModelAnimation($anim){}

/**
 * Check model animation skeleton match
 * @param \RayLib\Model $model
 * @param \RayLib\ModelAnimation $anim
 * @return int
*/
function IsModelAnimationValid($model ,$anim){}

/**
 * Generate polygonal mesh
 * @param int $sides
 * @param float $radius
 * @return \RayLib\Mesh
*/
function GenMeshPoly($sides ,$radius){}

/**
 * Generate plane mesh (with subdivisions)
 * @param float $width
 * @param float $length
 * @param int $resX
 * @param int $resZ
 * @return \RayLib\Mesh
*/
function GenMeshPlane($width ,$length ,$resX ,$resZ){}

/**
 * Generate cuboid mesh
 * @param float $width
 * @param float $height
 * @param float $length
 * @return \RayLib\Mesh
*/
function GenMeshCube($width ,$height ,$length){}

/**
 * Generate sphere mesh (standard sphere)
 * @param float $radius
 * @param int $rings
 * @param int $slices
 * @return \RayLib\Mesh
*/
function GenMeshSphere($radius ,$rings ,$slices){}

/**
 * Generate half-sphere mesh (no bottom cap)
 * @param float $radius
 * @param int $rings
 * @param int $slices
 * @return \RayLib\Mesh
*/
function GenMeshHemiSphere($radius ,$rings ,$slices){}

/**
 * Generate cylinder mesh
 * @param float $radius
 * @param float $height
 * @param int $slices
 * @return \RayLib\Mesh
*/
function GenMeshCylinder($radius ,$height ,$slices){}

/**
 * Generate torus mesh
 * @param float $radius
 * @param float $size
 * @param int $radSeg
 * @param int $sides
 * @return \RayLib\Mesh
*/
function GenMeshTorus($radius ,$size ,$radSeg ,$sides){}

/**
 * Generate trefoil knot mesh
 * @param float $radius
 * @param float $size
 * @param int $radSeg
 * @param int $sides
 * @return \RayLib\Mesh
*/
function GenMeshKnot($radius ,$size ,$radSeg ,$sides){}

/**
 * Generate heightmap mesh from image data
 * @param \RayLib\Image $heightmap
 * @param \RayLib\Vector3 $size
 * @return \RayLib\Mesh
*/
function GenMeshHeightmap($heightmap ,$size){}

/**
 * Generate cubes-based map mesh from image data
 * @param \RayLib\Image $cubicmap
 * @param \RayLib\Vector3 $cubeSize
 * @return \RayLib\Mesh
*/
function GenMeshCubicmap($cubicmap ,$cubeSize){}

/**
 * Compute mesh bounding box limits
 * @param \RayLib\Mesh $mesh
 * @return \RayLib\BoundingBox
*/
function MeshBoundingBox($mesh){}

/**
 * Compute mesh tangents
 * @param \RayLib\Mesh  $mesh
 * @return void
*/
function MeshTangents($mesh){}

/**
 * Compute mesh binormals
 * @param \RayLib\Mesh  $mesh
 * @return void
*/
function MeshBinormals($mesh){}

/**
 * Draw a model (with texture if set)
 * @param \RayLib\Model $model
 * @param \RayLib\Vector3 $position
 * @param float $scale
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawModel($model ,$position ,$scale ,$tint){}

/**
 * Draw a model with extended parameters
 * @param \RayLib\Model $model
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Vector3 $rotationAxis
 * @param float $rotationAngle
 * @param \RayLib\Vector3 $scale
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawModelEx($model ,$position ,$rotationAxis ,$rotationAngle ,$scale ,$tint){}

/**
 * Draw a model wires (with texture if set)
 * @param \RayLib\Model $model
 * @param \RayLib\Vector3 $position
 * @param float $scale
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawModelWires($model ,$position ,$scale ,$tint){}

/**
 * Draw a model wires (with texture if set) with extended parameters
 * @param \RayLib\Model $model
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Vector3 $rotationAxis
 * @param float $rotationAngle
 * @param \RayLib\Vector3 $scale
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawModelWiresEx($model ,$position ,$rotationAxis ,$rotationAngle ,$scale ,$tint){}

/**
 * Draw bounding box (wires)
 * @param \RayLib\BoundingBox $box
 * @param \RayLib\Color $color
 * @return void
*/
function DrawBoundingBox($box ,$color){}

/**
 * Draw a billboard texture
 * @param \RayLib\Camera3D $camera
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Vector3 $center
 * @param float $size
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawBillboard($camera ,$texture ,$center ,$size ,$tint){}

/**
 * Draw a billboard texture defined by sourceRec
 * @param \RayLib\Camera3D $camera
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Rectangle $sourceRec
 * @param \RayLib\Vector3 $center
 * @param float $size
 * @param \RayLib\Color $tint
 * @return void
*/
function DrawBillboardRec($camera ,$texture ,$sourceRec ,$center ,$size ,$tint){}

/**
 * Detect collision between two spheres
 * @param \RayLib\Vector3 $centerA
 * @param float $radiusA
 * @param \RayLib\Vector3 $centerB
 * @param float $radiusB
 * @return int
*/
function CheckCollisionSpheres($centerA ,$radiusA ,$centerB ,$radiusB){}

/**
 * Detect collision between two bounding boxes
 * @param \RayLib\BoundingBox $box1
 * @param \RayLib\BoundingBox $box2
 * @return int
*/
function CheckCollisionBoxes($box1 ,$box2){}

/**
 * Detect collision between box and sphere
 * @param \RayLib\BoundingBox $box
 * @param \RayLib\Vector3 $center
 * @param float $radius
 * @return int
*/
function CheckCollisionBoxSphere($box ,$center ,$radius){}

/**
 * Detect collision between ray and sphere
 * @param \RayLib\Ray $ray
 * @param \RayLib\Vector3 $center
 * @param float $radius
 * @return int
*/
function CheckCollisionRaySphere($ray ,$center ,$radius){}

/**
 * Detect collision between ray and sphere, returns collision point
 * @param \RayLib\Ray $ray
 * @param \RayLib\Vector3 $center
 * @param float $radius
 * @param \RayLib\Vector3  $collisionPoint
 * @return int
*/
function CheckCollisionRaySphereEx($ray ,$center ,$radius ,$collisionPoint){}

/**
 * Detect collision between ray and box
 * @param \RayLib\Ray $ray
 * @param \RayLib\BoundingBox $box
 * @return int
*/
function CheckCollisionRayBox($ray ,$box){}

/**
 * Get collision info between ray and model
 * @param \RayLib\Ray $ray
 * @param \RayLib\Model $model
 * @return \RayLib\RayHitInfo
*/
function GetCollisionRayModel($ray ,$model){}

/**
 * Get collision info between ray and triangle
 * @param \RayLib\Ray $ray
 * @param \RayLib\Vector3 $p1
 * @param \RayLib\Vector3 $p2
 * @param \RayLib\Vector3 $p3
 * @return \RayLib\RayHitInfo
*/
function GetCollisionRayTriangle($ray ,$p1 ,$p2 ,$p3){}

/**
 * Get collision info between ray and ground plane (Y-normal plane)
 * @param \RayLib\Ray $ray
 * @param float $groundHeight
 * @return \RayLib\RayHitInfo
*/
function GetCollisionRayGround($ray ,$groundHeight){}

/**
 * Load shader from files and bind default locations
 * @param  string $vsFileName
 * @param  string $fsFileName
 * @return \RayLib\Shader
*/
function LoadShader($vsFileName ,$fsFileName){}

/**
 * Load shader from code strings and bind default locations
 * @param  string $vsCode
 * @param  string $fsCode
 * @return \RayLib\Shader
*/
function LoadShaderCode($vsCode ,$fsCode){}

/**
 * Unload shader from GPU memory (VRAM)
 * @param \RayLib\Shader $shader
 * @return void
*/
function UnloadShader($shader){}

/**
 * Get default shader
 * @return \RayLib\Shader
*/
function GetShaderDefault(){}

/**
 * Get default texture
 * @return \RayLib\Texture2D
*/
function GetTextureDefault(){}

/**
 * Get texture to draw shapes
 * @return \RayLib\Texture2D
*/
function GetShapesTexture(){}

/**
 * Get texture rectangle to draw shapes
 * @return \RayLib\Rectangle
*/
function GetShapesTextureRec(){}

/**
 * Define default texture used to draw shapes
 * @param \RayLib\Texture2D $texture
 * @param \RayLib\Rectangle $source
 * @return void
*/
function SetShapesTexture($texture ,$source){}

/**
 * Get shader uniform location
 * @param \RayLib\Shader $shader
 * @param  string $uniformName
 * @return int
*/
function GetShaderLocation($shader ,$uniformName){}

/**
 * Set shader uniform value
 * @param \RayLib\Shader $shader
 * @param int $uniformLoc
 * @param  string $value
 * @param int $uniformType
 * @return void
*/
function SetShaderValue($shader ,$uniformLoc ,$value ,$uniformType){}

/**
 * Set shader uniform value vector
 * @param \RayLib\Shader $shader
 * @param int $uniformLoc
 * @param  string $value
 * @param int $uniformType
 * @param int $count
 * @return void
*/
function SetShaderValueV($shader ,$uniformLoc ,$value ,$uniformType ,$count){}

/**
 * Set shader uniform value (matrix 4x4)
 * @param \RayLib\Shader $shader
 * @param int $uniformLoc
 * @param \RayLib\Matrix $mat
 * @return void
*/
function SetShaderValueMatrix($shader ,$uniformLoc ,$mat){}

/**
 * Set shader uniform value for texture
 * @param \RayLib\Shader $shader
 * @param int $uniformLoc
 * @param \RayLib\Texture2D $texture
 * @return void
*/
function SetShaderValueTexture($shader ,$uniformLoc ,$texture){}

/**
 * Set a custom projection matrix (replaces internal projection matrix)
 * @param \RayLib\Matrix $proj
 * @return void
*/
function SetMatrixProjection($proj){}

/**
 * Set a custom modelview matrix (replaces internal modelview matrix)
 * @param \RayLib\Matrix $view
 * @return void
*/
function SetMatrixModelview($view){}

/**
 * Get internal modelview matrix
 * @return \RayLib\Matrix
*/
function GetMatrixModelview(){}

/**
 * Get internal projection matrix
 * @return \RayLib\Matrix
*/
function GetMatrixProjection(){}

/**
 * Generate cubemap texture from 2D texture
 * @param \RayLib\Shader $shader
 * @param \RayLib\Texture2D $map
 * @param int $size
 * @return \RayLib\Texture2D
*/
function GenTextureCubemap($shader ,$map ,$size){}

/**
 * Generate irradiance texture using cubemap data
 * @param \RayLib\Shader $shader
 * @param \RayLib\Texture2D $cubemap
 * @param int $size
 * @return \RayLib\Texture2D
*/
function GenTextureIrradiance($shader ,$cubemap ,$size){}

/**
 * Generate prefilter texture using cubemap data
 * @param \RayLib\Shader $shader
 * @param \RayLib\Texture2D $cubemap
 * @param int $size
 * @return \RayLib\Texture2D
*/
function GenTexturePrefilter($shader ,$cubemap ,$size){}

/**
 * Generate BRDF texture
 * @param \RayLib\Shader $shader
 * @param int $size
 * @return \RayLib\Texture2D
*/
function GenTextureBRDF($shader ,$size){}

/**
 * Begin custom shader drawing
 * @param \RayLib\Shader $shader
 * @return void
*/
function BeginShaderMode($shader){}

/**
 * End custom shader drawing (use default shader)
 * @return void
*/
function EndShaderMode(){}

/**
 * Begin blending mode (alpha, additive, multiplied)
 * @param int $mode
 * @return void
*/
function BeginBlendMode($mode){}

/**
 * End blending mode (reset to default: alpha blending)
 * @return void
*/
function EndBlendMode(){}

/**
 * Init VR simulator for selected device parameters
 * @return void
*/
function InitVrSimulator(){}

/**
 * Close VR simulator for current device
 * @return void
*/
function CloseVrSimulator(){}

/**
 * Update VR tracking (position and orientation) and camera
 * @param \RayLib\Camera3D  $camera
 * @return void
*/
function UpdateVrTracking($camera){}

/**
 * Set stereo rendering configuration parameters
 * @param \RayLib\VrDeviceInfo $info
 * @param \RayLib\Shader $distortion
 * @return void
*/
function SetVrConfiguration($info ,$distortion){}

/**
 * Detect if VR simulator is ready
 * @return int
*/
function IsVrSimulatorReady(){}

/**
 * Enable/Disable VR experience
 * @return void
*/
function ToggleVrMode(){}

/**
 * Begin VR simulator stereo rendering
 * @return void
*/
function BeginVrDrawing(){}

/**
 * End VR simulator stereo rendering
 * @return void
*/
function EndVrDrawing(){}

/**
 * Initialize audio device and context
 * @return void
*/
function InitAudioDevice(){}

/**
 * Close the audio device and context
 * @return void
*/
function CloseAudioDevice(){}

/**
 * Check if audio device has been initialized successfully
 * @return int
*/
function IsAudioDeviceReady(){}

/**
 * Set master volume (listener)
 * @param float $volume
 * @return void
*/
function SetMasterVolume($volume){}

/**
 * Load wave data from file
 * @param  string $fileName
 * @return \RayLib\Wave
*/
function LoadWave($fileName){}

/**
 * Load sound from file
 * @param  string $fileName
 * @return \RayLib\Sound
*/
function LoadSound($fileName){}

/**
 * Load sound from wave data
 * @param \RayLib\Wave $wave
 * @return \RayLib\Sound
*/
function LoadSoundFromWave($wave){}

/**
 * Update sound buffer with new data
 * @param \RayLib\Sound $sound
 * @param  string $data
 * @param int $samplesCount
 * @return void
*/
function UpdateSound($sound ,$data ,$samplesCount){}

/**
 * Unload wave data
 * @param \RayLib\Wave $wave
 * @return void
*/
function UnloadWave($wave){}

/**
 * Unload sound
 * @param \RayLib\Sound $sound
 * @return void
*/
function UnloadSound($sound){}

/**
 * Export wave data to file
 * @param \RayLib\Wave $wave
 * @param  string $fileName
 * @return void
*/
function ExportWave($wave ,$fileName){}

/**
 * Export wave sample data to code (.h)
 * @param \RayLib\Wave $wave
 * @param  string $fileName
 * @return void
*/
function ExportWaveAsCode($wave ,$fileName){}

/**
 * Play a sound
 * @param \RayLib\Sound $sound
 * @return void
*/
function PlaySound($sound){}

/**
 * Stop playing a sound
 * @param \RayLib\Sound $sound
 * @return void
*/
function StopSound($sound){}

/**
 * Pause a sound
 * @param \RayLib\Sound $sound
 * @return void
*/
function PauseSound($sound){}

/**
 * Resume a paused sound
 * @param \RayLib\Sound $sound
 * @return void
*/
function ResumeSound($sound){}

/**
 * Play a sound (using multichannel buffer pool)
 * @param \RayLib\Sound $sound
 * @return void
*/
function PlaySoundMulti($sound){}

/**
 * Stop any sound playing (using multichannel buffer pool)
 * @return void
*/
function StopSoundMulti(){}

/**
 * Get number of sounds playing in the multichannel
 * @return int
*/
function GetSoundsPlaying(){}

/**
 * Check if a sound is currently playing
 * @param \RayLib\Sound $sound
 * @return int
*/
function IsSoundPlaying($sound){}

/**
 * Set volume for a sound (1.0 is max level)
 * @param \RayLib\Sound $sound
 * @param float $volume
 * @return void
*/
function SetSoundVolume($sound ,$volume){}

/**
 * Set pitch for a sound (1.0 is base level)
 * @param \RayLib\Sound $sound
 * @param float $pitch
 * @return void
*/
function SetSoundPitch($sound ,$pitch){}

/**
 * Convert wave data to desired format
 * @param \RayLib\Wave  $wave
 * @param int $sampleRate
 * @param int $sampleSize
 * @param int $channels
 * @return void
*/
function WaveFormat($wave ,$sampleRate ,$sampleSize ,$channels){}

/**
 * Copy a wave to a new wave
 * @param \RayLib\Wave $wave
 * @return \RayLib\Wave
*/
function WaveCopy($wave){}

/**
 * Crop a wave to defined samples range
 * @param \RayLib\Wave  $wave
 * @param int $initSample
 * @param int $finalSample
 * @return void
*/
function WaveCrop($wave ,$initSample ,$finalSample){}

/**
 * Get samples data from wave as a floats array
 * @param \RayLib\Wave $wave
 * @return float
*/
function GetWaveData($wave){}

/**
 * Load music stream from file
 * @param  string $fileName
 * @return \RayLib\Music
*/
function LoadMusicStream($fileName){}

/**
 * Unload music stream
 * @param \RayLib\Music $music
 * @return void
*/
function UnloadMusicStream($music){}

/**
 * Start music playing
 * @param \RayLib\Music $music
 * @return void
*/
function PlayMusicStream($music){}

/**
 * Updates buffers for music streaming
 * @param \RayLib\Music $music
 * @return void
*/
function UpdateMusicStream($music){}

/**
 * Stop music playing
 * @param \RayLib\Music $music
 * @return void
*/
function StopMusicStream($music){}

/**
 * Pause music playing
 * @param \RayLib\Music $music
 * @return void
*/
function PauseMusicStream($music){}

/**
 * Resume playing paused music
 * @param \RayLib\Music $music
 * @return void
*/
function ResumeMusicStream($music){}

/**
 * Check if music is playing
 * @param \RayLib\Music $music
 * @return int
*/
function IsMusicPlaying($music){}

/**
 * Set volume for music (1.0 is max level)
 * @param \RayLib\Music $music
 * @param float $volume
 * @return void
*/
function SetMusicVolume($music ,$volume){}

/**
 * Set pitch for a music (1.0 is base level)
 * @param \RayLib\Music $music
 * @param float $pitch
 * @return void
*/
function SetMusicPitch($music ,$pitch){}

/**
 * Set music loop count (loop repeats)
 * @param \RayLib\Music $music
 * @param int $count
 * @return void
*/
function SetMusicLoopCount($music ,$count){}

/**
 * Get music time length (in seconds)
 * @param \RayLib\Music $music
 * @return float
*/
function GetMusicTimeLength($music){}

/**
 * Get current music time played (in seconds)
 * @param \RayLib\Music $music
 * @return float
*/
function GetMusicTimePlayed($music){}

/**
 * Init audio stream (to stream raw audio pcm data)
 * @param unsigned int $sampleRate
 * @param unsigned int $sampleSize
 * @param unsigned int $channels
 * @return \RayLib\AudioStream
*/
function InitAudioStream($sampleRate ,$sampleSize ,$channels){}

/**
 * Update audio stream buffers with data
 * @param \RayLib\AudioStream $stream
 * @param  string $data
 * @param int $samplesCount
 * @return void
*/
function UpdateAudioStream($stream ,$data ,$samplesCount){}

/**
 * Close audio stream and free memory
 * @param \RayLib\AudioStream $stream
 * @return void
*/
function CloseAudioStream($stream){}

/**
 * Check if any audio stream buffers requires refill
 * @param \RayLib\AudioStream $stream
 * @return int
*/
function IsAudioStreamProcessed($stream){}

/**
 * Play audio stream
 * @param \RayLib\AudioStream $stream
 * @return void
*/
function PlayAudioStream($stream){}

/**
 * Pause audio stream
 * @param \RayLib\AudioStream $stream
 * @return void
*/
function PauseAudioStream($stream){}

/**
 * Resume audio stream
 * @param \RayLib\AudioStream $stream
 * @return void
*/
function ResumeAudioStream($stream){}

/**
 * Check if audio stream is playing
 * @param \RayLib\AudioStream $stream
 * @return int
*/
function IsAudioStreamPlaying($stream){}

/**
 * Stop audio stream
 * @param \RayLib\AudioStream $stream
 * @return void
*/
function StopAudioStream($stream){}

/**
 * Set volume for audio stream (1.0 is max level)
 * @param \RayLib\AudioStream $stream
 * @param float $volume
 * @return void
*/
function SetAudioStreamVolume($stream ,$volume){}

/**
 * Set pitch for audio stream (1.0 is base level)
 * @param \RayLib\AudioStream $stream
 * @param float $pitch
 * @return void
*/
function SetAudioStreamPitch($stream ,$pitch){}

/**
 * Default size for new audio streams
 * @param int $size
 * @return void
*/
function SetAudioStreamBufferSizeDefault($size){}

/**
 * Clamp float value
 * @param float $value
 * @param float $min
 * @param float $max
 * @return float
*/
function Clamp($value ,$min ,$max){}

/**
 * Calculate linear interpolation between two floats
 * @param float $start
 * @param float $end
 * @param float $amount
 * @return float
*/
function Lerp($start ,$end ,$amount){}

/**
 * Vector with components value 0.0f
 * @return \RayLib\Vector2
*/
function Vector2Zero(){}

/**
 * Vector with components value 1.0f
 * @return \RayLib\Vector2
*/
function Vector2One(){}

/**
 * Add two vectors (v1 + v2)
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return \RayLib\Vector2
*/
function Vector2Add($v1 ,$v2){}

/**
 * Subtract two vectors (v1 - v2)
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return \RayLib\Vector2
*/
function Vector2Subtract($v1 ,$v2){}

/**
 * Calculate vector length
 * @param \RayLib\Vector2 $v
 * @return float
*/
function Vector2Length($v){}

/**
 * Calculate two vectors dot product
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return float
*/
function Vector2DotProduct($v1 ,$v2){}

/**
 * Calculate distance between two vectors
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return float
*/
function Vector2Distance($v1 ,$v2){}

/**
 * Calculate angle from two vectors in X-axis
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return float
*/
function Vector2Angle($v1 ,$v2){}

/**
 * Scale vector (multiply by value)
 * @param \RayLib\Vector2 $v
 * @param float $scale
 * @return \RayLib\Vector2
*/
function Vector2Scale($v ,$scale){}

/**
 * Multiply vector by vector
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return \RayLib\Vector2
*/
function Vector2MultiplyV($v1 ,$v2){}

/**
 * Negate vector
 * @param \RayLib\Vector2 $v
 * @return \RayLib\Vector2
*/
function Vector2Negate($v){}

/**
 * Divide vector by a float value
 * @param \RayLib\Vector2 $v
 * @param float $div
 * @return \RayLib\Vector2
*/
function Vector2Divide($v ,$div){}

/**
 * Divide vector by vector
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @return \RayLib\Vector2
*/
function Vector2DivideV($v1 ,$v2){}

/**
 * Normalize provided vector
 * @param \RayLib\Vector2 $v
 * @return \RayLib\Vector2
*/
function Vector2Normalize($v){}

/**
 * Calculate linear interpolation between two vectors
 * @param \RayLib\Vector2 $v1
 * @param \RayLib\Vector2 $v2
 * @param float $amount
 * @return \RayLib\Vector2
*/
function Vector2Lerp($v1 ,$v2 ,$amount){}

/**
 * Rotate Vector by float in Degrees.
 * @param \RayLib\Vector2 $v
 * @param float $degs
 * @return \RayLib\Vector2
*/
function Vector2Rotate($v ,$degs){}

/**
 * Vector with components value 0.0f
 * @return \RayLib\Vector3
*/
function Vector3Zero(){}

/**
 * Vector with components value 1.0f
 * @return \RayLib\Vector3
*/
function Vector3One(){}

/**
 * Add two vectors
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3Add($v1 ,$v2){}

/**
 * Subtract two vectors
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3Subtract($v1 ,$v2){}

/**
 * Multiply vector by scalar
 * @param \RayLib\Vector3 $v
 * @param float $scalar
 * @return \RayLib\Vector3
*/
function Vector3Scale($v ,$scalar){}

/**
 * Multiply vector by vector
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3Multiply($v1 ,$v2){}

/**
 * Calculate two vectors cross product
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3CrossProduct($v1 ,$v2){}

/**
 * Calculate one vector perpendicular vector
 * @param \RayLib\Vector3 $v
 * @return \RayLib\Vector3
*/
function Vector3Perpendicular($v){}

/**
 * Calculate vector length
 * @param  \RayLib\Vector3 $v
 * @return float
*/
function Vector3Length($v){}

/**
 * Calculate two vectors dot product
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return float
*/
function Vector3DotProduct($v1 ,$v2){}

/**
 * Calculate distance between two vectors
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return float
*/
function Vector3Distance($v1 ,$v2){}

/**
 * Negate provided vector (invert direction)
 * @param \RayLib\Vector3 $v
 * @return \RayLib\Vector3
*/
function Vector3Negate($v){}

/**
 * Divide vector by a float value
 * @param \RayLib\Vector3 $v
 * @param float $div
 * @return \RayLib\Vector3
*/
function Vector3Divide($v ,$div){}

/**
 * Divide vector by vector
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3DivideV($v1 ,$v2){}

/**
 * Normalize provided vector
 * @param \RayLib\Vector3 $v
 * @return \RayLib\Vector3
*/
function Vector3Normalize($v){}

/**
 * Makes vectors normalized and orthogonal to each other
 * @param \RayLib\Vector3  $v1
 * @param \RayLib\Vector3  $v2
 * @return void
*/
function Vector3OrthoNormalize($v1 ,$v2){}

/**
 * Transforms a Vector3 by a given Matrix
 * @param \RayLib\Vector3 $v
 * @param \RayLib\Matrix $mat
 * @return \RayLib\Vector3
*/
function Vector3Transform($v ,$mat){}

/**
 * Transform a vector by quaternion rotation
 * @param \RayLib\Vector3 $v
 * @param \RayLib\Vector4 $q
 * @return \RayLib\Vector3
*/
function Vector3RotateByQuaternion($v ,$q){}

/**
 * Calculate linear interpolation between two vectors
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @param float $amount
 * @return \RayLib\Vector3
*/
function Vector3Lerp($v1 ,$v2 ,$amount){}

/**
 * Calculate reflected vector to normal
 * @param \RayLib\Vector3 $v
 * @param \RayLib\Vector3 $normal
 * @return \RayLib\Vector3
*/
function Vector3Reflect($v ,$normal){}

/**
 * Return min value for each pair of components
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3Min($v1 ,$v2){}

/**
 * Return max value for each pair of components
 * @param \RayLib\Vector3 $v1
 * @param \RayLib\Vector3 $v2
 * @return \RayLib\Vector3
*/
function Vector3Max($v1 ,$v2){}

/**
 * Compute barycenter coordinates (u, v, w) for point p with respect to triangle (a, b, c)
 * @param \RayLib\Vector3 $p
 * @param \RayLib\Vector3 $a
 * @param \RayLib\Vector3 $b
 * @param \RayLib\Vector3 $c
 * @return \RayLib\Vector3
*/
function Vector3Barycenter($p ,$a ,$b ,$c){}

/**
 * Return float vector for Vector3
 * @param \RayLib\Vector3 $v
 * @return \RayLib\float3
*/
function Vector3ToFloatV($v){}

/**
 * Compute matrix determinant
 * @param \RayLib\Matrix $mat
 * @return float
*/
function MatrixDeterminant($mat){}

/**
 * Returns the trace of the matrix (sum of the values along the diagonal)
 * @param \RayLib\Matrix $mat
 * @return float
*/
function MatrixTrace($mat){}

/**
 * Transposes provided matrix
 * @param \RayLib\Matrix $mat
 * @return \RayLib\Matrix
*/
function MatrixTranspose($mat){}

/**
 * Invert provided matrix
 * @param \RayLib\Matrix $mat
 * @return \RayLib\Matrix
*/
function MatrixInvert($mat){}

/**
 * Normalize provided matrix
 * @param \RayLib\Matrix $mat
 * @return \RayLib\Matrix
*/
function MatrixNormalize($mat){}

/**
 * Returns identity matrix
 * @return \RayLib\Matrix
*/
function MatrixIdentity(){}

/**
 * Add two matrices
 * @param \RayLib\Matrix $left
 * @param \RayLib\Matrix $right
 * @return \RayLib\Matrix
*/
function MatrixAdd($left ,$right){}

/**
 * Subtract two matrices (left - right)
 * @param \RayLib\Matrix $left
 * @param \RayLib\Matrix $right
 * @return \RayLib\Matrix
*/
function MatrixSubtract($left ,$right){}

/**
 * Returns translation matrix
 * @param float $x
 * @param float $y
 * @param float $z
 * @return \RayLib\Matrix
*/
function MatrixTranslate($x ,$y ,$z){}

/**
 * Create rotation matrix from axis and angle
 * @param \RayLib\Vector3 $axis
 * @param float $angle
 * @return \RayLib\Matrix
*/
function MatrixRotate($axis ,$angle){}

/**
 * Returns xyz-rotation matrix (angles in radians)
 * @param \RayLib\Vector3 $ang
 * @return \RayLib\Matrix
*/
function MatrixRotateXYZ($ang){}

/**
 * Returns xyz-rotation matrix (angles in radians)
 * @param float $angle
 * @return \RayLib\Matrix
*/
function MatrixRotateX($angle){}

/**
 * Returns y-rotation matrix (angle in radians)
 * @param float $angle
 * @return \RayLib\Matrix
*/
function MatrixRotateY($angle){}

/**
 * Returns z-rotation matrix (angle in radians)
 * @param float $angle
 * @return \RayLib\Matrix
*/
function MatrixRotateZ($angle){}

/**
 * Returns scaling matrix
 * @param float $x
 * @param float $y
 * @param float $z
 * @return \RayLib\Matrix
*/
function MatrixScale($x ,$y ,$z){}

/**
 * Returns two matrix multiplication
 * @param \RayLib\Matrix $left
 * @param \RayLib\Matrix $right
 * @return \RayLib\Matrix
*/
function MatrixMultiply($left ,$right){}

/**
 * Returns perspective projection matrix
 * @param double $left
 * @param double $right
 * @param double $bottom
 * @param double $top
 * @param double $near
 * @param double $far
 * @return \RayLib\Matrix
*/
function MatrixFrustum($left ,$right ,$bottom ,$top ,$near ,$far){}

/**
 * Returns perspective projection matrix
 * @param double $fovy
 * @param double $aspect
 * @param double $near
 * @param double $far
 * @return \RayLib\Matrix
*/
function MatrixPerspective($fovy ,$aspect ,$near ,$far){}

/**
 * Returns orthographic projection matrix
 * @param double $left
 * @param double $right
 * @param double $bottom
 * @param double $top
 * @param double $near
 * @param double $far
 * @return \RayLib\Matrix
*/
function MatrixOrtho($left ,$right ,$bottom ,$top ,$near ,$far){}

/**
 * Returns camera look-at matrix (view matrix)
 * @param \RayLib\Vector3 $eye
 * @param \RayLib\Vector3 $target
 * @param \RayLib\Vector3 $up
 * @return \RayLib\Matrix
*/
function MatrixLookAt($eye ,$target ,$up){}

/**
 * Return float vector for Matrix
 * @param \RayLib\Matrix $mat
 * @return \RayLib\float16
*/
function MatrixToFloatV($mat){}

/**
 * Returns identity quaternion
 * @return \RayLib\Vector4
*/
function QuaternionIdentity(){}

/**
 * Computes the length of a quaternion
 * @param \RayLib\Vector4 $q
 * @return float
*/
function QuaternionLength($q){}

/**
 * Normalize provided quaternion
 * @param \RayLib\Vector4 $q
 * @return \RayLib\Vector4
*/
function QuaternionNormalize($q){}

/**
 * Invert provided quaternion
 * @param \RayLib\Vector4 $q
 * @return \RayLib\Vector4
*/
function QuaternionInvert($q){}

/**
 * Calculate two quaternion multiplication
 * @param \RayLib\Vector4 $q1
 * @param \RayLib\Vector4 $q2
 * @return \RayLib\Vector4
*/
function QuaternionMultiply($q1 ,$q2){}

/**
 * Calculate linear interpolation between two quaternions
 * @param \RayLib\Vector4 $q1
 * @param \RayLib\Vector4 $q2
 * @param float $amount
 * @return \RayLib\Vector4
*/
function QuaternionLerp($q1 ,$q2 ,$amount){}

/**
 * Calculate slerp-optimized interpolation between two quaternions
 * @param \RayLib\Vector4 $q1
 * @param \RayLib\Vector4 $q2
 * @param float $amount
 * @return \RayLib\Vector4
*/
function QuaternionNlerp($q1 ,$q2 ,$amount){}

/**
 * Calculates spherical linear interpolation between two quaternions
 * @param \RayLib\Vector4 $q1
 * @param \RayLib\Vector4 $q2
 * @param float $amount
 * @return \RayLib\Vector4
*/
function QuaternionSlerp($q1 ,$q2 ,$amount){}

/**
 * Calculate quaternion based on the rotation from one vector to another
 * @param \RayLib\Vector3 $from
 * @param \RayLib\Vector3 $to
 * @return \RayLib\Vector4
*/
function QuaternionFromVector3ToVector3($from ,$to){}

/**
 * Returns a quaternion for a given rotation matrix
 * @param \RayLib\Matrix $mat
 * @return \RayLib\Vector4
*/
function QuaternionFromMatrix($mat){}

/**
 * Returns a matrix for a given quaternion
 * @param \RayLib\Vector4 $q
 * @return \RayLib\Matrix
*/
function QuaternionToMatrix($q){}

/**
 * Returns rotation quaternion for an angle and axis
 * @param \RayLib\Vector3 $axis
 * @param float $angle
 * @return \RayLib\Vector4
*/
function QuaternionFromAxisAngle($axis ,$angle){}

/**
 * Returns the rotation angle and axis for a given quaternion
 * @param \RayLib\Vector4 $q
 * @param \RayLib\Vector3  $outAxis
 * @param float  $outAngle
 * @return void
*/
function QuaternionToAxisAngle($q ,$outAxis ,$outAngle){}

/**
 * Returns he quaternion equivalent to Euler angles
 * @param float $roll
 * @param float $pitch
 * @param float $yaw
 * @return \RayLib\Vector4
*/
function QuaternionFromEuler($roll ,$pitch ,$yaw){}

/**
 * Return the Euler angles equivalent to quaternion (roll, pitch, yaw)
 * @param \RayLib\Vector4 $q
 * @return \RayLib\Vector3
*/
function QuaternionToEuler($q){}

/**
 * Transform a quaternion given a transformation matrix
 * @param \RayLib\Vector4 $q
 * @param \RayLib\Matrix $mat
 * @return \RayLib\Vector4
*/
function QuaternionTransform($q ,$mat){}

/**
 * Initializes physics values, pointers and creates physics loop thread
 * @return void
*/
function InitPhysics(){}

/**
 * Run physics step, to be used if PHYSICS_NO_THREADS is set in your main loop
 * @return void
*/
function RunPhysicsStep(){}

/**
 * Sets physics fixed time step in milliseconds. 1.666666 by default
 * @param double $delta
 * @return void
*/
function SetPhysicsTimeStep($delta){}

/**
 * Returns true if physics thread is currently enabled
 * @return bool
*/
function IsPhysicsEnabled(){}

/**
 * Sets physics global gravity force
 * @param float $x
 * @param float $y
 * @return void
*/
function SetPhysicsGravity($x ,$y){}

/**
 * Creates a new circle physics body with generic parameters
 * @param \RayLib\Vector2 $pos
 * @param float $radius
 * @param float $density
 * @return \RayLib\PhysicsBody
*/
function CreatePhysicsBodyCircle($pos ,$radius ,$density){}

/**
 * Creates a new rectangle physics body with generic parameters
 * @param \RayLib\Vector2 $pos
 * @param float $width
 * @param float $height
 * @param float $density
 * @return \RayLib\PhysicsBody
*/
function CreatePhysicsBodyRectangle($pos ,$width ,$height ,$density){}

/**
 * Creates a new polygon physics body with generic parameters
 * @param \RayLib\Vector2 $pos
 * @param float $radius
 * @param int $sides
 * @param float $density
 * @return \RayLib\PhysicsBody
*/
function CreatePhysicsBodyPolygon($pos ,$radius ,$sides ,$density){}

/**
 * Adds a force to a physics body
 * @param \RayLib\PhysicsBody  $body
 * @param \RayLib\Vector2 $force
 * @return void
*/
function PhysicsAddForce($body ,$force){}

/**
 * Adds an angular force to a physics body
 * @param \RayLib\PhysicsBody  $body
 * @param float $amount
 * @return void
*/
function PhysicsAddTorque($body ,$amount){}

/**
 * Shatters a polygon shape physics body to little physics bodies with explosion force
 * @param \RayLib\PhysicsBody  $body
 * @param \RayLib\Vector2 $position
 * @param float $force
 * @return void
*/
function PhysicsShatter($body ,$position ,$force){}

/**
 * Returns the current amount of created physics bodies
 * @return int
*/
function GetPhysicsBodiesCount(){}

/**
 * Returns a physics body of the bodies pool at a specific index
 * @param int $index
 * @return \RayLib\PhysicsBody
*/
function GetPhysicsBody($index){}

/**
 * Returns the physics body shape type (PHYSICS_CIRCLE or PHYSICS_POLYGON)
 * @param int $index
 * @return int
*/
function GetPhysicsShapeType($index){}

/**
 * Returns the amount of vertices of a physics body shape
 * @param int $index
 * @return int
*/
function GetPhysicsShapeVerticesCount($index){}

/**
 * Returns transformed position of a body shape (body position + vertex transformed position)
 * @param \RayLib\PhysicsBody  $body
 * @param int $vertex
 * @return \RayLib\Vector2
*/
function GetPhysicsShapeVertex($body ,$vertex){}

/**
 * Sets physics body shape transform based on radians parameter
 * @param \RayLib\PhysicsBody  $body
 * @param float $radians
 * @return void
*/
function SetPhysicsBodyRotation($body ,$radians){}

/**
 * Unitializes and destroy a physics body
 * @param \RayLib\PhysicsBody  $body
 * @return void
*/
function DestroyPhysicsBody($body){}

/**
 * Destroys created physics bodies and manifolds and resets global values
 * @return void
*/
function ResetPhysics(){}

/**
 * Unitializes physics pointers and closes physics loop thread
 * @return void
*/
function ClosePhysics(){}

/**
 *
 * @param int $type
 * @param \RayLib\Vector3 $position
 * @param \RayLib\Vector3 $target
 * @param \RayLib\Color $color
 * @param \RayLib\Shader $shader
 * @return \RayLib\Light at ./rlights.h:46:9)
*/
function CreateLight($type ,$position ,$target ,$color ,$shader){}

/**
 *
 * @param \RayLib\Shader $shader
 * @param \RayLib\Light $light
 * @return void
*/
function UpdateLightValues($shader ,$light){}
