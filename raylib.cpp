
#include <iostream>
#include <phpcpp.h>
#include <raylib.h>
#include <string>

using namespace std;

namespace rl {

class Vector2 : public Php::Base {
public:
  ::Vector2 data;
  Vector2(::Vector2 x) { data = x; }
};

class Vector3 : public Php::Base {
public:
  ::Vector3 data;
  Vector3(::Vector3 x) { data = x; }
};

class Vector4 : public Php::Base {
public:
  ::Vector4 data;
  Vector4(::Vector4 x) { data = x; }
};

class Matrix : public Php::Base {
public:
  ::Matrix data;
  Matrix(::Matrix x) { data = x; }
};

class Color : public Php::Base {
public:
  ::Color data;
  Color(::Color x) { data = x; }
};

class Rectangle : public Php::Base {
public:
  ::Rectangle data;
  Rectangle(::Rectangle x) { data = x; }
};

class Image : public Php::Base {
public:
  ::Image data;
  Image(::Image x) { data = x; }
};

class Texture2D : public Php::Base {
public:
  ::Texture2D data;
  Texture2D(::Texture2D x) { data = x; }
};

class RenderTexture2D : public Php::Base {
public:
  ::RenderTexture2D data;
  RenderTexture2D(::RenderTexture2D x) { data = x; }
};

class NPatchInfo : public Php::Base {
public:
  ::NPatchInfo data;
  NPatchInfo(::NPatchInfo x) { data = x; }
};

class CharInfo : public Php::Base {
public:
  ::CharInfo data;
  CharInfo(::CharInfo x) { data = x; }
};

class Font : public Php::Base {
public:
  ::Font data;
  Font(::Font x) { data = x; }
};

class Camera3D : public Php::Base {
public:
  ::Camera3D data;
  Camera3D(::Camera3D x) { data = x; }
};

class Camera2D : public Php::Base {
public:
  ::Camera2D data;
  Camera2D(::Camera2D x) { data = x; }
};

class BoundingBox : public Php::Base {
public:
  ::BoundingBox data;
  BoundingBox(::BoundingBox x) { data = x; }
};

class Mesh : public Php::Base {
public:
  ::Mesh data;
  Mesh(::Mesh x) { data = x; }
};

class Shader : public Php::Base {
public:
  ::Shader data;
  Shader(::Shader x) { data = x; }
};

class MaterialMap : public Php::Base {
public:
  ::MaterialMap data;
  MaterialMap(::MaterialMap x) { data = x; }
};

class Material : public Php::Base {
public:
  ::Material data;
  Material(::Material x) { data = x; }
};

class Model : public Php::Base {
public:
  ::Model data;
  Model(::Model x) { data = x; }
};

class Ray : public Php::Base {
public:
  ::Ray data;
  Ray(::Ray x) { data = x; }
};

class RayHitInfo : public Php::Base {
public:
  ::RayHitInfo data;
  RayHitInfo(::RayHitInfo x) { data = x; }
};

class Wave : public Php::Base {
public:
  ::Wave data;
  Wave(::Wave x) { data = x; }
};

class Sound : public Php::Base {
public:
  ::Sound data;
  Sound(::Sound x) { data = x; }
};

class AudioStream : public Php::Base {
public:
  ::AudioStream data;
  AudioStream(::AudioStream x) { data = x; }
};

class VrDeviceInfo : public Php::Base {
public:
  ::VrDeviceInfo data;
  VrDeviceInfo(::VrDeviceInfo x) { data = x; }
};

class VrStereoConfig : public Php::Base {
public:
  ::VrStereoConfig data;
  VrStereoConfig(::VrStereoConfig x) { data = x; }
};

class RL : public Php::Base {
public:
  RL() {}
  virtual ~RL() {}
  virtual void __construct() {}
  virtual void __destruct() {}

  static void InitWindow(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    string p2 = params[2];
    ::InitWindow(p0, p1, p2.c_str());
  }

  static Php::Value WindowShouldClose(Php::Parameters &params) {
    int result = ::WindowShouldClose();
    return result;
  }

  static void CloseWindow(Php::Parameters &params) { ::CloseWindow(); }

  static Php::Value IsWindowReady(Php::Parameters &params) {
    int result = ::IsWindowReady();
    return result;
  }

  static Php::Value IsWindowMinimized(Php::Parameters &params) {
    int result = ::IsWindowMinimized();
    return result;
  }

  static Php::Value IsWindowResized(Php::Parameters &params) {
    int result = ::IsWindowResized();
    return result;
  }

  static Php::Value IsWindowHidden(Php::Parameters &params) {
    int result = ::IsWindowHidden();
    return result;
  }

  static void ToggleFullscreen(Php::Parameters &params) {
    ::ToggleFullscreen();
  }

  static void UnhideWindow(Php::Parameters &params) { ::UnhideWindow(); }

  static void HideWindow(Php::Parameters &params) { ::HideWindow(); }

  static void SetWindowIcon(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::SetWindowIcon(p0);
  }

  static void SetWindowTitle(Php::Parameters &params) {
    string p0 = params[0];
    ::SetWindowTitle(p0.c_str());
  }

  static void SetWindowPosition(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::SetWindowPosition(p0, p1);
  }

  static void SetWindowMonitor(Php::Parameters &params) {
    int p0 = params[0];
    ::SetWindowMonitor(p0);
  }

  static void SetWindowMinSize(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::SetWindowMinSize(p0, p1);
  }

  static void SetWindowSize(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::SetWindowSize(p0, p1);
  }

  static Php::Value GetScreenWidth(Php::Parameters &params) {
    int result = ::GetScreenWidth();
    return result;
  }

  static Php::Value GetScreenHeight(Php::Parameters &params) {
    int result = ::GetScreenHeight();
    return result;
  }

  static Php::Value GetMonitorCount(Php::Parameters &params) {
    int result = ::GetMonitorCount();
    return result;
  }

  static Php::Value GetMonitorWidth(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::GetMonitorWidth(p0);
    return result;
  }

  static Php::Value GetMonitorHeight(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::GetMonitorHeight(p0);
    return result;
  }

  static Php::Value GetMonitorPhysicalWidth(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::GetMonitorPhysicalWidth(p0);
    return result;
  }

  static Php::Value GetMonitorPhysicalHeight(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::GetMonitorPhysicalHeight(p0);
    return result;
  }

  static void SetClipboardText(Php::Parameters &params) {
    string p0 = params[0];
    ::SetClipboardText(p0.c_str());
  }

  static void ShowCursor(Php::Parameters &params) { ::ShowCursor(); }

  static void HideCursor(Php::Parameters &params) { ::HideCursor(); }

  static Php::Value IsCursorHidden(Php::Parameters &params) {
    int result = ::IsCursorHidden();
    return result;
  }

  static void EnableCursor(Php::Parameters &params) { ::EnableCursor(); }

  static void DisableCursor(Php::Parameters &params) { ::DisableCursor(); }

  static void ClearBackground(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    ::ClearBackground(p0);
  }

  static void BeginDrawing(Php::Parameters &params) { ::BeginDrawing(); }

  static void EndDrawing(Php::Parameters &params) { ::EndDrawing(); }

  static void BeginMode2D(Php::Parameters &params) {
    ::Camera2D p0 = ((Camera2D *)(params[0].implementation()))->data;
    ::BeginMode2D(p0);
  }

  static void EndMode2D(Php::Parameters &params) { ::EndMode2D(); }

  static void BeginMode3D(Php::Parameters &params) {
    ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
    ::BeginMode3D(p0);
  }

  static void EndMode3D(Php::Parameters &params) { ::EndMode3D(); }

  static void BeginTextureMode(Php::Parameters &params) {
    ::RenderTexture2D p0 =
        ((RenderTexture2D *)(params[0].implementation()))->data;
    ::BeginTextureMode(p0);
  }

  static void EndTextureMode(Php::Parameters &params) { ::EndTextureMode(); }

  static Php::Value GetMouseRay(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Camera3D p1 = ((Camera3D *)(params[1].implementation()))->data;
    struct Ray result = ::GetMouseRay(p0, p1);
    return Php::Object("RayLib\\Ray", new Ray(result));
  }

  static Php::Value GetWorldToScreen(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Camera3D p1 = ((Camera3D *)(params[1].implementation()))->data;
    struct Vector2 result = ::GetWorldToScreen(p0, p1);
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static Php::Value GetCameraMatrix(Php::Parameters &params) {
    ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
    struct Matrix result = ::GetCameraMatrix(p0);
    return Php::Object("RayLib\\Matrix", new Matrix(result));
  }

  static void SetTargetFPS(Php::Parameters &params) {
    int p0 = params[0];
    ::SetTargetFPS(p0);
  }

  static Php::Value GetFPS(Php::Parameters &params) {
    int result = ::GetFPS();
    return result;
  }

  static Php::Value GetFrameTime(Php::Parameters &params) {
    double result = ::GetFrameTime();
    return result;
  }

  static Php::Value GetTime(Php::Parameters &params) {
    double result = ::GetTime();
    return result;
  }

  static Php::Value ColorToInt(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    int result = ::ColorToInt(p0);
    return result;
  }

  static Php::Value ColorNormalize(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    struct Vector4 result = ::ColorNormalize(p0);
    return Php::Object("RayLib\\Vector4", new Vector4(result));
  }

  static Php::Value ColorToHSV(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    struct Vector3 result = ::ColorToHSV(p0);
    return Php::Object("RayLib\\Vector3", new Vector3(result));
  }

  static Php::Value ColorFromHSV(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    struct Color result = ::ColorFromHSV(p0);
    return Php::Object("RayLib\\Color", new Color(result));
  }

  static Php::Value GetColor(Php::Parameters &params) {
    int p0 = params[0];
    struct Color result = ::GetColor(p0);
    return Php::Object("RayLib\\Color", new Color(result));
  }

  static Php::Value Fade(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    double p1 = params[1];
    struct Color result = ::Fade(p0, p1);
    return Php::Object("RayLib\\Color", new Color(result));
  }

  static void SetConfigFlags(Php::Parameters &params) {
    int p0 = params[0];
    ::SetConfigFlags(p0);
  }

  static void SetTraceLogLevel(Php::Parameters &params) {
    int p0 = params[0];
    ::SetTraceLogLevel(p0);
  }

  static void SetTraceLogExit(Php::Parameters &params) {
    int p0 = params[0];
    ::SetTraceLogExit(p0);
  }

  static void TraceLog(Php::Parameters &params) {
    int p0 = params[0];
    string p1 = params[1];
    ::TraceLog(p0, p1.c_str());
  }

  static void TakeScreenshot(Php::Parameters &params) {
    string p0 = params[0];
    ::TakeScreenshot(p0.c_str());
  }

  static Php::Value GetRandomValue(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int result = ::GetRandomValue(p0, p1);
    return result;
  }

  static Php::Value ChangeDirectory(Php::Parameters &params) {
    string p0 = params[0];
    int result = ::ChangeDirectory(p0.c_str());
    return result;
  }

  static Php::Value IsFileDropped(Php::Parameters &params) {
    int result = ::IsFileDropped();
    return result;
  }

  static Php::Value GetFileModTime(Php::Parameters &params) {
    string p0 = params[0];
    long result = ::GetFileModTime(p0.c_str());
    return result;
  }

  static void StorageSaveValue(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::StorageSaveValue(p0, p1);
  }

  static Php::Value StorageLoadValue(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::StorageLoadValue(p0);
    return result;
  }

  static void OpenURL(Php::Parameters &params) {
    string p0 = params[0];
    ::OpenURL(p0.c_str());
  }

  static Php::Value IsKeyPressed(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsKeyPressed(p0);
    return result;
  }

  static Php::Value IsKeyDown(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsKeyDown(p0);
    return result;
  }

  static Php::Value IsKeyReleased(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsKeyReleased(p0);
    return result;
  }

  static Php::Value IsKeyUp(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsKeyUp(p0);
    return result;
  }

  static Php::Value GetKeyPressed(Php::Parameters &params) {
    int result = ::GetKeyPressed();
    return result;
  }

  static void SetExitKey(Php::Parameters &params) {
    int p0 = params[0];
    ::SetExitKey(p0);
  }

  static Php::Value IsGamepadAvailable(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsGamepadAvailable(p0);
    return result;
  }

  static Php::Value IsGamepadName(Php::Parameters &params) {
    int p0 = params[0];
    string p1 = params[1];
    int result = ::IsGamepadName(p0, p1.c_str());
    return result;
  }

  static Php::Value IsGamepadButtonPressed(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int result = ::IsGamepadButtonPressed(p0, p1);
    return result;
  }

  static Php::Value IsGamepadButtonDown(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int result = ::IsGamepadButtonDown(p0, p1);
    return result;
  }

  static Php::Value IsGamepadButtonReleased(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int result = ::IsGamepadButtonReleased(p0, p1);
    return result;
  }

  static Php::Value IsGamepadButtonUp(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int result = ::IsGamepadButtonUp(p0, p1);
    return result;
  }

  static Php::Value GetGamepadButtonPressed(Php::Parameters &params) {
    int result = ::GetGamepadButtonPressed();
    return result;
  }

  static Php::Value GetGamepadAxisCount(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::GetGamepadAxisCount(p0);
    return result;
  }

  static Php::Value GetGamepadAxisMovement(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double result = ::GetGamepadAxisMovement(p0, p1);
    return result;
  }

  static Php::Value IsMouseButtonPressed(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsMouseButtonPressed(p0);
    return result;
  }

  static Php::Value IsMouseButtonDown(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsMouseButtonDown(p0);
    return result;
  }

  static Php::Value IsMouseButtonReleased(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsMouseButtonReleased(p0);
    return result;
  }

  static Php::Value IsMouseButtonUp(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsMouseButtonUp(p0);
    return result;
  }

  static Php::Value GetMouseX(Php::Parameters &params) {
    int result = ::GetMouseX();
    return result;
  }

  static Php::Value GetMouseY(Php::Parameters &params) {
    int result = ::GetMouseY();
    return result;
  }

  static Php::Value GetMousePosition(Php::Parameters &params) {
    struct Vector2 result = ::GetMousePosition();
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static void SetMousePosition(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::SetMousePosition(p0, p1);
  }

  static void SetMouseOffset(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::SetMouseOffset(p0, p1);
  }

  static void SetMouseScale(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    ::SetMouseScale(p0, p1);
  }

  static Php::Value GetMouseWheelMove(Php::Parameters &params) {
    int result = ::GetMouseWheelMove();
    return result;
  }

  static Php::Value GetTouchX(Php::Parameters &params) {
    int result = ::GetTouchX();
    return result;
  }

  static Php::Value GetTouchY(Php::Parameters &params) {
    int result = ::GetTouchY();
    return result;
  }

  static Php::Value GetTouchPosition(Php::Parameters &params) {
    int p0 = params[0];
    struct Vector2 result = ::GetTouchPosition(p0);
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static void SetGesturesEnabled(Php::Parameters &params) {
    long p0 = params[0];
    ::SetGesturesEnabled(p0);
  }

  static Php::Value IsGestureDetected(Php::Parameters &params) {
    int p0 = params[0];
    int result = ::IsGestureDetected(p0);
    return result;
  }

  static Php::Value GetGestureDetected(Php::Parameters &params) {
    int result = ::GetGestureDetected();
    return result;
  }

  static Php::Value GetTouchPointsCount(Php::Parameters &params) {
    int result = ::GetTouchPointsCount();
    return result;
  }

  static Php::Value GetGestureHoldDuration(Php::Parameters &params) {
    double result = ::GetGestureHoldDuration();
    return result;
  }

  static Php::Value GetGestureDragVector(Php::Parameters &params) {
    struct Vector2 result = ::GetGestureDragVector();
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static Php::Value GetGestureDragAngle(Php::Parameters &params) {
    double result = ::GetGestureDragAngle();
    return result;
  }

  static Php::Value GetGesturePinchVector(Php::Parameters &params) {
    struct Vector2 result = ::GetGesturePinchVector();
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static Php::Value GetGesturePinchAngle(Php::Parameters &params) {
    double result = ::GetGesturePinchAngle();
    return result;
  }

  static void SetCameraMode(Php::Parameters &params) {
    ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::SetCameraMode(p0, p1);
  }

  static void UpdateCamera(Php::Parameters &params) {
    ::Camera3D *p0 = &((Camera3D *)(params[0].implementation()))->data;
    ::UpdateCamera(p0);
  }

  static void SetCameraPanControl(Php::Parameters &params) {
    int p0 = params[0];
    ::SetCameraPanControl(p0);
  }

  static void SetCameraAltControl(Php::Parameters &params) {
    int p0 = params[0];
    ::SetCameraAltControl(p0);
  }

  static void SetCameraSmoothZoomControl(Php::Parameters &params) {
    int p0 = params[0];
    ::SetCameraSmoothZoomControl(p0);
  }

  static void SetCameraMoveControls(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    int p5 = params[5];
    ::SetCameraMoveControls(p0, p1, p2, p3, p4, p5);
  }

  static void DrawPixel(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawPixel(p0, p1, p2);
  }

  static void DrawPixelV(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::DrawPixelV(p0, p1);
  }

  static void DrawLine(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawLine(p0, p1, p2, p3, p4);
  }

  static void DrawLineV(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawLineV(p0, p1, p2);
  }

  static void DrawLineEx(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawLineEx(p0, p1, p2, p3);
  }

  static void DrawLineBezier(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawLineBezier(p0, p1, p2, p3);
  }

  static void DrawCircle(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawCircle(p0, p1, p2, p3);
  }

  static void DrawCircleSector(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawCircleSector(p0, p1, p2, p3, p4);
  }

  static void DrawCircleGradient(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawCircleGradient(p0, p1, p2, p3, p4);
  }

  static void DrawCircleV(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawCircleV(p0, p1, p2);
  }

  static void DrawCircleLines(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawCircleLines(p0, p1, p2, p3);
  }

  static void DrawRectangle(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawRectangle(p0, p1, p2, p3, p4);
  }

  static void DrawRectangleV(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawRectangleV(p0, p1, p2);
  }

  static void DrawRectangleRec(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::DrawRectangleRec(p0, p1);
  }

  static void DrawRectanglePro(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawRectanglePro(p0, p1, p2, p3);
  }

  static void DrawRectangleGradientV(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawRectangleGradientV(p0, p1, p2, p3, p4, p5);
  }

  static void DrawRectangleGradientH(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawRectangleGradientH(p0, p1, p2, p3, p4, p5);
  }

  static void DrawRectangleGradientEx(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawRectangleGradientEx(p0, p1, p2, p3, p4);
  }

  static void DrawRectangleLines(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawRectangleLines(p0, p1, p2, p3, p4);
  }

  static void DrawRectangleLinesEx(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawRectangleLinesEx(p0, p1, p2);
  }

  static void DrawTriangle(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawTriangle(p0, p1, p2, p3);
  }

  static void DrawTriangleLines(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawTriangleLines(p0, p1, p2, p3);
  }

  static void DrawPoly(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    int p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawPoly(p0, p1, p2, p3, p4);
  }

  static void DrawPolyEx(Php::Parameters &params) {
    ::Vector2 *p0 = &((Vector2 *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawPolyEx(p0, p1, p2);
  }

  static void DrawPolyExLines(Php::Parameters &params) {
    ::Vector2 *p0 = &((Vector2 *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawPolyExLines(p0, p1, p2);
  }

  static void SetShapesTexture(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    ::SetShapesTexture(p0, p1);
  }

  static Php::Value CheckCollisionRecs(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    int result = ::CheckCollisionRecs(p0, p1);
    return result;
  }

  static Php::Value CheckCollisionCircles(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    double p3 = params[3];
    int result = ::CheckCollisionCircles(p0, p1, p2, p3);
    return result;
  }

  static Php::Value CheckCollisionCircleRec(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    int result = ::CheckCollisionCircleRec(p0, p1, p2);
    return result;
  }

  static Php::Value GetCollisionRec(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    struct Rectangle result = ::GetCollisionRec(p0, p1);
    return Php::Object("RayLib\\Rectangle", new Rectangle(result));
  }

  static Php::Value CheckCollisionPointRec(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    int result = ::CheckCollisionPointRec(p0, p1);
    return result;
  }

  static Php::Value CheckCollisionPointCircle(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    double p2 = params[2];
    int result = ::CheckCollisionPointCircle(p0, p1, p2);
    return result;
  }

  static Php::Value CheckCollisionPointTriangle(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    ::Vector2 p3 = ((Vector2 *)(params[3].implementation()))->data;
    int result = ::CheckCollisionPointTriangle(p0, p1, p2, p3);
    return result;
  }

  static Php::Value LoadImage(Php::Parameters &params) {
    string p0 = params[0];
    struct Image result = ::LoadImage(p0.c_str());
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value LoadImageEx(Php::Parameters &params) {
    ::Color *p0 = &((Color *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    struct Image result = ::LoadImageEx(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value LoadImageRaw(Php::Parameters &params) {
    string p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    struct Image result = ::LoadImageRaw(p0.c_str(), p1, p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static void ExportImage(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::ExportImage(p0, p1.c_str());
  }

  static void ExportImageAsCode(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::ExportImageAsCode(p0, p1.c_str());
  }

  static Php::Value LoadTexture(Php::Parameters &params) {
    string p0 = params[0];
    struct Texture2D result = ::LoadTexture(p0.c_str());
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value LoadTextureFromImage(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    struct Texture2D result = ::LoadTextureFromImage(p0);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value LoadTextureCubemap(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    struct Texture2D result = ::LoadTextureCubemap(p0, p1);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value LoadRenderTexture(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    struct RenderTexture2D result = ::LoadRenderTexture(p0, p1);
    return Php::Object("RayLib\\RenderTexture2D", new RenderTexture2D(result));
  }

  static void UnloadImage(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::UnloadImage(p0);
  }

  static void UnloadTexture(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::UnloadTexture(p0);
  }

  static void UnloadRenderTexture(Php::Parameters &params) {
    ::RenderTexture2D p0 =
        ((RenderTexture2D *)(params[0].implementation()))->data;
    ::UnloadRenderTexture(p0);
  }

  static Php::Value GetPixelDataSize(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int result = ::GetPixelDataSize(p0, p1, p2);
    return result;
  }

  static Php::Value GetTextureData(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    struct Image result = ::GetTextureData(p0);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value ImageCopy(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    struct Image result = ::ImageCopy(p0);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static void ImageToPOT(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::ImageToPOT(p0, p1);
  }

  static void ImageFormat(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::ImageFormat(p0, p1);
  }

  static void ImageAlphaMask(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Image p1 = ((Image *)(params[1].implementation()))->data;
    ::ImageAlphaMask(p0, p1);
  }

  static void ImageAlphaClear(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::ImageAlphaClear(p0, p1, p2);
  }

  static void ImageAlphaCrop(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::ImageAlphaCrop(p0, p1);
  }

  static void ImageAlphaPremultiply(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageAlphaPremultiply(p0);
  }

  static void ImageCrop(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    ::ImageCrop(p0, p1);
  }

  static void ImageResize(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    ::ImageResize(p0, p1, p2);
  }

  static void ImageResizeNN(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    ::ImageResizeNN(p0, p1, p2);
  }

  static void ImageResizeCanvas(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::ImageResizeCanvas(p0, p1, p2, p3, p4, p5);
  }

  static void ImageMipmaps(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageMipmaps(p0);
  }

  static void ImageDither(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    ::ImageDither(p0, p1, p2, p3, p4);
  }

  static Php::Value ImageText(Php::Parameters &params) {
    string p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    struct Image result = ::ImageText(p0.c_str(), p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value ImageTextEx(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    string p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    struct Image result = ::ImageTextEx(p0, p1.c_str(), p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static void ImageDraw(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Image p1 = ((Image *)(params[1].implementation()))->data;
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    ::Rectangle p3 = ((Rectangle *)(params[3].implementation()))->data;
    ::ImageDraw(p0, p1, p2, p3);
  }

  static void ImageDrawRectangle(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::ImageDrawRectangle(p0, p1, p2);
  }

  static void ImageDrawRectangleLines(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    int p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::ImageDrawRectangleLines(p0, p1, p2, p3);
  }

  static void ImageDrawText(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    string p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::ImageDrawText(p0, p1, p2.c_str(), p3, p4);
  }

  static void ImageDrawTextEx(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Font p2 = ((Font *)(params[2].implementation()))->data;
    string p3 = params[3];
    double p4 = params[4];
    double p5 = params[5];
    ::Color p6 = ((Color *)(params[6].implementation()))->data;
    ::ImageDrawTextEx(p0, p1, p2, p3.c_str(), p4, p5, p6);
  }

  static void ImageFlipVertical(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageFlipVertical(p0);
  }

  static void ImageFlipHorizontal(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageFlipHorizontal(p0);
  }

  static void ImageRotateCW(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageRotateCW(p0);
  }

  static void ImageRotateCCW(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageRotateCCW(p0);
  }

  static void ImageColorTint(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::ImageColorTint(p0, p1);
  }

  static void ImageColorInvert(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageColorInvert(p0);
  }

  static void ImageColorGrayscale(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::ImageColorGrayscale(p0);
  }

  static void ImageColorContrast(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::ImageColorContrast(p0, p1);
  }

  static void ImageColorBrightness(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::ImageColorBrightness(p0, p1);
  }

  static void ImageColorReplace(Php::Parameters &params) {
    ::Image *p0 = &((Image *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::ImageColorReplace(p0, p1, p2);
  }

  static Php::Value GenImageColor(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    struct Image result = ::GenImageColor(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageGradientV(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    struct Image result = ::GenImageGradientV(p0, p1, p2, p3);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageGradientH(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    struct Image result = ::GenImageGradientH(p0, p1, p2, p3);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageGradientRadial(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    struct Image result = ::GenImageGradientRadial(p0, p1, p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageChecked(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    struct Image result = ::GenImageChecked(p0, p1, p2, p3, p4, p5);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageWhiteNoise(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    struct Image result = ::GenImageWhiteNoise(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImagePerlinNoise(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    double p4 = params[4];
    struct Image result = ::GenImagePerlinNoise(p0, p1, p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageCellular(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    struct Image result = ::GenImageCellular(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static void GenTextureMipmaps(Php::Parameters &params) {
    ::Texture2D *p0 = &((Texture2D *)(params[0].implementation()))->data;
    ::GenTextureMipmaps(p0);
  }

  static void SetTextureFilter(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::SetTextureFilter(p0, p1);
  }

  static void SetTextureWrap(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::SetTextureWrap(p0, p1);
  }

  static void DrawTexture(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawTexture(p0, p1, p2, p3);
  }

  static void DrawTextureV(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawTextureV(p0, p1, p2);
  }

  static void DrawTextureEx(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    double p2 = params[2];
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawTextureEx(p0, p1, p2, p3, p4);
  }

  static void DrawTextureRec(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawTextureRec(p0, p1, p2, p3);
  }

  static void DrawTextureQuad(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    ::Rectangle p3 = ((Rectangle *)(params[3].implementation()))->data;
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawTextureQuad(p0, p1, p2, p3, p4);
  }

  static void DrawTexturePro(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    ::Vector2 p3 = ((Vector2 *)(params[3].implementation()))->data;
    double p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawTexturePro(p0, p1, p2, p3, p4, p5);
  }

  static void DrawTextureNPatch(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::NPatchInfo p1 = ((NPatchInfo *)(params[1].implementation()))->data;
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    ::Vector2 p3 = ((Vector2 *)(params[3].implementation()))->data;
    double p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawTextureNPatch(p0, p1, p2, p3, p4, p5);
  }

  static Php::Value GetFontDefault(Php::Parameters &params) {
    struct Font result = ::GetFontDefault();
    return Php::Object("RayLib\\Font", new Font(result));
  }

  static Php::Value LoadFont(Php::Parameters &params) {
    string p0 = params[0];
    struct Font result = ::LoadFont(p0.c_str());
    return Php::Object("RayLib\\Font", new Font(result));
  }

  static Php::Value LoadFontFromImage(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    int p2 = params[2];
    struct Font result = ::LoadFontFromImage(p0, p1, p2);
    return Php::Object("RayLib\\Font", new Font(result));
  }

  static Php::Value GenImageFontAtlas(Php::Parameters &params) {
    ::CharInfo *p0 = &((CharInfo *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    struct Image result = ::GenImageFontAtlas(p0, p1, p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static void UnloadFont(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    ::UnloadFont(p0);
  }

  static void DrawFPS(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::DrawFPS(p0, p1);
  }

  static void DrawText(Php::Parameters &params) {
    string p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawText(p0.c_str(), p1, p2, p3, p4);
  }

  static void DrawTextEx(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
    double p3 = params[3];
    double p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawTextEx(p0, p1.c_str(), p2, p3, p4, p5);
  }

  static void DrawTextRec(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    double p3 = params[3];
    double p4 = params[4];
    int p5 = params[5];
    ::Color p6 = ((Color *)(params[6].implementation()))->data;
    ::DrawTextRec(p0, p1.c_str(), p2, p3, p4, p5, p6);
  }

  static void DrawTextRecEx(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    double p3 = params[3];
    double p4 = params[4];
    int p5 = params[5];
    ::Color p6 = ((Color *)(params[6].implementation()))->data;
    int p7 = params[7];
    int p8 = params[8];
    ::Color p9 = ((Color *)(params[9].implementation()))->data;
    ::Color p10 = ((Color *)(params[10].implementation()))->data;
    ::DrawTextRecEx(p0, p1.c_str(), p2, p3, p4, p5, p6, p7, p8, p9, p10);
  }

  static Php::Value MeasureText(Php::Parameters &params) {
    string p0 = params[0];
    int p1 = params[1];
    int result = ::MeasureText(p0.c_str(), p1);
    return result;
  }

  static Php::Value MeasureTextEx(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    string p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    struct Vector2 result = ::MeasureTextEx(p0, p1.c_str(), p2, p3);
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static Php::Value GetGlyphIndex(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    int p1 = params[1];
    int result = ::GetGlyphIndex(p0, p1);
    return result;
  }

  static void DrawLine3D(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawLine3D(p0, p1, p2);
  }

  static void DrawCircle3D(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawCircle3D(p0, p1, p2, p3, p4);
  }

  static void DrawCube(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawCube(p0, p1, p2, p3, p4);
  }

  static void DrawCubeV(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawCubeV(p0, p1, p2);
  }

  static void DrawCubeWires(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawCubeWires(p0, p1, p2, p3, p4);
  }

  static void DrawCubeTexture(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    double p2 = params[2];
    double p3 = params[3];
    double p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawCubeTexture(p0, p1, p2, p3, p4, p5);
  }

  static void DrawSphere(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawSphere(p0, p1, p2);
  }

  static void DrawSphereEx(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawSphereEx(p0, p1, p2, p3, p4);
  }

  static void DrawSphereWires(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawSphereWires(p0, p1, p2, p3, p4);
  }

  static void DrawCylinder(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    int p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawCylinder(p0, p1, p2, p3, p4, p5);
  }

  static void DrawCylinderWires(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    int p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawCylinderWires(p0, p1, p2, p3, p4, p5);
  }

  static void DrawPlane(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::DrawPlane(p0, p1, p2);
  }

  static void DrawRay(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::DrawRay(p0, p1);
  }

  static void DrawGrid(Php::Parameters &params) {
    int p0 = params[0];
    double p1 = params[1];
    ::DrawGrid(p0, p1);
  }

  static void DrawGizmo(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::DrawGizmo(p0);
  }

  static Php::Value LoadModel(Php::Parameters &params) {
    string p0 = params[0];
    struct Model result = ::LoadModel(p0.c_str());
    return Php::Object("RayLib\\Model", new Model(result));
  }

  static Php::Value LoadModelFromMesh(Php::Parameters &params) {
    ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
    struct Model result = ::LoadModelFromMesh(p0);
    return Php::Object("RayLib\\Model", new Model(result));
  }

  static void UnloadModel(Php::Parameters &params) {
    ::Model p0 = ((Model *)(params[0].implementation()))->data;
    ::UnloadModel(p0);
  }

  static Php::Value LoadMesh(Php::Parameters &params) {
    string p0 = params[0];
    struct Mesh result = ::LoadMesh(p0.c_str());
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static void UnloadMesh(Php::Parameters &params) {
    ::Mesh *p0 = &((Mesh *)(params[0].implementation()))->data;
    ::UnloadMesh(p0);
  }

  static void ExportMesh(Php::Parameters &params) {
    ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::ExportMesh(p0, p1.c_str());
  }

  static Php::Value MeshBoundingBox(Php::Parameters &params) {
    ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
    struct BoundingBox result = ::MeshBoundingBox(p0);
    return Php::Object("RayLib\\BoundingBox", new BoundingBox(result));
  }

  static void MeshTangents(Php::Parameters &params) {
    ::Mesh *p0 = &((Mesh *)(params[0].implementation()))->data;
    ::MeshTangents(p0);
  }

  static void MeshBinormals(Php::Parameters &params) {
    ::Mesh *p0 = &((Mesh *)(params[0].implementation()))->data;
    ::MeshBinormals(p0);
  }

  static Php::Value GenMeshPoly(Php::Parameters &params) {
    int p0 = params[0];
    double p1 = params[1];
    struct Mesh result = ::GenMeshPoly(p0, p1);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshPlane(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    struct Mesh result = ::GenMeshPlane(p0, p1, p2, p3);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshCube(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    double p2 = params[2];
    struct Mesh result = ::GenMeshCube(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshSphere(Php::Parameters &params) {
    double p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    struct Mesh result = ::GenMeshSphere(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshHemiSphere(Php::Parameters &params) {
    double p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    struct Mesh result = ::GenMeshHemiSphere(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshCylinder(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    struct Mesh result = ::GenMeshCylinder(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshTorus(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    struct Mesh result = ::GenMeshTorus(p0, p1, p2, p3);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshKnot(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    struct Mesh result = ::GenMeshKnot(p0, p1, p2, p3);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshHeightmap(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    struct Mesh result = ::GenMeshHeightmap(p0, p1);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshCubicmap(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    struct Mesh result = ::GenMeshCubicmap(p0, p1);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value LoadMaterial(Php::Parameters &params) {
    string p0 = params[0];
    struct Material result = ::LoadMaterial(p0.c_str());
    return Php::Object("RayLib\\Material", new Material(result));
  }

  static Php::Value LoadMaterialDefault(Php::Parameters &params) {
    struct Material result = ::LoadMaterialDefault();
    return Php::Object("RayLib\\Material", new Material(result));
  }

  static void UnloadMaterial(Php::Parameters &params) {
    ::Material p0 = ((Material *)(params[0].implementation()))->data;
    ::UnloadMaterial(p0);
  }

  static void DrawModel(Php::Parameters &params) {
    ::Model p0 = ((Model *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawModel(p0, p1, p2, p3);
  }

  static void DrawModelEx(Php::Parameters &params) {
    ::Model p0 = ((Model *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    double p3 = params[3];
    ::Vector3 p4 = ((Vector3 *)(params[4].implementation()))->data;
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawModelEx(p0, p1, p2, p3, p4, p5);
  }

  static void DrawModelWires(Php::Parameters &params) {
    ::Model p0 = ((Model *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::DrawModelWires(p0, p1, p2, p3);
  }

  static void DrawModelWiresEx(Php::Parameters &params) {
    ::Model p0 = ((Model *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    double p3 = params[3];
    ::Vector3 p4 = ((Vector3 *)(params[4].implementation()))->data;
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawModelWiresEx(p0, p1, p2, p3, p4, p5);
  }

  static void DrawBoundingBox(Php::Parameters &params) {
    ::BoundingBox p0 = ((BoundingBox *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    ::DrawBoundingBox(p0, p1);
  }

  static void DrawBillboard(Php::Parameters &params) {
    ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::DrawBillboard(p0, p1, p2, p3, p4);
  }

  static void DrawBillboardRec(Php::Parameters &params) {
    ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
    ::Vector3 p3 = ((Vector3 *)(params[3].implementation()))->data;
    double p4 = params[4];
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    ::DrawBillboardRec(p0, p1, p2, p3, p4, p5);
  }

  static Php::Value CheckCollisionSpheres(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    double p3 = params[3];
    int result = ::CheckCollisionSpheres(p0, p1, p2, p3);
    return result;
  }

  static Php::Value CheckCollisionBoxes(Php::Parameters &params) {
    ::BoundingBox p0 = ((BoundingBox *)(params[0].implementation()))->data;
    ::BoundingBox p1 = ((BoundingBox *)(params[1].implementation()))->data;
    int result = ::CheckCollisionBoxes(p0, p1);
    return result;
  }

  static Php::Value CheckCollisionBoxSphere(Php::Parameters &params) {
    ::BoundingBox p0 = ((BoundingBox *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    double p2 = params[2];
    int result = ::CheckCollisionBoxSphere(p0, p1, p2);
    return result;
  }

  static Php::Value CheckCollisionRaySphere(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    double p2 = params[2];
    int result = ::CheckCollisionRaySphere(p0, p1, p2);
    return result;
  }

  static Php::Value CheckCollisionRaySphereEx(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    double p2 = params[2];
    ::Vector3 *p3 = &((Vector3 *)(params[3].implementation()))->data;
    int result = ::CheckCollisionRaySphereEx(p0, p1, p2, p3);
    return result;
  }

  static Php::Value CheckCollisionRayBox(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::BoundingBox p1 = ((BoundingBox *)(params[1].implementation()))->data;
    int result = ::CheckCollisionRayBox(p0, p1);
    return result;
  }

  static Php::Value GetCollisionRayModel(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::Model *p1 = &((Model *)(params[1].implementation()))->data;
    struct RayHitInfo result = ::GetCollisionRayModel(p0, p1);
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(result));
  }

  static Php::Value GetCollisionRayTriangle(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    ::Vector3 p3 = ((Vector3 *)(params[3].implementation()))->data;
    struct RayHitInfo result = ::GetCollisionRayTriangle(p0, p1, p2, p3);
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(result));
  }

  static Php::Value GetCollisionRayGround(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    double p1 = params[1];
    struct RayHitInfo result = ::GetCollisionRayGround(p0, p1);
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(result));
  }

  static Php::Value LoadShader(Php::Parameters &params) {
    string p0 = params[0];
    string p1 = params[1];
    struct Shader result = ::LoadShader(p0.c_str(), p1.c_str());
    return Php::Object("RayLib\\Shader", new Shader(result));
  }

  static void UnloadShader(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::UnloadShader(p0);
  }

  static Php::Value GetShaderDefault(Php::Parameters &params) {
    struct Shader result = ::GetShaderDefault();
    return Php::Object("RayLib\\Shader", new Shader(result));
  }

  static Php::Value GetTextureDefault(Php::Parameters &params) {
    struct Texture2D result = ::GetTextureDefault();
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GetShaderLocation(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    string p1 = params[1];
    int result = ::GetShaderLocation(p0, p1.c_str());
    return result;
  }

  static void SetShaderValueMatrix(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::Matrix p2 = ((Matrix *)(params[2].implementation()))->data;
    ::SetShaderValueMatrix(p0, p1, p2);
  }

  static void SetMatrixProjection(Php::Parameters &params) {
    ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
    ::SetMatrixProjection(p0);
  }

  static void SetMatrixModelview(Php::Parameters &params) {
    ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
    ::SetMatrixModelview(p0);
  }

  static Php::Value GetMatrixModelview(Php::Parameters &params) {
    struct Matrix result = ::GetMatrixModelview();
    return Php::Object("RayLib\\Matrix", new Matrix(result));
  }

  static Php::Value GenTextureCubemap(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    int p2 = params[2];
    struct Texture2D result = ::GenTextureCubemap(p0, p1, p2);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GenTextureIrradiance(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    int p2 = params[2];
    struct Texture2D result = ::GenTextureIrradiance(p0, p1, p2);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GenTexturePrefilter(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    int p2 = params[2];
    struct Texture2D result = ::GenTexturePrefilter(p0, p1, p2);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GenTextureBRDF(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    int p1 = params[1];
    struct Texture2D result = ::GenTextureBRDF(p0, p1);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static void BeginShaderMode(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::BeginShaderMode(p0);
  }

  static void EndShaderMode(Php::Parameters &params) { ::EndShaderMode(); }

  static void BeginBlendMode(Php::Parameters &params) {
    int p0 = params[0];
    ::BeginBlendMode(p0);
  }

  static void EndBlendMode(Php::Parameters &params) { ::EndBlendMode(); }

  static void BeginScissorMode(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::BeginScissorMode(p0, p1, p2, p3);
  }

  static void EndScissorMode(Php::Parameters &params) { ::EndScissorMode(); }

  static Php::Value GetVrDeviceInfo(Php::Parameters &params) {
    int p0 = params[0];
    struct VrDeviceInfo result = ::GetVrDeviceInfo(p0);
    return Php::Object("RayLib\\VrDeviceInfo", new VrDeviceInfo(result));
  }

  static void InitVrSimulator(Php::Parameters &params) {
    ::VrDeviceInfo p0 = ((VrDeviceInfo *)(params[0].implementation()))->data;
    ::InitVrSimulator(p0);
  }

  static void UpdateVrTracking(Php::Parameters &params) {
    ::Camera3D *p0 = &((Camera3D *)(params[0].implementation()))->data;
    ::UpdateVrTracking(p0);
  }

  static void CloseVrSimulator(Php::Parameters &params) {
    ::CloseVrSimulator();
  }

  static Php::Value IsVrSimulatorReady(Php::Parameters &params) {
    int result = ::IsVrSimulatorReady();
    return result;
  }

  static void ToggleVrMode(Php::Parameters &params) { ::ToggleVrMode(); }

  static void BeginVrDrawing(Php::Parameters &params) { ::BeginVrDrawing(); }

  static void EndVrDrawing(Php::Parameters &params) { ::EndVrDrawing(); }

  static void InitAudioDevice(Php::Parameters &params) { ::InitAudioDevice(); }

  static void CloseAudioDevice(Php::Parameters &params) {
    ::CloseAudioDevice();
  }

  static Php::Value IsAudioDeviceReady(Php::Parameters &params) {
    int result = ::IsAudioDeviceReady();
    return result;
  }

  static void SetMasterVolume(Php::Parameters &params) {
    double p0 = params[0];
    ::SetMasterVolume(p0);
  }

  static Php::Value LoadWave(Php::Parameters &params) {
    string p0 = params[0];
    struct Wave result = ::LoadWave(p0.c_str());
    return Php::Object("RayLib\\Wave", new Wave(result));
  }

  static Php::Value LoadSound(Php::Parameters &params) {
    string p0 = params[0];
    struct Sound result = ::LoadSound(p0.c_str());
    return Php::Object("RayLib\\Sound", new Sound(result));
  }

  static Php::Value LoadSoundFromWave(Php::Parameters &params) {
    ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
    struct Sound result = ::LoadSoundFromWave(p0);
    return Php::Object("RayLib\\Sound", new Sound(result));
  }

  static void UnloadWave(Php::Parameters &params) {
    ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
    ::UnloadWave(p0);
  }

  static void UnloadSound(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    ::UnloadSound(p0);
  }

  static void ExportWave(Php::Parameters &params) {
    ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::ExportWave(p0, p1.c_str());
  }

  static void ExportWaveAsCode(Php::Parameters &params) {
    ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
    string p1 = params[1];
    ::ExportWaveAsCode(p0, p1.c_str());
  }

  static void PlaySound(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    ::PlaySound(p0);
  }

  static void PauseSound(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    ::PauseSound(p0);
  }

  static void ResumeSound(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    ::ResumeSound(p0);
  }

  static void StopSound(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    ::StopSound(p0);
  }

  static Php::Value IsSoundPlaying(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    int result = ::IsSoundPlaying(p0);
    return result;
  }

  static void SetSoundVolume(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::SetSoundVolume(p0, p1);
  }

  static void SetSoundPitch(Php::Parameters &params) {
    ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::SetSoundPitch(p0, p1);
  }

  static void WaveFormat(Php::Parameters &params) {
    ::Wave *p0 = &((Wave *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::WaveFormat(p0, p1, p2, p3);
  }

  static Php::Value WaveCopy(Php::Parameters &params) {
    ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
    struct Wave result = ::WaveCopy(p0);
    return Php::Object("RayLib\\Wave", new Wave(result));
  }

  static void WaveCrop(Php::Parameters &params) {
    ::Wave *p0 = &((Wave *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    ::WaveCrop(p0, p1, p2);
  }

  static Php::Value InitAudioStream(Php::Parameters &params) {
    long p0 = params[0];
    long p1 = params[1];
    long p2 = params[2];
    struct AudioStream result = ::InitAudioStream(p0, p1, p2);
    return Php::Object("RayLib\\AudioStream", new AudioStream(result));
  }

  static void CloseAudioStream(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    ::CloseAudioStream(p0);
  }

  static Php::Value IsAudioBufferProcessed(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    int result = ::IsAudioBufferProcessed(p0);
    return result;
  }

  static void PlayAudioStream(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    ::PlayAudioStream(p0);
  }

  static void PauseAudioStream(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    ::PauseAudioStream(p0);
  }

  static void ResumeAudioStream(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    ::ResumeAudioStream(p0);
  }

  static Php::Value IsAudioStreamPlaying(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    int result = ::IsAudioStreamPlaying(p0);
    return result;
  }

  static void StopAudioStream(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    ::StopAudioStream(p0);
  }

  static void SetAudioStreamVolume(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::SetAudioStreamVolume(p0, p1);
  }

  static void SetAudioStreamPitch(Php::Parameters &params) {
    ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::SetAudioStreamPitch(p0, p1);
  }

  static Php::Value createVector2(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    return Php::Object("RayLib\\Vector2", new Vector2(::Vector2{p0, p1}));
  }

  static Php::Value createVector3(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    double p2 = params[2];
    return Php::Object("RayLib\\Vector3", new Vector3(::Vector3{p0, p1, p2}));
  }

  static Php::Value createVector4(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    return Php::Object("RayLib\\Vector4",
                       new Vector4(::Vector4{p0, p1, p2, p3}));
  }

  static Php::Value createMatrix(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    double p4 = params[4];
    double p5 = params[5];
    double p6 = params[6];
    double p7 = params[7];
    double p8 = params[8];
    double p9 = params[9];
    double p10 = params[10];
    double p11 = params[11];
    double p12 = params[12];
    double p13 = params[13];
    double p14 = params[14];
    double p15 = params[15];
    return Php::Object("RayLib\\Matrix",
                       new Matrix(::Matrix{p0, p1, p2, p3, p4, p5, p6, p7, p8,
                                           p9, p10, p11, p12, p13, p14, p15}));
  }

  static Php::Value createColor(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    return Php::Object("RayLib\\Color", new Color(::Color{p0, p1, p2, p3}));
  }

  static Php::Value createRectangle(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    return Php::Object("RayLib\\Rectangle",
                       new Rectangle(::Rectangle{p0, p1, p2, p3}));
  }

  static Php::Value createTexture2D(Php::Parameters &params) {
    long p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    return Php::Object("RayLib\\Texture2D",
                       new Texture2D(::Texture2D{p0, p1, p2, p3, p4}));
  }

  static Php::Value createRenderTexture2D(Php::Parameters &params) {
    return Php::Object("RayLib\\RenderTexture2D",
                       new RenderTexture2D(::RenderTexture2D{}));
  }

  static Php::Value createNPatchInfo(Php::Parameters &params) {
    ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    int p5 = params[5];
    return Php::Object("RayLib\\NPatchInfo",
                       new NPatchInfo(::NPatchInfo{p0, p1, p2, p3, p4, p5}));
  }

  static Php::Value createCamera3D(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    double p3 = params[3];
    int p4 = params[4];
    return Php::Object("RayLib\\Camera3D",
                       new Camera3D(::Camera3D{p0, p1, p2, p3, p4}));
  }

  static Php::Value createCamera2D(Php::Parameters &params) {
    ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
    ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
    double p2 = params[2];
    double p3 = params[3];
    return Php::Object("RayLib\\Camera2D",
                       new Camera2D(::Camera2D{p0, p1, p2, p3}));
  }

  static Php::Value createBoundingBox(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    return Php::Object("RayLib\\BoundingBox",
                       new BoundingBox(::BoundingBox{p0, p1}));
  }

  static Php::Value createMaterialMap(Php::Parameters &params) {
    ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    double p2 = params[2];
    return Php::Object("RayLib\\MaterialMap",
                       new MaterialMap(::MaterialMap{p0, p1, p2}));
  }

  static Php::Value createModel(Php::Parameters &params) {
    ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
    ::Matrix p1 = ((Matrix *)(params[1].implementation()))->data;
    ::Material p2 = ((Material *)(params[2].implementation()))->data;
    return Php::Object("RayLib\\Model", new Model(::Model{p0, p1, p2}));
  }

  static Php::Value createRay(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    return Php::Object("RayLib\\Ray", new Ray(::Ray{p0, p1}));
  }

  static Php::Value createRayHitInfo(Php::Parameters &params) {
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(::RayHitInfo{}));
  }

  static Php::Value createVrStereoConfig(Php::Parameters &params) {
    return Php::Object("RayLib\\VrStereoConfig",
                       new VrStereoConfig(::VrStereoConfig{}));
  }

  static Php::Value getColorLIGHTGRAY() {
    return Php::Object("RayLib\\Color", new Color(::Color{200, 200, 200, 255}));
  }

  static Php::Value getColorGRAY() {
    return Php::Object("RayLib\\Color", new Color(::Color{130, 130, 130, 255}));
  }

  static Php::Value getColorDARKGRAY() {
    return Php::Object("RayLib\\Color", new Color(::Color{80, 80, 80, 255}));
  }

  static Php::Value getColorYELLOW() {
    return Php::Object("RayLib\\Color", new Color(::Color{253, 249, 0, 255}));
  }

  static Php::Value getColorGOLD() {
    return Php::Object("RayLib\\Color", new Color(::Color{255, 203, 0, 255}));
  }

  static Php::Value getColorORANGE() {
    return Php::Object("RayLib\\Color", new Color(::Color{255, 161, 0, 255}));
  }

  static Php::Value getColorPINK() {
    return Php::Object("RayLib\\Color", new Color(::Color{255, 109, 194, 255}));
  }

  static Php::Value getColorRED() {
    return Php::Object("RayLib\\Color", new Color(::Color{230, 41, 55, 255}));
  }

  static Php::Value getColorMAROON() {
    return Php::Object("RayLib\\Color", new Color(::Color{190, 33, 55, 255}));
  }

  static Php::Value getColorGREEN() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 228, 48, 255}));
  }

  static Php::Value getColorLIME() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 158, 47, 255}));
  }

  static Php::Value getColorDARKGREEN() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 117, 44, 255}));
  }

  static Php::Value getColorSKYBLUE() {
    return Php::Object("RayLib\\Color", new Color(::Color{102, 191, 255, 255}));
  }

  static Php::Value getColorBLUE() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 121, 241, 255}));
  }

  static Php::Value getColorDARKBLUE() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 82, 172, 255}));
  }

  static Php::Value getColorPURPLE() {
    return Php::Object("RayLib\\Color", new Color(::Color{200, 122, 255, 255}));
  }

  static Php::Value getColorVIOLET() {
    return Php::Object("RayLib\\Color", new Color(::Color{135, 60, 190, 255}));
  }

  static Php::Value getColorDARKPURPLE() {
    return Php::Object("RayLib\\Color", new Color(::Color{112, 31, 126, 255}));
  }

  static Php::Value getColorBEIGE() {
    return Php::Object("RayLib\\Color", new Color(::Color{211, 176, 131, 255}));
  }

  static Php::Value getColorBROWN() {
    return Php::Object("RayLib\\Color", new Color(::Color{127, 106, 79, 255}));
  }

  static Php::Value getColorDARKBROWN() {
    return Php::Object("RayLib\\Color", new Color(::Color{76, 63, 47, 255}));
  }

  static Php::Value getColorWHITE() {
    return Php::Object("RayLib\\Color", new Color(::Color{255, 255, 255, 255}));
  }

  static Php::Value getColorBLACK() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 0, 0, 255}));
  }

  static Php::Value getColorBLANK() {
    return Php::Object("RayLib\\Color", new Color(::Color{0, 0, 0, 0}));
  }

  static Php::Value getColorMAGENTA() {
    return Php::Object("RayLib\\Color", new Color(::Color{255, 0, 255, 255}));
  }

  static Php::Value getColorRAYWHITE() {
    return Php::Object("RayLib\\Color", new Color(::Color{245, 245, 245, 255}));
  }
};

// symbols are exported according to the "C" language
extern "C" {
// export the "get_module" function that will be called by the Zend engine
PHPCPP_EXPORT void *get_module() {
  // create extension
  static Php::Extension extension("raylib", "1.0");

  Php::Namespace rlNamespace("RayLib");

  Php::Class<RL> rlClass("RL");

  Php::Class<Vector2> rlVector2("Vector2");
  rlNamespace.add(rlVector2);

  Php::Class<Vector3> rlVector3("Vector3");
  rlNamespace.add(rlVector3);

  Php::Class<Vector4> rlVector4("Vector4");
  rlNamespace.add(rlVector4);

  Php::Class<Matrix> rlMatrix("Matrix");
  rlNamespace.add(rlMatrix);

  Php::Class<Color> rlColor("Color");
  rlNamespace.add(rlColor);

  Php::Class<Rectangle> rlRectangle("Rectangle");
  rlNamespace.add(rlRectangle);

  Php::Class<Image> rlImage("Image");
  rlNamespace.add(rlImage);

  Php::Class<Texture2D> rlTexture2D("Texture2D");
  rlNamespace.add(rlTexture2D);

  Php::Class<RenderTexture2D> rlRenderTexture2D("RenderTexture2D");
  rlNamespace.add(rlRenderTexture2D);

  Php::Class<NPatchInfo> rlNPatchInfo("NPatchInfo");
  rlNamespace.add(rlNPatchInfo);

  Php::Class<CharInfo> rlCharInfo("CharInfo");
  rlNamespace.add(rlCharInfo);

  Php::Class<Font> rlFont("Font");
  rlNamespace.add(rlFont);

  Php::Class<Camera3D> rlCamera3D("Camera3D");
  rlNamespace.add(rlCamera3D);

  Php::Class<Camera2D> rlCamera2D("Camera2D");
  rlNamespace.add(rlCamera2D);

  Php::Class<BoundingBox> rlBoundingBox("BoundingBox");
  rlNamespace.add(rlBoundingBox);

  Php::Class<Mesh> rlMesh("Mesh");
  rlNamespace.add(rlMesh);

  Php::Class<Shader> rlShader("Shader");
  rlNamespace.add(rlShader);

  Php::Class<MaterialMap> rlMaterialMap("MaterialMap");
  rlNamespace.add(rlMaterialMap);

  Php::Class<Material> rlMaterial("Material");
  rlNamespace.add(rlMaterial);

  Php::Class<Model> rlModel("Model");
  rlNamespace.add(rlModel);

  Php::Class<Ray> rlRay("Ray");
  rlNamespace.add(rlRay);

  Php::Class<RayHitInfo> rlRayHitInfo("RayHitInfo");
  rlNamespace.add(rlRayHitInfo);

  Php::Class<Wave> rlWave("Wave");
  rlNamespace.add(rlWave);

  Php::Class<Sound> rlSound("Sound");
  rlNamespace.add(rlSound);

  Php::Class<AudioStream> rlAudioStream("AudioStream");
  rlNamespace.add(rlAudioStream);

  Php::Class<VrDeviceInfo> rlVrDeviceInfo("VrDeviceInfo");
  rlNamespace.add(rlVrDeviceInfo);

  Php::Class<VrStereoConfig> rlVrStereoConfig("VrStereoConfig");
  rlNamespace.add(rlVrStereoConfig);

  rlClass.method<&RL::InitWindow>("InitWindow");
  rlClass.method<&RL::WindowShouldClose>("WindowShouldClose");
  rlClass.method<&RL::CloseWindow>("CloseWindow");
  rlClass.method<&RL::IsWindowReady>("IsWindowReady");
  rlClass.method<&RL::IsWindowMinimized>("IsWindowMinimized");
  rlClass.method<&RL::IsWindowResized>("IsWindowResized");
  rlClass.method<&RL::IsWindowHidden>("IsWindowHidden");
  rlClass.method<&RL::ToggleFullscreen>("ToggleFullscreen");
  rlClass.method<&RL::UnhideWindow>("UnhideWindow");
  rlClass.method<&RL::HideWindow>("HideWindow");
  rlClass.method<&RL::SetWindowIcon>("SetWindowIcon");
  rlClass.method<&RL::SetWindowTitle>("SetWindowTitle");
  rlClass.method<&RL::SetWindowPosition>("SetWindowPosition");
  rlClass.method<&RL::SetWindowMonitor>("SetWindowMonitor");
  rlClass.method<&RL::SetWindowMinSize>("SetWindowMinSize");
  rlClass.method<&RL::SetWindowSize>("SetWindowSize");
  rlClass.method<&RL::GetScreenWidth>("GetScreenWidth");
  rlClass.method<&RL::GetScreenHeight>("GetScreenHeight");
  rlClass.method<&RL::GetMonitorCount>("GetMonitorCount");
  rlClass.method<&RL::GetMonitorWidth>("GetMonitorWidth");
  rlClass.method<&RL::GetMonitorHeight>("GetMonitorHeight");
  rlClass.method<&RL::GetMonitorPhysicalWidth>("GetMonitorPhysicalWidth");
  rlClass.method<&RL::GetMonitorPhysicalHeight>("GetMonitorPhysicalHeight");
  rlClass.method<&RL::SetClipboardText>("SetClipboardText");
  rlClass.method<&RL::ShowCursor>("ShowCursor");
  rlClass.method<&RL::HideCursor>("HideCursor");
  rlClass.method<&RL::IsCursorHidden>("IsCursorHidden");
  rlClass.method<&RL::EnableCursor>("EnableCursor");
  rlClass.method<&RL::DisableCursor>("DisableCursor");
  rlClass.method<&RL::ClearBackground>("ClearBackground");
  rlClass.method<&RL::BeginDrawing>("BeginDrawing");
  rlClass.method<&RL::EndDrawing>("EndDrawing");
  rlClass.method<&RL::BeginMode2D>("BeginMode2D");
  rlClass.method<&RL::EndMode2D>("EndMode2D");
  rlClass.method<&RL::BeginMode3D>("BeginMode3D");
  rlClass.method<&RL::EndMode3D>("EndMode3D");
  rlClass.method<&RL::BeginTextureMode>("BeginTextureMode");
  rlClass.method<&RL::EndTextureMode>("EndTextureMode");
  rlClass.method<&RL::GetMouseRay>("GetMouseRay");
  rlClass.method<&RL::GetWorldToScreen>("GetWorldToScreen");
  rlClass.method<&RL::GetCameraMatrix>("GetCameraMatrix");
  rlClass.method<&RL::SetTargetFPS>("SetTargetFPS");
  rlClass.method<&RL::GetFPS>("GetFPS");
  rlClass.method<&RL::GetFrameTime>("GetFrameTime");
  rlClass.method<&RL::GetTime>("GetTime");
  rlClass.method<&RL::ColorToInt>("ColorToInt");
  rlClass.method<&RL::ColorNormalize>("ColorNormalize");
  rlClass.method<&RL::ColorToHSV>("ColorToHSV");
  rlClass.method<&RL::ColorFromHSV>("ColorFromHSV");
  rlClass.method<&RL::GetColor>("GetColor");
  rlClass.method<&RL::Fade>("Fade");
  rlClass.method<&RL::SetConfigFlags>("SetConfigFlags");
  rlClass.method<&RL::SetTraceLogLevel>("SetTraceLogLevel");
  rlClass.method<&RL::SetTraceLogExit>("SetTraceLogExit");
  rlClass.method<&RL::TraceLog>("TraceLog");
  rlClass.method<&RL::TakeScreenshot>("TakeScreenshot");
  rlClass.method<&RL::GetRandomValue>("GetRandomValue");
  rlClass.method<&RL::ChangeDirectory>("ChangeDirectory");
  rlClass.method<&RL::IsFileDropped>("IsFileDropped");
  rlClass.method<&RL::GetFileModTime>("GetFileModTime");
  rlClass.method<&RL::StorageSaveValue>("StorageSaveValue");
  rlClass.method<&RL::StorageLoadValue>("StorageLoadValue");
  rlClass.method<&RL::OpenURL>("OpenURL");
  rlClass.method<&RL::IsKeyPressed>("IsKeyPressed");
  rlClass.method<&RL::IsKeyDown>("IsKeyDown");
  rlClass.method<&RL::IsKeyReleased>("IsKeyReleased");
  rlClass.method<&RL::IsKeyUp>("IsKeyUp");
  rlClass.method<&RL::GetKeyPressed>("GetKeyPressed");
  rlClass.method<&RL::SetExitKey>("SetExitKey");
  rlClass.method<&RL::IsGamepadAvailable>("IsGamepadAvailable");
  rlClass.method<&RL::IsGamepadName>("IsGamepadName");
  rlClass.method<&RL::IsGamepadButtonPressed>("IsGamepadButtonPressed");
  rlClass.method<&RL::IsGamepadButtonDown>("IsGamepadButtonDown");
  rlClass.method<&RL::IsGamepadButtonReleased>("IsGamepadButtonReleased");
  rlClass.method<&RL::IsGamepadButtonUp>("IsGamepadButtonUp");
  rlClass.method<&RL::GetGamepadButtonPressed>("GetGamepadButtonPressed");
  rlClass.method<&RL::GetGamepadAxisCount>("GetGamepadAxisCount");
  rlClass.method<&RL::GetGamepadAxisMovement>("GetGamepadAxisMovement");
  rlClass.method<&RL::IsMouseButtonPressed>("IsMouseButtonPressed");
  rlClass.method<&RL::IsMouseButtonDown>("IsMouseButtonDown");
  rlClass.method<&RL::IsMouseButtonReleased>("IsMouseButtonReleased");
  rlClass.method<&RL::IsMouseButtonUp>("IsMouseButtonUp");
  rlClass.method<&RL::GetMouseX>("GetMouseX");
  rlClass.method<&RL::GetMouseY>("GetMouseY");
  rlClass.method<&RL::GetMousePosition>("GetMousePosition");
  rlClass.method<&RL::SetMousePosition>("SetMousePosition");
  rlClass.method<&RL::SetMouseOffset>("SetMouseOffset");
  rlClass.method<&RL::SetMouseScale>("SetMouseScale");
  rlClass.method<&RL::GetMouseWheelMove>("GetMouseWheelMove");
  rlClass.method<&RL::GetTouchX>("GetTouchX");
  rlClass.method<&RL::GetTouchY>("GetTouchY");
  rlClass.method<&RL::GetTouchPosition>("GetTouchPosition");
  rlClass.method<&RL::SetGesturesEnabled>("SetGesturesEnabled");
  rlClass.method<&RL::IsGestureDetected>("IsGestureDetected");
  rlClass.method<&RL::GetGestureDetected>("GetGestureDetected");
  rlClass.method<&RL::GetTouchPointsCount>("GetTouchPointsCount");
  rlClass.method<&RL::GetGestureHoldDuration>("GetGestureHoldDuration");
  rlClass.method<&RL::GetGestureDragVector>("GetGestureDragVector");
  rlClass.method<&RL::GetGestureDragAngle>("GetGestureDragAngle");
  rlClass.method<&RL::GetGesturePinchVector>("GetGesturePinchVector");
  rlClass.method<&RL::GetGesturePinchAngle>("GetGesturePinchAngle");
  rlClass.method<&RL::SetCameraMode>("SetCameraMode");
  rlClass.method<&RL::UpdateCamera>("UpdateCamera");
  rlClass.method<&RL::SetCameraPanControl>("SetCameraPanControl");
  rlClass.method<&RL::SetCameraAltControl>("SetCameraAltControl");
  rlClass.method<&RL::SetCameraSmoothZoomControl>("SetCameraSmoothZoomControl");
  rlClass.method<&RL::SetCameraMoveControls>("SetCameraMoveControls");
  rlClass.method<&RL::DrawPixel>("DrawPixel");
  rlClass.method<&RL::DrawPixelV>("DrawPixelV");
  rlClass.method<&RL::DrawLine>("DrawLine");
  rlClass.method<&RL::DrawLineV>("DrawLineV");
  rlClass.method<&RL::DrawLineEx>("DrawLineEx");
  rlClass.method<&RL::DrawLineBezier>("DrawLineBezier");
  rlClass.method<&RL::DrawCircle>("DrawCircle");
  rlClass.method<&RL::DrawCircleSector>("DrawCircleSector");
  rlClass.method<&RL::DrawCircleGradient>("DrawCircleGradient");
  rlClass.method<&RL::DrawCircleV>("DrawCircleV");
  rlClass.method<&RL::DrawCircleLines>("DrawCircleLines");
  rlClass.method<&RL::DrawRectangle>("DrawRectangle");
  rlClass.method<&RL::DrawRectangleV>("DrawRectangleV");
  rlClass.method<&RL::DrawRectangleRec>("DrawRectangleRec");
  rlClass.method<&RL::DrawRectanglePro>("DrawRectanglePro");
  rlClass.method<&RL::DrawRectangleGradientV>("DrawRectangleGradientV");
  rlClass.method<&RL::DrawRectangleGradientH>("DrawRectangleGradientH");
  rlClass.method<&RL::DrawRectangleGradientEx>("DrawRectangleGradientEx");
  rlClass.method<&RL::DrawRectangleLines>("DrawRectangleLines");
  rlClass.method<&RL::DrawRectangleLinesEx>("DrawRectangleLinesEx");
  rlClass.method<&RL::DrawTriangle>("DrawTriangle");
  rlClass.method<&RL::DrawTriangleLines>("DrawTriangleLines");
  rlClass.method<&RL::DrawPoly>("DrawPoly");
  rlClass.method<&RL::DrawPolyEx>("DrawPolyEx");
  rlClass.method<&RL::DrawPolyExLines>("DrawPolyExLines");
  rlClass.method<&RL::SetShapesTexture>("SetShapesTexture");
  rlClass.method<&RL::CheckCollisionRecs>("CheckCollisionRecs");
  rlClass.method<&RL::CheckCollisionCircles>("CheckCollisionCircles");
  rlClass.method<&RL::CheckCollisionCircleRec>("CheckCollisionCircleRec");
  rlClass.method<&RL::GetCollisionRec>("GetCollisionRec");
  rlClass.method<&RL::CheckCollisionPointRec>("CheckCollisionPointRec");
  rlClass.method<&RL::CheckCollisionPointCircle>("CheckCollisionPointCircle");
  rlClass.method<&RL::CheckCollisionPointTriangle>(
      "CheckCollisionPointTriangle");
  rlClass.method<&RL::LoadImage>("LoadImage");
  rlClass.method<&RL::LoadImageEx>("LoadImageEx");
  rlClass.method<&RL::LoadImageRaw>("LoadImageRaw");
  rlClass.method<&RL::ExportImage>("ExportImage");
  rlClass.method<&RL::ExportImageAsCode>("ExportImageAsCode");
  rlClass.method<&RL::LoadTexture>("LoadTexture");
  rlClass.method<&RL::LoadTextureFromImage>("LoadTextureFromImage");
  rlClass.method<&RL::LoadTextureCubemap>("LoadTextureCubemap");
  rlClass.method<&RL::LoadRenderTexture>("LoadRenderTexture");
  rlClass.method<&RL::UnloadImage>("UnloadImage");
  rlClass.method<&RL::UnloadTexture>("UnloadTexture");
  rlClass.method<&RL::UnloadRenderTexture>("UnloadRenderTexture");
  rlClass.method<&RL::GetPixelDataSize>("GetPixelDataSize");
  rlClass.method<&RL::GetTextureData>("GetTextureData");
  rlClass.method<&RL::ImageCopy>("ImageCopy");
  rlClass.method<&RL::ImageToPOT>("ImageToPOT");
  rlClass.method<&RL::ImageFormat>("ImageFormat");
  rlClass.method<&RL::ImageAlphaMask>("ImageAlphaMask");
  rlClass.method<&RL::ImageAlphaClear>("ImageAlphaClear");
  rlClass.method<&RL::ImageAlphaCrop>("ImageAlphaCrop");
  rlClass.method<&RL::ImageAlphaPremultiply>("ImageAlphaPremultiply");
  rlClass.method<&RL::ImageCrop>("ImageCrop");
  rlClass.method<&RL::ImageResize>("ImageResize");
  rlClass.method<&RL::ImageResizeNN>("ImageResizeNN");
  rlClass.method<&RL::ImageResizeCanvas>("ImageResizeCanvas");
  rlClass.method<&RL::ImageMipmaps>("ImageMipmaps");
  rlClass.method<&RL::ImageDither>("ImageDither");
  rlClass.method<&RL::ImageText>("ImageText");
  rlClass.method<&RL::ImageTextEx>("ImageTextEx");
  rlClass.method<&RL::ImageDraw>("ImageDraw");
  rlClass.method<&RL::ImageDrawRectangle>("ImageDrawRectangle");
  rlClass.method<&RL::ImageDrawRectangleLines>("ImageDrawRectangleLines");
  rlClass.method<&RL::ImageDrawText>("ImageDrawText");
  rlClass.method<&RL::ImageDrawTextEx>("ImageDrawTextEx");
  rlClass.method<&RL::ImageFlipVertical>("ImageFlipVertical");
  rlClass.method<&RL::ImageFlipHorizontal>("ImageFlipHorizontal");
  rlClass.method<&RL::ImageRotateCW>("ImageRotateCW");
  rlClass.method<&RL::ImageRotateCCW>("ImageRotateCCW");
  rlClass.method<&RL::ImageColorTint>("ImageColorTint");
  rlClass.method<&RL::ImageColorInvert>("ImageColorInvert");
  rlClass.method<&RL::ImageColorGrayscale>("ImageColorGrayscale");
  rlClass.method<&RL::ImageColorContrast>("ImageColorContrast");
  rlClass.method<&RL::ImageColorBrightness>("ImageColorBrightness");
  rlClass.method<&RL::ImageColorReplace>("ImageColorReplace");
  rlClass.method<&RL::GenImageColor>("GenImageColor");
  rlClass.method<&RL::GenImageGradientV>("GenImageGradientV");
  rlClass.method<&RL::GenImageGradientH>("GenImageGradientH");
  rlClass.method<&RL::GenImageGradientRadial>("GenImageGradientRadial");
  rlClass.method<&RL::GenImageChecked>("GenImageChecked");
  rlClass.method<&RL::GenImageWhiteNoise>("GenImageWhiteNoise");
  rlClass.method<&RL::GenImagePerlinNoise>("GenImagePerlinNoise");
  rlClass.method<&RL::GenImageCellular>("GenImageCellular");
  rlClass.method<&RL::GenTextureMipmaps>("GenTextureMipmaps");
  rlClass.method<&RL::SetTextureFilter>("SetTextureFilter");
  rlClass.method<&RL::SetTextureWrap>("SetTextureWrap");
  rlClass.method<&RL::DrawTexture>("DrawTexture");
  rlClass.method<&RL::DrawTextureV>("DrawTextureV");
  rlClass.method<&RL::DrawTextureEx>("DrawTextureEx");
  rlClass.method<&RL::DrawTextureRec>("DrawTextureRec");
  rlClass.method<&RL::DrawTextureQuad>("DrawTextureQuad");
  rlClass.method<&RL::DrawTexturePro>("DrawTexturePro");
  rlClass.method<&RL::DrawTextureNPatch>("DrawTextureNPatch");
  rlClass.method<&RL::GetFontDefault>("GetFontDefault");
  rlClass.method<&RL::LoadFont>("LoadFont");
  rlClass.method<&RL::LoadFontFromImage>("LoadFontFromImage");
  rlClass.method<&RL::GenImageFontAtlas>("GenImageFontAtlas");
  rlClass.method<&RL::UnloadFont>("UnloadFont");
  rlClass.method<&RL::DrawFPS>("DrawFPS");
  rlClass.method<&RL::DrawText>("DrawText");
  rlClass.method<&RL::DrawTextEx>("DrawTextEx");
  rlClass.method<&RL::DrawTextRec>("DrawTextRec");
  rlClass.method<&RL::DrawTextRecEx>("DrawTextRecEx");
  rlClass.method<&RL::MeasureText>("MeasureText");
  rlClass.method<&RL::MeasureTextEx>("MeasureTextEx");
  rlClass.method<&RL::GetGlyphIndex>("GetGlyphIndex");
  rlClass.method<&RL::DrawLine3D>("DrawLine3D");
  rlClass.method<&RL::DrawCircle3D>("DrawCircle3D");
  rlClass.method<&RL::DrawCube>("DrawCube");
  rlClass.method<&RL::DrawCubeV>("DrawCubeV");
  rlClass.method<&RL::DrawCubeWires>("DrawCubeWires");
  rlClass.method<&RL::DrawCubeTexture>("DrawCubeTexture");
  rlClass.method<&RL::DrawSphere>("DrawSphere");
  rlClass.method<&RL::DrawSphereEx>("DrawSphereEx");
  rlClass.method<&RL::DrawSphereWires>("DrawSphereWires");
  rlClass.method<&RL::DrawCylinder>("DrawCylinder");
  rlClass.method<&RL::DrawCylinderWires>("DrawCylinderWires");
  rlClass.method<&RL::DrawPlane>("DrawPlane");
  rlClass.method<&RL::DrawRay>("DrawRay");
  rlClass.method<&RL::DrawGrid>("DrawGrid");
  rlClass.method<&RL::DrawGizmo>("DrawGizmo");
  rlClass.method<&RL::LoadModel>("LoadModel");
  rlClass.method<&RL::LoadModelFromMesh>("LoadModelFromMesh");
  rlClass.method<&RL::UnloadModel>("UnloadModel");
  rlClass.method<&RL::LoadMesh>("LoadMesh");
  rlClass.method<&RL::UnloadMesh>("UnloadMesh");
  rlClass.method<&RL::ExportMesh>("ExportMesh");
  rlClass.method<&RL::MeshBoundingBox>("MeshBoundingBox");
  rlClass.method<&RL::MeshTangents>("MeshTangents");
  rlClass.method<&RL::MeshBinormals>("MeshBinormals");
  rlClass.method<&RL::GenMeshPoly>("GenMeshPoly");
  rlClass.method<&RL::GenMeshPlane>("GenMeshPlane");
  rlClass.method<&RL::GenMeshCube>("GenMeshCube");
  rlClass.method<&RL::GenMeshSphere>("GenMeshSphere");
  rlClass.method<&RL::GenMeshHemiSphere>("GenMeshHemiSphere");
  rlClass.method<&RL::GenMeshCylinder>("GenMeshCylinder");
  rlClass.method<&RL::GenMeshTorus>("GenMeshTorus");
  rlClass.method<&RL::GenMeshKnot>("GenMeshKnot");
  rlClass.method<&RL::GenMeshHeightmap>("GenMeshHeightmap");
  rlClass.method<&RL::GenMeshCubicmap>("GenMeshCubicmap");
  rlClass.method<&RL::LoadMaterial>("LoadMaterial");
  rlClass.method<&RL::LoadMaterialDefault>("LoadMaterialDefault");
  rlClass.method<&RL::UnloadMaterial>("UnloadMaterial");
  rlClass.method<&RL::DrawModel>("DrawModel");
  rlClass.method<&RL::DrawModelEx>("DrawModelEx");
  rlClass.method<&RL::DrawModelWires>("DrawModelWires");
  rlClass.method<&RL::DrawModelWiresEx>("DrawModelWiresEx");
  rlClass.method<&RL::DrawBoundingBox>("DrawBoundingBox");
  rlClass.method<&RL::DrawBillboard>("DrawBillboard");
  rlClass.method<&RL::DrawBillboardRec>("DrawBillboardRec");
  rlClass.method<&RL::CheckCollisionSpheres>("CheckCollisionSpheres");
  rlClass.method<&RL::CheckCollisionBoxes>("CheckCollisionBoxes");
  rlClass.method<&RL::CheckCollisionBoxSphere>("CheckCollisionBoxSphere");
  rlClass.method<&RL::CheckCollisionRaySphere>("CheckCollisionRaySphere");
  rlClass.method<&RL::CheckCollisionRaySphereEx>("CheckCollisionRaySphereEx");
  rlClass.method<&RL::CheckCollisionRayBox>("CheckCollisionRayBox");
  rlClass.method<&RL::GetCollisionRayModel>("GetCollisionRayModel");
  rlClass.method<&RL::GetCollisionRayTriangle>("GetCollisionRayTriangle");
  rlClass.method<&RL::GetCollisionRayGround>("GetCollisionRayGround");
  rlClass.method<&RL::LoadShader>("LoadShader");
  rlClass.method<&RL::UnloadShader>("UnloadShader");
  rlClass.method<&RL::GetShaderDefault>("GetShaderDefault");
  rlClass.method<&RL::GetTextureDefault>("GetTextureDefault");
  rlClass.method<&RL::GetShaderLocation>("GetShaderLocation");
  rlClass.method<&RL::SetShaderValueMatrix>("SetShaderValueMatrix");
  rlClass.method<&RL::SetMatrixProjection>("SetMatrixProjection");
  rlClass.method<&RL::SetMatrixModelview>("SetMatrixModelview");
  rlClass.method<&RL::GetMatrixModelview>("GetMatrixModelview");
  rlClass.method<&RL::GenTextureCubemap>("GenTextureCubemap");
  rlClass.method<&RL::GenTextureIrradiance>("GenTextureIrradiance");
  rlClass.method<&RL::GenTexturePrefilter>("GenTexturePrefilter");
  rlClass.method<&RL::GenTextureBRDF>("GenTextureBRDF");
  rlClass.method<&RL::BeginShaderMode>("BeginShaderMode");
  rlClass.method<&RL::EndShaderMode>("EndShaderMode");
  rlClass.method<&RL::BeginBlendMode>("BeginBlendMode");
  rlClass.method<&RL::EndBlendMode>("EndBlendMode");
  rlClass.method<&RL::BeginScissorMode>("BeginScissorMode");
  rlClass.method<&RL::EndScissorMode>("EndScissorMode");
  rlClass.method<&RL::GetVrDeviceInfo>("GetVrDeviceInfo");
  rlClass.method<&RL::InitVrSimulator>("InitVrSimulator");
  rlClass.method<&RL::UpdateVrTracking>("UpdateVrTracking");
  rlClass.method<&RL::CloseVrSimulator>("CloseVrSimulator");
  rlClass.method<&RL::IsVrSimulatorReady>("IsVrSimulatorReady");
  rlClass.method<&RL::ToggleVrMode>("ToggleVrMode");
  rlClass.method<&RL::BeginVrDrawing>("BeginVrDrawing");
  rlClass.method<&RL::EndVrDrawing>("EndVrDrawing");
  rlClass.method<&RL::InitAudioDevice>("InitAudioDevice");
  rlClass.method<&RL::CloseAudioDevice>("CloseAudioDevice");
  rlClass.method<&RL::IsAudioDeviceReady>("IsAudioDeviceReady");
  rlClass.method<&RL::SetMasterVolume>("SetMasterVolume");
  rlClass.method<&RL::LoadWave>("LoadWave");
  rlClass.method<&RL::LoadSound>("LoadSound");
  rlClass.method<&RL::LoadSoundFromWave>("LoadSoundFromWave");
  rlClass.method<&RL::UnloadWave>("UnloadWave");
  rlClass.method<&RL::UnloadSound>("UnloadSound");
  rlClass.method<&RL::ExportWave>("ExportWave");
  rlClass.method<&RL::ExportWaveAsCode>("ExportWaveAsCode");
  rlClass.method<&RL::PlaySound>("PlaySound");
  rlClass.method<&RL::PauseSound>("PauseSound");
  rlClass.method<&RL::ResumeSound>("ResumeSound");
  rlClass.method<&RL::StopSound>("StopSound");
  rlClass.method<&RL::IsSoundPlaying>("IsSoundPlaying");
  rlClass.method<&RL::SetSoundVolume>("SetSoundVolume");
  rlClass.method<&RL::SetSoundPitch>("SetSoundPitch");
  rlClass.method<&RL::WaveFormat>("WaveFormat");
  rlClass.method<&RL::WaveCopy>("WaveCopy");
  rlClass.method<&RL::WaveCrop>("WaveCrop");
  rlClass.method<&RL::InitAudioStream>("InitAudioStream");
  rlClass.method<&RL::CloseAudioStream>("CloseAudioStream");
  rlClass.method<&RL::IsAudioBufferProcessed>("IsAudioBufferProcessed");
  rlClass.method<&RL::PlayAudioStream>("PlayAudioStream");
  rlClass.method<&RL::PauseAudioStream>("PauseAudioStream");
  rlClass.method<&RL::ResumeAudioStream>("ResumeAudioStream");
  rlClass.method<&RL::IsAudioStreamPlaying>("IsAudioStreamPlaying");
  rlClass.method<&RL::StopAudioStream>("StopAudioStream");
  rlClass.method<&RL::SetAudioStreamVolume>("SetAudioStreamVolume");
  rlClass.method<&RL::SetAudioStreamPitch>("SetAudioStreamPitch");
  rlClass.method<&RL::createVector2>("Vector2");
  rlClass.method<&RL::createVector3>("Vector3");
  rlClass.method<&RL::createVector4>("Vector4");
  rlClass.method<&RL::createMatrix>("Matrix");
  rlClass.method<&RL::createColor>("Color");
  rlClass.method<&RL::createRectangle>("Rectangle");
  rlClass.method<&RL::createTexture2D>("Texture2D");
  rlClass.method<&RL::createRenderTexture2D>("RenderTexture2D");
  rlClass.method<&RL::createNPatchInfo>("NPatchInfo");
  rlClass.method<&RL::createCamera3D>("Camera3D");
  rlClass.method<&RL::createCamera2D>("Camera2D");
  rlClass.method<&RL::createBoundingBox>("BoundingBox");
  rlClass.method<&RL::createMaterialMap>("MaterialMap");
  rlClass.method<&RL::createModel>("Model");
  rlClass.method<&RL::createRay>("Ray");
  rlClass.method<&RL::createRayHitInfo>("RayHitInfo");
  rlClass.method<&RL::createVrStereoConfig>("VrStereoConfig");
  rlClass.method<&RL::getColorLIGHTGRAY>("LIGHTGRAY");
  rlClass.method<&RL::getColorGRAY>("GRAY");
  rlClass.method<&RL::getColorDARKGRAY>("DARKGRAY");
  rlClass.method<&RL::getColorYELLOW>("YELLOW");
  rlClass.method<&RL::getColorGOLD>("GOLD");
  rlClass.method<&RL::getColorORANGE>("ORANGE");
  rlClass.method<&RL::getColorPINK>("PINK");
  rlClass.method<&RL::getColorRED>("RED");
  rlClass.method<&RL::getColorMAROON>("MAROON");
  rlClass.method<&RL::getColorGREEN>("GREEN");
  rlClass.method<&RL::getColorLIME>("LIME");
  rlClass.method<&RL::getColorDARKGREEN>("DARKGREEN");
  rlClass.method<&RL::getColorSKYBLUE>("SKYBLUE");
  rlClass.method<&RL::getColorBLUE>("BLUE");
  rlClass.method<&RL::getColorDARKBLUE>("DARKBLUE");
  rlClass.method<&RL::getColorPURPLE>("PURPLE");
  rlClass.method<&RL::getColorVIOLET>("VIOLET");
  rlClass.method<&RL::getColorDARKPURPLE>("DARKPURPLE");
  rlClass.method<&RL::getColorBEIGE>("BEIGE");
  rlClass.method<&RL::getColorBROWN>("BROWN");
  rlClass.method<&RL::getColorDARKBROWN>("DARKBROWN");
  rlClass.method<&RL::getColorWHITE>("WHITE");
  rlClass.method<&RL::getColorBLACK>("BLACK");
  rlClass.method<&RL::getColorBLANK>("BLANK");
  rlClass.method<&RL::getColorMAGENTA>("MAGENTA");
  rlClass.method<&RL::getColorRAYWHITE>("RAYWHITE");

  rlNamespace.add(rlClass);

  // add everything to extension
  extension.add(rlNamespace);

  // return the module entry
  return extension.module();
}
}
} // namespace rl
