
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
  Php::Value getx() {
    double result = data.x;
    return result;
  }
  Php::Value gety() {
    double result = data.y;
    return result;
  }
  void setx(const Php::Value &v) { data.x = (double)v; }
  void sety(const Php::Value &v) { data.y = (double)v; }
};

class Vector3 : public Php::Base {
public:
  ::Vector3 data;
  Vector3(::Vector3 x) { data = x; }
  Php::Value getx() {
    double result = data.x;
    return result;
  }
  Php::Value gety() {
    double result = data.y;
    return result;
  }
  Php::Value getz() {
    double result = data.z;
    return result;
  }
  void setx(const Php::Value &v) { data.x = (double)v; }
  void sety(const Php::Value &v) { data.y = (double)v; }
  void setz(const Php::Value &v) { data.z = (double)v; }
};

class Vector4 : public Php::Base {
public:
  ::Vector4 data;
  Vector4(::Vector4 x) { data = x; }
  Php::Value getx() {
    double result = data.x;
    return result;
  }
  Php::Value gety() {
    double result = data.y;
    return result;
  }
  Php::Value getz() {
    double result = data.z;
    return result;
  }
  Php::Value getw() {
    double result = data.w;
    return result;
  }
  void setx(const Php::Value &v) { data.x = (double)v; }
  void sety(const Php::Value &v) { data.y = (double)v; }
  void setz(const Php::Value &v) { data.z = (double)v; }
  void setw(const Php::Value &v) { data.w = (double)v; }
};

class Matrix : public Php::Base {
public:
  ::Matrix data;
  Matrix(::Matrix x) { data = x; }
  Php::Value getm0() {
    double result = data.m0;
    return result;
  }
  Php::Value getm4() {
    double result = data.m4;
    return result;
  }
  Php::Value getm8() {
    double result = data.m8;
    return result;
  }
  Php::Value getm12() {
    double result = data.m12;
    return result;
  }
  Php::Value getm1() {
    double result = data.m1;
    return result;
  }
  Php::Value getm5() {
    double result = data.m5;
    return result;
  }
  Php::Value getm9() {
    double result = data.m9;
    return result;
  }
  Php::Value getm13() {
    double result = data.m13;
    return result;
  }
  Php::Value getm2() {
    double result = data.m2;
    return result;
  }
  Php::Value getm6() {
    double result = data.m6;
    return result;
  }
  Php::Value getm10() {
    double result = data.m10;
    return result;
  }
  Php::Value getm14() {
    double result = data.m14;
    return result;
  }
  Php::Value getm3() {
    double result = data.m3;
    return result;
  }
  Php::Value getm7() {
    double result = data.m7;
    return result;
  }
  Php::Value getm11() {
    double result = data.m11;
    return result;
  }
  Php::Value getm15() {
    double result = data.m15;
    return result;
  }
  void setm0(const Php::Value &v) { data.m0 = (double)v; }
  void setm4(const Php::Value &v) { data.m4 = (double)v; }
  void setm8(const Php::Value &v) { data.m8 = (double)v; }
  void setm12(const Php::Value &v) { data.m12 = (double)v; }
  void setm1(const Php::Value &v) { data.m1 = (double)v; }
  void setm5(const Php::Value &v) { data.m5 = (double)v; }
  void setm9(const Php::Value &v) { data.m9 = (double)v; }
  void setm13(const Php::Value &v) { data.m13 = (double)v; }
  void setm2(const Php::Value &v) { data.m2 = (double)v; }
  void setm6(const Php::Value &v) { data.m6 = (double)v; }
  void setm10(const Php::Value &v) { data.m10 = (double)v; }
  void setm14(const Php::Value &v) { data.m14 = (double)v; }
  void setm3(const Php::Value &v) { data.m3 = (double)v; }
  void setm7(const Php::Value &v) { data.m7 = (double)v; }
  void setm11(const Php::Value &v) { data.m11 = (double)v; }
  void setm15(const Php::Value &v) { data.m15 = (double)v; }
};

class Color : public Php::Base {
public:
  ::Color data;
  Color(::Color x) { data = x; }
  Php::Value getr() {
    int result = data.r;
    return result;
  }
  Php::Value getg() {
    int result = data.g;
    return result;
  }
  Php::Value getb() {
    int result = data.b;
    return result;
  }
  Php::Value geta() {
    int result = data.a;
    return result;
  }
  void setr(const Php::Value &v) { data.r = (int)v; }
  void setg(const Php::Value &v) { data.g = (int)v; }
  void setb(const Php::Value &v) { data.b = (int)v; }
  void seta(const Php::Value &v) { data.a = (int)v; }
};

class Rectangle : public Php::Base {
public:
  ::Rectangle data;
  Rectangle(::Rectangle x) { data = x; }
  Php::Value getx() {
    double result = data.x;
    return result;
  }
  Php::Value gety() {
    double result = data.y;
    return result;
  }
  Php::Value getwidth() {
    double result = data.width;
    return result;
  }
  Php::Value getheight() {
    double result = data.height;
    return result;
  }
  void setx(const Php::Value &v) { data.x = (double)v; }
  void sety(const Php::Value &v) { data.y = (double)v; }
  void setwidth(const Php::Value &v) { data.width = (double)v; }
  void setheight(const Php::Value &v) { data.height = (double)v; }
};

class Image : public Php::Base {
public:
  ::Image data;
  Image(::Image x) { data = x; }
  Php::Value getwidth() {
    int result = data.width;
    return result;
  }
  Php::Value getheight() {
    int result = data.height;
    return result;
  }
  Php::Value getmipmaps() {
    int result = data.mipmaps;
    return result;
  }
  Php::Value getformat() {
    int result = data.format;
    return result;
  }
  void setwidth(const Php::Value &v) { data.width = (int)v; }
  void setheight(const Php::Value &v) { data.height = (int)v; }
  void setmipmaps(const Php::Value &v) { data.mipmaps = (int)v; }
  void setformat(const Php::Value &v) { data.format = (int)v; }
};

class Texture2D : public Php::Base {
public:
  ::Texture2D data;
  Texture2D(::Texture2D x) { data = x; }
  Php::Value getid() {
    long result = data.id;
    return result;
  }
  Php::Value getwidth() {
    int result = data.width;
    return result;
  }
  Php::Value getheight() {
    int result = data.height;
    return result;
  }
  Php::Value getmipmaps() {
    int result = data.mipmaps;
    return result;
  }
  Php::Value getformat() {
    int result = data.format;
    return result;
  }
  void setid(const Php::Value &v) { data.id = (long)v; }
  void setwidth(const Php::Value &v) { data.width = (int)v; }
  void setheight(const Php::Value &v) { data.height = (int)v; }
  void setmipmaps(const Php::Value &v) { data.mipmaps = (int)v; }
  void setformat(const Php::Value &v) { data.format = (int)v; }
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
  Php::Value getsourceRec() {
    Php::Value result =
        Php::Object("RayLib\\Rectangle", new Rectangle(data.sourceRec));
    return result;
  }
  Php::Value getleft() {
    int result = data.left;
    return result;
  }
  Php::Value gettop() {
    int result = data.top;
    return result;
  }
  Php::Value getright() {
    int result = data.right;
    return result;
  }
  Php::Value getbottom() {
    int result = data.bottom;
    return result;
  }
  Php::Value gettype() {
    int result = data.type;
    return result;
  }
  void setsourceRec(const Php::Value &v) {
    data.sourceRec = ((Rectangle *)(v.implementation()))->data;
  }
  void setleft(const Php::Value &v) { data.left = (int)v; }
  void settop(const Php::Value &v) { data.top = (int)v; }
  void setright(const Php::Value &v) { data.right = (int)v; }
  void setbottom(const Php::Value &v) { data.bottom = (int)v; }
  void settype(const Php::Value &v) { data.type = (int)v; }
};

class CharInfo : public Php::Base {
public:
  ::CharInfo data;
  CharInfo(::CharInfo x) { data = x; }
  Php::Value getvalue() {
    int result = data.value;
    return result;
  }
  Php::Value getrec() {
    Php::Value result =
        Php::Object("RayLib\\Rectangle", new Rectangle(data.rec));
    return result;
  }
  Php::Value getoffsetX() {
    int result = data.offsetX;
    return result;
  }
  Php::Value getoffsetY() {
    int result = data.offsetY;
    return result;
  }
  Php::Value getadvanceX() {
    int result = data.advanceX;
    return result;
  }
  void setvalue(const Php::Value &v) { data.value = (int)v; }
  void setrec(const Php::Value &v) {
    data.rec = ((Rectangle *)(v.implementation()))->data;
  }
  void setoffsetX(const Php::Value &v) { data.offsetX = (int)v; }
  void setoffsetY(const Php::Value &v) { data.offsetY = (int)v; }
  void setadvanceX(const Php::Value &v) { data.advanceX = (int)v; }
};

class Font : public Php::Base {
public:
  ::Font data;
  Font(::Font x) { data = x; }
  Php::Value gettexture() {
    Php::Value result =
        Php::Object("RayLib\\Texture2D", new Texture2D(data.texture));
    return result;
  }
  Php::Value getbaseSize() {
    int result = data.baseSize;
    return result;
  }
  Php::Value getcharsCount() {
    int result = data.charsCount;
    return result;
  }
  void settexture(const Php::Value &v) {
    data.texture = ((Texture2D *)(v.implementation()))->data;
  }
  void setbaseSize(const Php::Value &v) { data.baseSize = (int)v; }
  void setcharsCount(const Php::Value &v) { data.charsCount = (int)v; }
};

class Camera3D : public Php::Base {
public:
  ::Camera3D data;
  Camera3D(::Camera3D x) { data = x; }
  Php::Value getposition() {
    Php::Value result =
        Php::Object("RayLib\\Vector3", new Vector3(data.position));
    return result;
  }
  Php::Value gettarget() {
    Php::Value result =
        Php::Object("RayLib\\Vector3", new Vector3(data.target));
    return result;
  }
  Php::Value getup() {
    Php::Value result = Php::Object("RayLib\\Vector3", new Vector3(data.up));
    return result;
  }
  Php::Value getfovy() {
    double result = data.fovy;
    return result;
  }
  Php::Value gettype() {
    int result = data.type;
    return result;
  }
  void setposition(const Php::Value &v) {
    data.position = ((Vector3 *)(v.implementation()))->data;
  }
  void settarget(const Php::Value &v) {
    data.target = ((Vector3 *)(v.implementation()))->data;
  }
  void setup(const Php::Value &v) {
    data.up = ((Vector3 *)(v.implementation()))->data;
  }
  void setfovy(const Php::Value &v) { data.fovy = (double)v; }
  void settype(const Php::Value &v) { data.type = (int)v; }
};

class Camera2D : public Php::Base {
public:
  ::Camera2D data;
  Camera2D(::Camera2D x) { data = x; }
  Php::Value getoffset() {
    Php::Value result =
        Php::Object("RayLib\\Vector2", new Vector2(data.offset));
    return result;
  }
  Php::Value gettarget() {
    Php::Value result =
        Php::Object("RayLib\\Vector2", new Vector2(data.target));
    return result;
  }
  Php::Value getrotation() {
    double result = data.rotation;
    return result;
  }
  Php::Value getzoom() {
    double result = data.zoom;
    return result;
  }
  void setoffset(const Php::Value &v) {
    data.offset = ((Vector2 *)(v.implementation()))->data;
  }
  void settarget(const Php::Value &v) {
    data.target = ((Vector2 *)(v.implementation()))->data;
  }
  void setrotation(const Php::Value &v) { data.rotation = (double)v; }
  void setzoom(const Php::Value &v) { data.zoom = (double)v; }
};

class BoundingBox : public Php::Base {
public:
  ::BoundingBox data;
  BoundingBox(::BoundingBox x) { data = x; }
  Php::Value getmin() {
    Php::Value result = Php::Object("RayLib\\Vector3", new Vector3(data.min));
    return result;
  }
  Php::Value getmax() {
    Php::Value result = Php::Object("RayLib\\Vector3", new Vector3(data.max));
    return result;
  }
  void setmin(const Php::Value &v) {
    data.min = ((Vector3 *)(v.implementation()))->data;
  }
  void setmax(const Php::Value &v) {
    data.max = ((Vector3 *)(v.implementation()))->data;
  }
};

class Mesh : public Php::Base {
public:
  ::Mesh data;
  Mesh(::Mesh x) { data = x; }
  Php::Value getvertexCount() {
    int result = data.vertexCount;
    return result;
  }
  Php::Value gettriangleCount() {
    int result = data.triangleCount;
    return result;
  }
  Php::Value getvaoId() {
    long result = data.vaoId;
    return result;
  }
  Php::Value getvboId() {
    Php::Value result;
    for (int i = 0; i < 7; i++) {
      result[i] = (long)data.vboId[i];
    }
    return result;
  }
  void setvertexCount(const Php::Value &v) { data.vertexCount = (int)v; }
  void settriangleCount(const Php::Value &v) { data.triangleCount = (int)v; }
  void setvaoId(const Php::Value &v) { data.vaoId = (long)v; }
  void setvboId(const Php::Value &v) {
    for (int i = 0; i < 7; i++) {
      data.vboId[i] = v[i].numericValue();
    }
  }
};

class Shader : public Php::Base {
public:
  ::Shader data;
  Shader(::Shader x) { data = x; }
  Php::Value getid() {
    long result = data.id;
    return result;
  }
  Php::Value getlocs() {
    Php::Value result;
    for (int i = 0; i < 32; i++) {
      result[i] = (long)data.locs[i];
    }
    return result;
  }
  void setid(const Php::Value &v) { data.id = (long)v; }
  void setlocs(const Php::Value &v) {
    for (int i = 0; i < 32; i++) {
      data.locs[i] = v[i].numericValue();
    }
  }
};

class MaterialMap : public Php::Base {
public:
  ::MaterialMap data;
  MaterialMap(::MaterialMap x) { data = x; }
  Php::Value gettexture() {
    Php::Value result =
        Php::Object("RayLib\\Texture2D", new Texture2D(data.texture));
    return result;
  }
  Php::Value getcolor() {
    Php::Value result = Php::Object("RayLib\\Color", new Color(data.color));
    return result;
  }
  Php::Value getvalue() {
    double result = data.value;
    return result;
  }
  void settexture(const Php::Value &v) {
    data.texture = ((Texture2D *)(v.implementation()))->data;
  }
  void setcolor(const Php::Value &v) {
    data.color = ((Color *)(v.implementation()))->data;
  }
  void setvalue(const Php::Value &v) { data.value = (double)v; }
};

class Material : public Php::Base {
public:
  ::Material data;
  Material(::Material x) { data = x; }
  Php::Value getshader() {
    Php::Value result = Php::Object("RayLib\\Shader", new Shader(data.shader));
    return result;
  }
  Php::Value getmaps() {
    Php::Value result;
    for (int i = 0; i < 12; i++) {
      result[i] =
          Php::Object("RayLib\\MaterialMap", new MaterialMap(data.maps[i]));
    }
    return result;
  }
  void setshader(const Php::Value &v) {
    data.shader = ((Shader *)(v.implementation()))->data;
  }
  void setmaps(const Php::Value &v) {
    for (int i = 0; i < 12; i++) {
      data.maps[i] = ((MaterialMap *)(v[i].implementation()))->data;
    }
  }
};

class Model : public Php::Base {
public:
  ::Model data;
  Model(::Model x) { data = x; }
  Php::Value getmesh() {
    Php::Value result = Php::Object("RayLib\\Mesh", new Mesh(data.mesh));
    return result;
  }
  Php::Value gettransform() {
    Php::Value result =
        Php::Object("RayLib\\Matrix", new Matrix(data.transform));
    return result;
  }
  Php::Value getmaterial() {
    Php::Value result =
        Php::Object("RayLib\\Material", new Material(data.material));
    return result;
  }
  void setmesh(const Php::Value &v) {
    data.mesh = ((Mesh *)(v.implementation()))->data;
  }
  void settransform(const Php::Value &v) {
    data.transform = ((Matrix *)(v.implementation()))->data;
  }
  void setmaterial(const Php::Value &v) {
    data.material = ((Material *)(v.implementation()))->data;
  }
};

class Ray : public Php::Base {
public:
  ::Ray data;
  Ray(::Ray x) { data = x; }
  Php::Value getposition() {
    Php::Value result =
        Php::Object("RayLib\\Vector3", new Vector3(data.position));
    return result;
  }
  Php::Value getdirection() {
    Php::Value result =
        Php::Object("RayLib\\Vector3", new Vector3(data.direction));
    return result;
  }
  void setposition(const Php::Value &v) {
    data.position = ((Vector3 *)(v.implementation()))->data;
  }
  void setdirection(const Php::Value &v) {
    data.direction = ((Vector3 *)(v.implementation()))->data;
  }
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
  Php::Value getsampleCount() {
    long result = data.sampleCount;
    return result;
  }
  Php::Value getsampleRate() {
    long result = data.sampleRate;
    return result;
  }
  Php::Value getsampleSize() {
    long result = data.sampleSize;
    return result;
  }
  Php::Value getchannels() {
    long result = data.channels;
    return result;
  }
  void setsampleCount(const Php::Value &v) { data.sampleCount = (long)v; }
  void setsampleRate(const Php::Value &v) { data.sampleRate = (long)v; }
  void setsampleSize(const Php::Value &v) { data.sampleSize = (long)v; }
  void setchannels(const Php::Value &v) { data.channels = (long)v; }
};

class Sound : public Php::Base {
public:
  ::Sound data;
  Sound(::Sound x) { data = x; }
  Php::Value getsource() {
    long result = data.source;
    return result;
  }
  Php::Value getbuffer() {
    long result = data.buffer;
    return result;
  }
  Php::Value getformat() {
    int result = data.format;
    return result;
  }
  void setsource(const Php::Value &v) { data.source = (long)v; }
  void setbuffer(const Php::Value &v) { data.buffer = (long)v; }
  void setformat(const Php::Value &v) { data.format = (int)v; }
};

class AudioStream : public Php::Base {
public:
  ::AudioStream data;
  AudioStream(::AudioStream x) { data = x; }
  Php::Value getsampleRate() {
    long result = data.sampleRate;
    return result;
  }
  Php::Value getsampleSize() {
    long result = data.sampleSize;
    return result;
  }
  Php::Value getchannels() {
    long result = data.channels;
    return result;
  }
  Php::Value getformat() {
    int result = data.format;
    return result;
  }
  Php::Value getsource() {
    long result = data.source;
    return result;
  }
  Php::Value getbuffers() {
    Php::Value result;
    for (int i = 0; i < 2; i++) {
      result[i] = (long)data.buffers[i];
    }
    return result;
  }
  void setsampleRate(const Php::Value &v) { data.sampleRate = (long)v; }
  void setsampleSize(const Php::Value &v) { data.sampleSize = (long)v; }
  void setchannels(const Php::Value &v) { data.channels = (long)v; }
  void setformat(const Php::Value &v) { data.format = (int)v; }
  void setsource(const Php::Value &v) { data.source = (long)v; }
  void setbuffers(const Php::Value &v) {
    for (int i = 0; i < 2; i++) {
      data.buffers[i] = v[i].numericValue();
    }
  }
};

class VrDeviceInfo : public Php::Base {
public:
  ::VrDeviceInfo data;
  VrDeviceInfo(::VrDeviceInfo x) { data = x; }
  Php::Value gethResolution() {
    int result = data.hResolution;
    return result;
  }
  Php::Value getvResolution() {
    int result = data.vResolution;
    return result;
  }
  Php::Value gethScreenSize() {
    double result = data.hScreenSize;
    return result;
  }
  Php::Value getvScreenSize() {
    double result = data.vScreenSize;
    return result;
  }
  Php::Value getvScreenCenter() {
    double result = data.vScreenCenter;
    return result;
  }
  Php::Value geteyeToScreenDistance() {
    double result = data.eyeToScreenDistance;
    return result;
  }
  Php::Value getlensSeparationDistance() {
    double result = data.lensSeparationDistance;
    return result;
  }
  Php::Value getinterpupillaryDistance() {
    double result = data.interpupillaryDistance;
    return result;
  }
  Php::Value getlensDistortionValues() {
    Php::Value result;
    for (int i = 0; i < 4; i++) {
      result[i] = data.lensDistortionValues[i];
    }
    return result;
  }
  Php::Value getchromaAbCorrection() {
    Php::Value result;
    for (int i = 0; i < 4; i++) {
      result[i] = data.chromaAbCorrection[i];
    }
    return result;
  }
  void sethResolution(const Php::Value &v) { data.hResolution = (int)v; }
  void setvResolution(const Php::Value &v) { data.vResolution = (int)v; }
  void sethScreenSize(const Php::Value &v) { data.hScreenSize = (double)v; }
  void setvScreenSize(const Php::Value &v) { data.vScreenSize = (double)v; }
  void setvScreenCenter(const Php::Value &v) { data.vScreenCenter = (double)v; }
  void seteyeToScreenDistance(const Php::Value &v) {
    data.eyeToScreenDistance = (double)v;
  }
  void setlensSeparationDistance(const Php::Value &v) {
    data.lensSeparationDistance = (double)v;
  }
  void setinterpupillaryDistance(const Php::Value &v) {
    data.interpupillaryDistance = (double)v;
  }
  void setlensDistortionValues(const Php::Value &v) {
    for (int i = 0; i < 4; i++) {
      data.lensDistortionValues[i] = v[i].floatValue();
    }
  }
  void setchromaAbCorrection(const Php::Value &v) {
    for (int i = 0; i < 4; i++) {
      data.chromaAbCorrection[i] = v[i].floatValue();
    }
  }
};

class VrStereoConfig : public Php::Base {
public:
  ::VrStereoConfig data;
  VrStereoConfig(::VrStereoConfig x) { data = x; }
};

class Music : public Php::Base {
public:
  ::Music data;
  Music(::Music x) { data = x; }
};

class TraceLogCallback : public Php::Base {
public:
  ::TraceLogCallback data;
  TraceLogCallback(::TraceLogCallback x) { data = x; }
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
    Ray result = ::GetMouseRay(p0, p1);
    return Php::Object("RayLib\\Ray", new Ray(result));
  }

  static Php::Value GetWorldToScreen(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    ::Camera3D p1 = ((Camera3D *)(params[1].implementation()))->data;
    Vector2 result = ::GetWorldToScreen(p0, p1);
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static Php::Value GetCameraMatrix(Php::Parameters &params) {
    ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
    Matrix result = ::GetCameraMatrix(p0);
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
    Vector4 result = ::ColorNormalize(p0);
    return Php::Object("RayLib\\Vector4", new Vector4(result));
  }

  static Php::Value ColorToHSV(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    Vector3 result = ::ColorToHSV(p0);
    return Php::Object("RayLib\\Vector3", new Vector3(result));
  }

  static Php::Value ColorFromHSV(Php::Parameters &params) {
    ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
    Color result = ::ColorFromHSV(p0);
    return Php::Object("RayLib\\Color", new Color(result));
  }

  static Php::Value GetColor(Php::Parameters &params) {
    int p0 = params[0];
    Color result = ::GetColor(p0);
    return Php::Object("RayLib\\Color", new Color(result));
  }

  static Php::Value Fade(Php::Parameters &params) {
    ::Color p0 = ((Color *)(params[0].implementation()))->data;
    double p1 = params[1];
    Color result = ::Fade(p0, p1);
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
    Vector2 result = ::GetMousePosition();
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
    Vector2 result = ::GetTouchPosition(p0);
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
    Vector2 result = ::GetGestureDragVector();
    return Php::Object("RayLib\\Vector2", new Vector2(result));
  }

  static Php::Value GetGestureDragAngle(Php::Parameters &params) {
    double result = ::GetGestureDragAngle();
    return result;
  }

  static Php::Value GetGesturePinchVector(Php::Parameters &params) {
    Vector2 result = ::GetGesturePinchVector();
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
    Rectangle result = ::GetCollisionRec(p0, p1);
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
    Image result = ::LoadImage(p0.c_str());
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value LoadImageEx(Php::Parameters &params) {
    ::Color *p0 = &((Color *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    Image result = ::LoadImageEx(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value LoadImageRaw(Php::Parameters &params) {
    string p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    Image result = ::LoadImageRaw(p0.c_str(), p1, p2, p3, p4);
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
    Texture2D result = ::LoadTexture(p0.c_str());
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value LoadTextureFromImage(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    Texture2D result = ::LoadTextureFromImage(p0);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value LoadTextureCubemap(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    int p1 = params[1];
    TextureCubemap result = ::LoadTextureCubemap(p0, p1);
    return Php::Object("RayLib\\TextureCubemap", new TextureCubemap(result));
  }

  static Php::Value LoadRenderTexture(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    RenderTexture2D result = ::LoadRenderTexture(p0, p1);
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
    Image result = ::GetTextureData(p0);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value ImageCopy(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    Image result = ::ImageCopy(p0);
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
    Image result = ::ImageText(p0.c_str(), p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value ImageTextEx(Php::Parameters &params) {
    ::Font p0 = ((Font *)(params[0].implementation()))->data;
    string p1 = params[1];
    double p2 = params[2];
    double p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    Image result = ::ImageTextEx(p0, p1.c_str(), p2, p3, p4);
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
    Image result = ::GenImageColor(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageGradientV(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    Image result = ::GenImageGradientV(p0, p1, p2, p3);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageGradientH(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    ::Color p2 = ((Color *)(params[2].implementation()))->data;
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    Image result = ::GenImageGradientH(p0, p1, p2, p3);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageGradientRadial(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    ::Color p3 = ((Color *)(params[3].implementation()))->data;
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    Image result = ::GenImageGradientRadial(p0, p1, p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageChecked(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    ::Color p4 = ((Color *)(params[4].implementation()))->data;
    ::Color p5 = ((Color *)(params[5].implementation()))->data;
    Image result = ::GenImageChecked(p0, p1, p2, p3, p4, p5);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageWhiteNoise(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    double p2 = params[2];
    Image result = ::GenImageWhiteNoise(p0, p1, p2);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImagePerlinNoise(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    double p4 = params[4];
    Image result = ::GenImagePerlinNoise(p0, p1, p2, p3, p4);
    return Php::Object("RayLib\\Image", new Image(result));
  }

  static Php::Value GenImageCellular(Php::Parameters &params) {
    int p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    Image result = ::GenImageCellular(p0, p1, p2);
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
    Font result = ::GetFontDefault();
    return Php::Object("RayLib\\Font", new Font(result));
  }

  static Php::Value LoadFont(Php::Parameters &params) {
    string p0 = params[0];
    Font result = ::LoadFont(p0.c_str());
    return Php::Object("RayLib\\Font", new Font(result));
  }

  static Php::Value LoadFontFromImage(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::Color p1 = ((Color *)(params[1].implementation()))->data;
    int p2 = params[2];
    Font result = ::LoadFontFromImage(p0, p1, p2);
    return Php::Object("RayLib\\Font", new Font(result));
  }

  static Php::Value GenImageFontAtlas(Php::Parameters &params) {
    ::CharInfo *p0 = &((CharInfo *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    int p4 = params[4];
    Image result = ::GenImageFontAtlas(p0, p1, p2, p3, p4);
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
    Vector2 result = ::MeasureTextEx(p0, p1.c_str(), p2, p3);
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
    Model result = ::LoadModel(p0.c_str());
    return Php::Object("RayLib\\Model", new Model(result));
  }

  static Php::Value LoadModelFromMesh(Php::Parameters &params) {
    ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
    Model result = ::LoadModelFromMesh(p0);
    return Php::Object("RayLib\\Model", new Model(result));
  }

  static void UnloadModel(Php::Parameters &params) {
    ::Model p0 = ((Model *)(params[0].implementation()))->data;
    ::UnloadModel(p0);
  }

  static Php::Value LoadMesh(Php::Parameters &params) {
    string p0 = params[0];
    Mesh result = ::LoadMesh(p0.c_str());
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
    BoundingBox result = ::MeshBoundingBox(p0);
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
    Mesh result = ::GenMeshPoly(p0, p1);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshPlane(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    Mesh result = ::GenMeshPlane(p0, p1, p2, p3);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshCube(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    double p2 = params[2];
    Mesh result = ::GenMeshCube(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshSphere(Php::Parameters &params) {
    double p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    Mesh result = ::GenMeshSphere(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshHemiSphere(Php::Parameters &params) {
    double p0 = params[0];
    int p1 = params[1];
    int p2 = params[2];
    Mesh result = ::GenMeshHemiSphere(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshCylinder(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    Mesh result = ::GenMeshCylinder(p0, p1, p2);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshTorus(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    Mesh result = ::GenMeshTorus(p0, p1, p2, p3);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshKnot(Php::Parameters &params) {
    double p0 = params[0];
    double p1 = params[1];
    int p2 = params[2];
    int p3 = params[3];
    Mesh result = ::GenMeshKnot(p0, p1, p2, p3);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshHeightmap(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    Mesh result = ::GenMeshHeightmap(p0, p1);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value GenMeshCubicmap(Php::Parameters &params) {
    ::Image p0 = ((Image *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    Mesh result = ::GenMeshCubicmap(p0, p1);
    return Php::Object("RayLib\\Mesh", new Mesh(result));
  }

  static Php::Value LoadMaterial(Php::Parameters &params) {
    string p0 = params[0];
    Material result = ::LoadMaterial(p0.c_str());
    return Php::Object("RayLib\\Material", new Material(result));
  }

  static Php::Value LoadMaterialDefault(Php::Parameters &params) {
    Material result = ::LoadMaterialDefault();
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
    RayHitInfo result = ::GetCollisionRayModel(p0, p1);
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(result));
  }

  static Php::Value GetCollisionRayTriangle(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
    ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
    ::Vector3 p3 = ((Vector3 *)(params[3].implementation()))->data;
    RayHitInfo result = ::GetCollisionRayTriangle(p0, p1, p2, p3);
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(result));
  }

  static Php::Value GetCollisionRayGround(Php::Parameters &params) {
    ::Ray p0 = ((Ray *)(params[0].implementation()))->data;
    double p1 = params[1];
    RayHitInfo result = ::GetCollisionRayGround(p0, p1);
    return Php::Object("RayLib\\RayHitInfo", new RayHitInfo(result));
  }

  static Php::Value LoadShader(Php::Parameters &params) {
    string p0 = params[0];
    string p1 = params[1];
    Shader result = ::LoadShader(p0.c_str(), p1.c_str());
    return Php::Object("RayLib\\Shader", new Shader(result));
  }

  static void UnloadShader(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::UnloadShader(p0);
  }

  static Php::Value GetShaderDefault(Php::Parameters &params) {
    Shader result = ::GetShaderDefault();
    return Php::Object("RayLib\\Shader", new Shader(result));
  }

  static Php::Value GetTextureDefault(Php::Parameters &params) {
    Texture2D result = ::GetTextureDefault();
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
    Matrix result = ::GetMatrixModelview();
    return Php::Object("RayLib\\Matrix", new Matrix(result));
  }

  static Php::Value GenTextureCubemap(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    int p2 = params[2];
    Texture2D result = ::GenTextureCubemap(p0, p1, p2);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GenTextureIrradiance(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    int p2 = params[2];
    Texture2D result = ::GenTextureIrradiance(p0, p1, p2);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GenTexturePrefilter(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    ::Texture2D p1 = ((Texture2D *)(params[1].implementation()))->data;
    int p2 = params[2];
    Texture2D result = ::GenTexturePrefilter(p0, p1, p2);
    return Php::Object("RayLib\\Texture2D", new Texture2D(result));
  }

  static Php::Value GenTextureBRDF(Php::Parameters &params) {
    ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
    int p1 = params[1];
    Texture2D result = ::GenTextureBRDF(p0, p1);
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
    VrDeviceInfo result = ::GetVrDeviceInfo(p0);
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
    Wave result = ::LoadWave(p0.c_str());
    return Php::Object("RayLib\\Wave", new Wave(result));
  }

  static Php::Value LoadSound(Php::Parameters &params) {
    string p0 = params[0];
    Sound result = ::LoadSound(p0.c_str());
    return Php::Object("RayLib\\Sound", new Sound(result));
  }

  static Php::Value LoadSoundFromWave(Php::Parameters &params) {
    ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
    Sound result = ::LoadSoundFromWave(p0);
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
    Wave result = ::WaveCopy(p0);
    return Php::Object("RayLib\\Wave", new Wave(result));
  }

  static void WaveCrop(Php::Parameters &params) {
    ::Wave *p0 = &((Wave *)(params[0].implementation()))->data;
    int p1 = params[1];
    int p2 = params[2];
    ::WaveCrop(p0, p1, p2);
  }

  static Php::Value LoadMusicStream(Php::Parameters &params) {
    string p0 = params[0];
    Music result = ::LoadMusicStream(p0.c_str());
    return Php::Object("RayLib\\Music", new Music(result));
  }

  static void UnloadMusicStream(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    ::UnloadMusicStream(p0);
  }

  static void PlayMusicStream(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    ::PlayMusicStream(p0);
  }

  static void UpdateMusicStream(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    ::UpdateMusicStream(p0);
  }

  static void StopMusicStream(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    ::StopMusicStream(p0);
  }

  static void PauseMusicStream(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    ::PauseMusicStream(p0);
  }

  static void ResumeMusicStream(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    ::ResumeMusicStream(p0);
  }

  static Php::Value IsMusicPlaying(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    int result = ::IsMusicPlaying(p0);
    return result;
  }

  static void SetMusicVolume(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::SetMusicVolume(p0, p1);
  }

  static void SetMusicPitch(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    double p1 = params[1];
    ::SetMusicPitch(p0, p1);
  }

  static void SetMusicLoopCount(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    int p1 = params[1];
    ::SetMusicLoopCount(p0, p1);
  }

  static Php::Value GetMusicTimeLength(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    double result = ::GetMusicTimeLength(p0);
    return result;
  }

  static Php::Value GetMusicTimePlayed(Php::Parameters &params) {
    ::Music p0 = ((Music *)(params[0].implementation()))->data;
    double result = ::GetMusicTimePlayed(p0);
    return result;
  }

  static Php::Value InitAudioStream(Php::Parameters &params) {
    long p0 = params[0];
    long p1 = params[1];
    long p2 = params[2];
    AudioStream result = ::InitAudioStream(p0, p1, p2);
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
  rlVector2.property("x", &Vector2::getx, &Vector2::setx);
  rlVector2.property("y", &Vector2::gety, &Vector2::sety);

  Php::Class<Vector3> rlVector3("Vector3");
  rlNamespace.add(rlVector3);
  rlVector3.property("x", &Vector3::getx, &Vector3::setx);
  rlVector3.property("y", &Vector3::gety, &Vector3::sety);
  rlVector3.property("z", &Vector3::getz, &Vector3::setz);

  Php::Class<Vector4> rlVector4("Vector4");
  rlNamespace.add(rlVector4);
  rlVector4.property("x", &Vector4::getx, &Vector4::setx);
  rlVector4.property("y", &Vector4::gety, &Vector4::sety);
  rlVector4.property("z", &Vector4::getz, &Vector4::setz);
  rlVector4.property("w", &Vector4::getw, &Vector4::setw);

  Php::Class<Matrix> rlMatrix("Matrix");
  rlNamespace.add(rlMatrix);
  rlMatrix.property("m0", &Matrix::getm0, &Matrix::setm0);
  rlMatrix.property("m4", &Matrix::getm4, &Matrix::setm4);
  rlMatrix.property("m8", &Matrix::getm8, &Matrix::setm8);
  rlMatrix.property("m12", &Matrix::getm12, &Matrix::setm12);
  rlMatrix.property("m1", &Matrix::getm1, &Matrix::setm1);
  rlMatrix.property("m5", &Matrix::getm5, &Matrix::setm5);
  rlMatrix.property("m9", &Matrix::getm9, &Matrix::setm9);
  rlMatrix.property("m13", &Matrix::getm13, &Matrix::setm13);
  rlMatrix.property("m2", &Matrix::getm2, &Matrix::setm2);
  rlMatrix.property("m6", &Matrix::getm6, &Matrix::setm6);
  rlMatrix.property("m10", &Matrix::getm10, &Matrix::setm10);
  rlMatrix.property("m14", &Matrix::getm14, &Matrix::setm14);
  rlMatrix.property("m3", &Matrix::getm3, &Matrix::setm3);
  rlMatrix.property("m7", &Matrix::getm7, &Matrix::setm7);
  rlMatrix.property("m11", &Matrix::getm11, &Matrix::setm11);
  rlMatrix.property("m15", &Matrix::getm15, &Matrix::setm15);

  Php::Class<Color> rlColor("Color");
  rlNamespace.add(rlColor);
  rlColor.property("r", &Color::getr, &Color::setr);
  rlColor.property("g", &Color::getg, &Color::setg);
  rlColor.property("b", &Color::getb, &Color::setb);
  rlColor.property("a", &Color::geta, &Color::seta);

  Php::Class<Rectangle> rlRectangle("Rectangle");
  rlNamespace.add(rlRectangle);
  rlRectangle.property("x", &Rectangle::getx, &Rectangle::setx);
  rlRectangle.property("y", &Rectangle::gety, &Rectangle::sety);
  rlRectangle.property("width", &Rectangle::getwidth, &Rectangle::setwidth);
  rlRectangle.property("height", &Rectangle::getheight, &Rectangle::setheight);

  Php::Class<Image> rlImage("Image");
  rlNamespace.add(rlImage);
  rlImage.property("width", &Image::getwidth, &Image::setwidth);
  rlImage.property("height", &Image::getheight, &Image::setheight);
  rlImage.property("mipmaps", &Image::getmipmaps, &Image::setmipmaps);
  rlImage.property("format", &Image::getformat, &Image::setformat);

  Php::Class<Texture2D> rlTexture2D("Texture2D");
  rlNamespace.add(rlTexture2D);
  rlTexture2D.property("id", &Texture2D::getid, &Texture2D::setid);
  rlTexture2D.property("width", &Texture2D::getwidth, &Texture2D::setwidth);
  rlTexture2D.property("height", &Texture2D::getheight, &Texture2D::setheight);
  rlTexture2D.property("mipmaps", &Texture2D::getmipmaps,
                       &Texture2D::setmipmaps);
  rlTexture2D.property("format", &Texture2D::getformat, &Texture2D::setformat);

  Php::Class<RenderTexture2D> rlRenderTexture2D("RenderTexture2D");
  rlNamespace.add(rlRenderTexture2D);

  Php::Class<NPatchInfo> rlNPatchInfo("NPatchInfo");
  rlNamespace.add(rlNPatchInfo);
  rlNPatchInfo.property("sourceRec", &NPatchInfo::getsourceRec,
                        &NPatchInfo::setsourceRec);
  rlNPatchInfo.property("left", &NPatchInfo::getleft, &NPatchInfo::setleft);
  rlNPatchInfo.property("top", &NPatchInfo::gettop, &NPatchInfo::settop);
  rlNPatchInfo.property("right", &NPatchInfo::getright, &NPatchInfo::setright);
  rlNPatchInfo.property("bottom", &NPatchInfo::getbottom,
                        &NPatchInfo::setbottom);
  rlNPatchInfo.property("type", &NPatchInfo::gettype, &NPatchInfo::settype);

  Php::Class<CharInfo> rlCharInfo("CharInfo");
  rlNamespace.add(rlCharInfo);
  rlCharInfo.property("value", &CharInfo::getvalue, &CharInfo::setvalue);
  rlCharInfo.property("rec", &CharInfo::getrec, &CharInfo::setrec);
  rlCharInfo.property("offsetX", &CharInfo::getoffsetX, &CharInfo::setoffsetX);
  rlCharInfo.property("offsetY", &CharInfo::getoffsetY, &CharInfo::setoffsetY);
  rlCharInfo.property("advanceX", &CharInfo::getadvanceX,
                      &CharInfo::setadvanceX);

  Php::Class<Font> rlFont("Font");
  rlNamespace.add(rlFont);
  rlFont.property("texture", &Font::gettexture, &Font::settexture);
  rlFont.property("baseSize", &Font::getbaseSize, &Font::setbaseSize);
  rlFont.property("charsCount", &Font::getcharsCount, &Font::setcharsCount);

  Php::Class<Camera3D> rlCamera3D("Camera3D");
  rlNamespace.add(rlCamera3D);
  rlCamera3D.property("position", &Camera3D::getposition,
                      &Camera3D::setposition);
  rlCamera3D.property("target", &Camera3D::gettarget, &Camera3D::settarget);
  rlCamera3D.property("up", &Camera3D::getup, &Camera3D::setup);
  rlCamera3D.property("fovy", &Camera3D::getfovy, &Camera3D::setfovy);
  rlCamera3D.property("type", &Camera3D::gettype, &Camera3D::settype);

  Php::Class<Camera2D> rlCamera2D("Camera2D");
  rlNamespace.add(rlCamera2D);
  rlCamera2D.property("offset", &Camera2D::getoffset, &Camera2D::setoffset);
  rlCamera2D.property("target", &Camera2D::gettarget, &Camera2D::settarget);
  rlCamera2D.property("rotation", &Camera2D::getrotation,
                      &Camera2D::setrotation);
  rlCamera2D.property("zoom", &Camera2D::getzoom, &Camera2D::setzoom);

  Php::Class<BoundingBox> rlBoundingBox("BoundingBox");
  rlNamespace.add(rlBoundingBox);
  rlBoundingBox.property("min", &BoundingBox::getmin, &BoundingBox::setmin);
  rlBoundingBox.property("max", &BoundingBox::getmax, &BoundingBox::setmax);

  Php::Class<Mesh> rlMesh("Mesh");
  rlNamespace.add(rlMesh);
  rlMesh.property("vertexCount", &Mesh::getvertexCount, &Mesh::setvertexCount);
  rlMesh.property("triangleCount", &Mesh::gettriangleCount,
                  &Mesh::settriangleCount);
  rlMesh.property("vaoId", &Mesh::getvaoId, &Mesh::setvaoId);
  rlMesh.property("vboId", &Mesh::getvboId, &Mesh::setvboId);

  Php::Class<Shader> rlShader("Shader");
  rlNamespace.add(rlShader);
  rlShader.property("id", &Shader::getid, &Shader::setid);
  rlShader.property("locs", &Shader::getlocs, &Shader::setlocs);

  Php::Class<MaterialMap> rlMaterialMap("MaterialMap");
  rlNamespace.add(rlMaterialMap);
  rlMaterialMap.property("texture", &MaterialMap::gettexture,
                         &MaterialMap::settexture);
  rlMaterialMap.property("color", &MaterialMap::getcolor,
                         &MaterialMap::setcolor);
  rlMaterialMap.property("value", &MaterialMap::getvalue,
                         &MaterialMap::setvalue);

  Php::Class<Material> rlMaterial("Material");
  rlNamespace.add(rlMaterial);
  rlMaterial.property("shader", &Material::getshader, &Material::setshader);
  rlMaterial.property("maps", &Material::getmaps, &Material::setmaps);

  Php::Class<Model> rlModel("Model");
  rlNamespace.add(rlModel);
  rlModel.property("mesh", &Model::getmesh, &Model::setmesh);
  rlModel.property("transform", &Model::gettransform, &Model::settransform);
  rlModel.property("material", &Model::getmaterial, &Model::setmaterial);

  Php::Class<Ray> rlRay("Ray");
  rlNamespace.add(rlRay);
  rlRay.property("position", &Ray::getposition, &Ray::setposition);
  rlRay.property("direction", &Ray::getdirection, &Ray::setdirection);

  Php::Class<RayHitInfo> rlRayHitInfo("RayHitInfo");
  rlNamespace.add(rlRayHitInfo);

  Php::Class<Wave> rlWave("Wave");
  rlNamespace.add(rlWave);
  rlWave.property("sampleCount", &Wave::getsampleCount, &Wave::setsampleCount);
  rlWave.property("sampleRate", &Wave::getsampleRate, &Wave::setsampleRate);
  rlWave.property("sampleSize", &Wave::getsampleSize, &Wave::setsampleSize);
  rlWave.property("channels", &Wave::getchannels, &Wave::setchannels);

  Php::Class<Sound> rlSound("Sound");
  rlNamespace.add(rlSound);
  rlSound.property("source", &Sound::getsource, &Sound::setsource);
  rlSound.property("buffer", &Sound::getbuffer, &Sound::setbuffer);
  rlSound.property("format", &Sound::getformat, &Sound::setformat);

  Php::Class<AudioStream> rlAudioStream("AudioStream");
  rlNamespace.add(rlAudioStream);
  rlAudioStream.property("sampleRate", &AudioStream::getsampleRate,
                         &AudioStream::setsampleRate);
  rlAudioStream.property("sampleSize", &AudioStream::getsampleSize,
                         &AudioStream::setsampleSize);
  rlAudioStream.property("channels", &AudioStream::getchannels,
                         &AudioStream::setchannels);
  rlAudioStream.property("format", &AudioStream::getformat,
                         &AudioStream::setformat);
  rlAudioStream.property("source", &AudioStream::getsource,
                         &AudioStream::setsource);
  rlAudioStream.property("buffers", &AudioStream::getbuffers,
                         &AudioStream::setbuffers);

  Php::Class<VrDeviceInfo> rlVrDeviceInfo("VrDeviceInfo");
  rlNamespace.add(rlVrDeviceInfo);
  rlVrDeviceInfo.property("hResolution", &VrDeviceInfo::gethResolution,
                          &VrDeviceInfo::sethResolution);
  rlVrDeviceInfo.property("vResolution", &VrDeviceInfo::getvResolution,
                          &VrDeviceInfo::setvResolution);
  rlVrDeviceInfo.property("hScreenSize", &VrDeviceInfo::gethScreenSize,
                          &VrDeviceInfo::sethScreenSize);
  rlVrDeviceInfo.property("vScreenSize", &VrDeviceInfo::getvScreenSize,
                          &VrDeviceInfo::setvScreenSize);
  rlVrDeviceInfo.property("vScreenCenter", &VrDeviceInfo::getvScreenCenter,
                          &VrDeviceInfo::setvScreenCenter);
  rlVrDeviceInfo.property("eyeToScreenDistance",
                          &VrDeviceInfo::geteyeToScreenDistance,
                          &VrDeviceInfo::seteyeToScreenDistance);
  rlVrDeviceInfo.property("lensSeparationDistance",
                          &VrDeviceInfo::getlensSeparationDistance,
                          &VrDeviceInfo::setlensSeparationDistance);
  rlVrDeviceInfo.property("interpupillaryDistance",
                          &VrDeviceInfo::getinterpupillaryDistance,
                          &VrDeviceInfo::setinterpupillaryDistance);
  rlVrDeviceInfo.property("lensDistortionValues",
                          &VrDeviceInfo::getlensDistortionValues,
                          &VrDeviceInfo::setlensDistortionValues);
  rlVrDeviceInfo.property("chromaAbCorrection",
                          &VrDeviceInfo::getchromaAbCorrection,
                          &VrDeviceInfo::setchromaAbCorrection);

  Php::Class<VrStereoConfig> rlVrStereoConfig("VrStereoConfig");
  rlNamespace.add(rlVrStereoConfig);

  Php::Class<Music> rlMusic("Music");
  rlNamespace.add(rlMusic);

  Php::Class<TraceLogCallback> rlTraceLogCallback("TraceLogCallback");
  rlNamespace.add(rlTraceLogCallback);

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
  rlClass.method<&RL::LoadMusicStream>("LoadMusicStream");
  rlClass.method<&RL::UnloadMusicStream>("UnloadMusicStream");
  rlClass.method<&RL::PlayMusicStream>("PlayMusicStream");
  rlClass.method<&RL::UpdateMusicStream>("UpdateMusicStream");
  rlClass.method<&RL::StopMusicStream>("StopMusicStream");
  rlClass.method<&RL::PauseMusicStream>("PauseMusicStream");
  rlClass.method<&RL::ResumeMusicStream>("ResumeMusicStream");
  rlClass.method<&RL::IsMusicPlaying>("IsMusicPlaying");
  rlClass.method<&RL::SetMusicVolume>("SetMusicVolume");
  rlClass.method<&RL::SetMusicPitch>("SetMusicPitch");
  rlClass.method<&RL::SetMusicLoopCount>("SetMusicLoopCount");
  rlClass.method<&RL::GetMusicTimeLength>("GetMusicTimeLength");
  rlClass.method<&RL::GetMusicTimePlayed>("GetMusicTimePlayed");
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
  rlClass.property("FLAG_SHOW_LOGO", 1, Php::Const);
  rlClass.property("FLAG_FULLSCREEN_MODE", 2, Php::Const);
  rlClass.property("FLAG_WINDOW_RESIZABLE", 4, Php::Const);
  rlClass.property("FLAG_WINDOW_UNDECORATED", 8, Php::Const);
  rlClass.property("FLAG_WINDOW_TRANSPARENT", 16, Php::Const);
  rlClass.property("FLAG_WINDOW_HIDDEN", 128, Php::Const);
  rlClass.property("FLAG_MSAA_4X_HINT", 32, Php::Const);
  rlClass.property("FLAG_VSYNC_HINT", 64, Php::Const);
  rlClass.property("LOG_ALL", 0, Php::Const);
  rlClass.property("LOG_TRACE", 1, Php::Const);
  rlClass.property("LOG_DEBUG", 2, Php::Const);
  rlClass.property("LOG_INFO", 3, Php::Const);
  rlClass.property("LOG_WARNING", 4, Php::Const);
  rlClass.property("LOG_ERROR", 5, Php::Const);
  rlClass.property("LOG_FATAL", 6, Php::Const);
  rlClass.property("LOG_NONE", 7, Php::Const);
  rlClass.property("KEY_APOSTROPHE", 39, Php::Const);
  rlClass.property("KEY_COMMA", 44, Php::Const);
  rlClass.property("KEY_MINUS", 45, Php::Const);
  rlClass.property("KEY_PERIOD", 46, Php::Const);
  rlClass.property("KEY_SLASH", 47, Php::Const);
  rlClass.property("KEY_ZERO", 48, Php::Const);
  rlClass.property("KEY_ONE", 49, Php::Const);
  rlClass.property("KEY_TWO", 50, Php::Const);
  rlClass.property("KEY_THREE", 51, Php::Const);
  rlClass.property("KEY_FOUR", 52, Php::Const);
  rlClass.property("KEY_FIVE", 53, Php::Const);
  rlClass.property("KEY_SIX", 54, Php::Const);
  rlClass.property("KEY_SEVEN", 55, Php::Const);
  rlClass.property("KEY_EIGHT", 56, Php::Const);
  rlClass.property("KEY_NINE", 57, Php::Const);
  rlClass.property("KEY_SEMICOLON", 59, Php::Const);
  rlClass.property("KEY_EQUAL", 61, Php::Const);
  rlClass.property("KEY_A", 65, Php::Const);
  rlClass.property("KEY_B", 66, Php::Const);
  rlClass.property("KEY_C", 67, Php::Const);
  rlClass.property("KEY_D", 68, Php::Const);
  rlClass.property("KEY_E", 69, Php::Const);
  rlClass.property("KEY_F", 70, Php::Const);
  rlClass.property("KEY_G", 71, Php::Const);
  rlClass.property("KEY_H", 72, Php::Const);
  rlClass.property("KEY_I", 73, Php::Const);
  rlClass.property("KEY_J", 74, Php::Const);
  rlClass.property("KEY_K", 75, Php::Const);
  rlClass.property("KEY_L", 76, Php::Const);
  rlClass.property("KEY_M", 77, Php::Const);
  rlClass.property("KEY_N", 78, Php::Const);
  rlClass.property("KEY_O", 79, Php::Const);
  rlClass.property("KEY_P", 80, Php::Const);
  rlClass.property("KEY_Q", 81, Php::Const);
  rlClass.property("KEY_R", 82, Php::Const);
  rlClass.property("KEY_S", 83, Php::Const);
  rlClass.property("KEY_T", 84, Php::Const);
  rlClass.property("KEY_U", 85, Php::Const);
  rlClass.property("KEY_V", 86, Php::Const);
  rlClass.property("KEY_W", 87, Php::Const);
  rlClass.property("KEY_X", 88, Php::Const);
  rlClass.property("KEY_Y", 89, Php::Const);
  rlClass.property("KEY_Z", 90, Php::Const);
  rlClass.property("KEY_SPACE", 32, Php::Const);
  rlClass.property("KEY_ESCAPE", 256, Php::Const);
  rlClass.property("KEY_ENTER", 257, Php::Const);
  rlClass.property("KEY_TAB", 258, Php::Const);
  rlClass.property("KEY_BACKSPACE", 259, Php::Const);
  rlClass.property("KEY_INSERT", 260, Php::Const);
  rlClass.property("KEY_DELETE", 261, Php::Const);
  rlClass.property("KEY_RIGHT", 262, Php::Const);
  rlClass.property("KEY_LEFT", 263, Php::Const);
  rlClass.property("KEY_DOWN", 264, Php::Const);
  rlClass.property("KEY_UP", 265, Php::Const);
  rlClass.property("KEY_PAGE_UP", 266, Php::Const);
  rlClass.property("KEY_PAGE_DOWN", 267, Php::Const);
  rlClass.property("KEY_HOME", 268, Php::Const);
  rlClass.property("KEY_END", 269, Php::Const);
  rlClass.property("KEY_CAPS_LOCK", 280, Php::Const);
  rlClass.property("KEY_SCROLL_LOCK", 281, Php::Const);
  rlClass.property("KEY_NUM_LOCK", 282, Php::Const);
  rlClass.property("KEY_PRINT_SCREEN", 283, Php::Const);
  rlClass.property("KEY_PAUSE", 284, Php::Const);
  rlClass.property("KEY_F1", 290, Php::Const);
  rlClass.property("KEY_F2", 291, Php::Const);
  rlClass.property("KEY_F3", 292, Php::Const);
  rlClass.property("KEY_F4", 293, Php::Const);
  rlClass.property("KEY_F5", 294, Php::Const);
  rlClass.property("KEY_F6", 295, Php::Const);
  rlClass.property("KEY_F7", 296, Php::Const);
  rlClass.property("KEY_F8", 297, Php::Const);
  rlClass.property("KEY_F9", 298, Php::Const);
  rlClass.property("KEY_F10", 299, Php::Const);
  rlClass.property("KEY_F11", 300, Php::Const);
  rlClass.property("KEY_F12", 301, Php::Const);
  rlClass.property("KEY_LEFT_SHIFT", 340, Php::Const);
  rlClass.property("KEY_LEFT_CONTROL", 341, Php::Const);
  rlClass.property("KEY_LEFT_ALT", 342, Php::Const);
  rlClass.property("KEY_LEFT_SUPER", 343, Php::Const);
  rlClass.property("KEY_RIGHT_SHIFT", 344, Php::Const);
  rlClass.property("KEY_RIGHT_CONTROL", 345, Php::Const);
  rlClass.property("KEY_RIGHT_ALT", 346, Php::Const);
  rlClass.property("KEY_RIGHT_SUPER", 347, Php::Const);
  rlClass.property("KEY_KB_MENU", 348, Php::Const);
  rlClass.property("KEY_LEFT_BRACKET", 91, Php::Const);
  rlClass.property("KEY_BACKSLASH", 92, Php::Const);
  rlClass.property("KEY_RIGHT_BRACKET", 93, Php::Const);
  rlClass.property("KEY_GRAVE", 96, Php::Const);
  rlClass.property("KEY_KP_0", 320, Php::Const);
  rlClass.property("KEY_KP_1", 321, Php::Const);
  rlClass.property("KEY_KP_2", 322, Php::Const);
  rlClass.property("KEY_KP_3", 323, Php::Const);
  rlClass.property("KEY_KP_4", 324, Php::Const);
  rlClass.property("KEY_KP_5", 325, Php::Const);
  rlClass.property("KEY_KP_6", 326, Php::Const);
  rlClass.property("KEY_KP_7", 327, Php::Const);
  rlClass.property("KEY_KP_8", 328, Php::Const);
  rlClass.property("KEY_KP_9", 329, Php::Const);
  rlClass.property("KEY_KP_DECIMAL", 330, Php::Const);
  rlClass.property("KEY_KP_DIVIDE", 331, Php::Const);
  rlClass.property("KEY_KP_MULTIPLY", 332, Php::Const);
  rlClass.property("KEY_KP_SUBTRACT", 333, Php::Const);
  rlClass.property("KEY_KP_ADD", 334, Php::Const);
  rlClass.property("KEY_KP_ENTER", 335, Php::Const);
  rlClass.property("KEY_KP_EQUAL", 336, Php::Const);
  rlClass.property("KEY_BACK", 4, Php::Const);
  rlClass.property("KEY_MENU", 82, Php::Const);
  rlClass.property("KEY_VOLUME_UP", 24, Php::Const);
  rlClass.property("KEY_VOLUME_DOWN", 25, Php::Const);
  rlClass.property("MOUSE_LEFT_BUTTON", 0, Php::Const);
  rlClass.property("MOUSE_RIGHT_BUTTON", 1, Php::Const);
  rlClass.property("MOUSE_MIDDLE_BUTTON", 2, Php::Const);
  rlClass.property("GAMEPAD_PLAYER1", 0, Php::Const);
  rlClass.property("GAMEPAD_PLAYER2", 1, Php::Const);
  rlClass.property("GAMEPAD_PLAYER3", 2, Php::Const);
  rlClass.property("GAMEPAD_PLAYER4", 3, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_TRIANGLE", 0, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_CIRCLE", 1, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_CROSS", 2, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_SQUARE", 3, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_L1", 6, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_R1", 7, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_L2", 4, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_R2", 5, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_START", 8, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_SELECT", 9, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_PS", 12, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_UP", 24, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_RIGHT", 25, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_DOWN", 26, Php::Const);
  rlClass.property("GAMEPAD_PS3_BUTTON_LEFT", 27, Php::Const);
  rlClass.property("GAMEPAD_PS3_AXIS_LEFT_X", 0, Php::Const);
  rlClass.property("GAMEPAD_PS3_AXIS_LEFT_Y", 1, Php::Const);
  rlClass.property("GAMEPAD_PS3_AXIS_RIGHT_X", 2, Php::Const);
  rlClass.property("GAMEPAD_PS3_AXIS_RIGHT_Y", 5, Php::Const);
  rlClass.property("GAMEPAD_PS3_AXIS_L2", 3, Php::Const);
  rlClass.property("GAMEPAD_PS3_AXIS_R2", 4, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_A", 0, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_B", 1, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_X", 2, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_Y", 3, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_LB", 4, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_RB", 5, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_SELECT", 6, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_START", 7, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_HOME", 8, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_UP", 10, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_RIGHT", 11, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_DOWN", 12, Php::Const);
  rlClass.property("GAMEPAD_XBOX_BUTTON_LEFT", 13, Php::Const);
  rlClass.property("GAMEPAD_XBOX_AXIS_LEFT_X", 0, Php::Const);
  rlClass.property("GAMEPAD_XBOX_AXIS_LEFT_Y", 1, Php::Const);
  rlClass.property("GAMEPAD_XBOX_AXIS_RIGHT_X", 2, Php::Const);
  rlClass.property("GAMEPAD_XBOX_AXIS_RIGHT_Y", 3, Php::Const);
  rlClass.property("GAMEPAD_XBOX_AXIS_LT", 4, Php::Const);
  rlClass.property("GAMEPAD_XBOX_AXIS_RT", 5, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_DPAD_UP", 19, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_DPAD_DOWN", 20, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_DPAD_LEFT", 21, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_DPAD_RIGHT", 22, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_DPAD_CENTER", 23, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_A", 96, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_B", 97, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_C", 98, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_X", 99, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_Y", 100, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_Z", 101, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_L1", 102, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_R1", 103, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_L2", 104, Php::Const);
  rlClass.property("GAMEPAD_ANDROID_BUTTON_R2", 105, Php::Const);
  rlClass.property("LOC_VERTEX_POSITION", 0, Php::Const);
  rlClass.property("LOC_VERTEX_TEXCOORD01", 1, Php::Const);
  rlClass.property("LOC_VERTEX_TEXCOORD02", 2, Php::Const);
  rlClass.property("LOC_VERTEX_NORMAL", 3, Php::Const);
  rlClass.property("LOC_VERTEX_TANGENT", 4, Php::Const);
  rlClass.property("LOC_VERTEX_COLOR", 5, Php::Const);
  rlClass.property("LOC_MATRIX_MVP", 6, Php::Const);
  rlClass.property("LOC_MATRIX_MODEL", 7, Php::Const);
  rlClass.property("LOC_MATRIX_VIEW", 8, Php::Const);
  rlClass.property("LOC_MATRIX_PROJECTION", 9, Php::Const);
  rlClass.property("LOC_VECTOR_VIEW", 10, Php::Const);
  rlClass.property("LOC_COLOR_DIFFUSE", 11, Php::Const);
  rlClass.property("LOC_COLOR_SPECULAR", 12, Php::Const);
  rlClass.property("LOC_COLOR_AMBIENT", 13, Php::Const);
  rlClass.property("LOC_MAP_ALBEDO", 14, Php::Const);
  rlClass.property("LOC_MAP_METALNESS", 15, Php::Const);
  rlClass.property("LOC_MAP_NORMAL", 16, Php::Const);
  rlClass.property("LOC_MAP_ROUGHNESS", 17, Php::Const);
  rlClass.property("LOC_MAP_OCCLUSION", 18, Php::Const);
  rlClass.property("LOC_MAP_EMISSION", 19, Php::Const);
  rlClass.property("LOC_MAP_HEIGHT", 20, Php::Const);
  rlClass.property("LOC_MAP_CUBEMAP", 21, Php::Const);
  rlClass.property("LOC_MAP_IRRADIANCE", 22, Php::Const);
  rlClass.property("LOC_MAP_PREFILTER", 23, Php::Const);
  rlClass.property("LOC_MAP_BRDF", 24, Php::Const);
  rlClass.property("UNIFORM_FLOAT", 0, Php::Const);
  rlClass.property("UNIFORM_VEC2", 1, Php::Const);
  rlClass.property("UNIFORM_VEC3", 2, Php::Const);
  rlClass.property("UNIFORM_VEC4", 3, Php::Const);
  rlClass.property("UNIFORM_INT", 4, Php::Const);
  rlClass.property("UNIFORM_IVEC2", 5, Php::Const);
  rlClass.property("UNIFORM_IVEC3", 6, Php::Const);
  rlClass.property("UNIFORM_IVEC4", 7, Php::Const);
  rlClass.property("UNIFORM_SAMPLER2D", 8, Php::Const);
  rlClass.property("MAP_ALBEDO", 0, Php::Const);
  rlClass.property("MAP_METALNESS", 1, Php::Const);
  rlClass.property("MAP_NORMAL", 2, Php::Const);
  rlClass.property("MAP_ROUGHNESS", 3, Php::Const);
  rlClass.property("MAP_OCCLUSION", 4, Php::Const);
  rlClass.property("MAP_EMISSION", 5, Php::Const);
  rlClass.property("MAP_HEIGHT", 6, Php::Const);
  rlClass.property("MAP_CUBEMAP", 7, Php::Const);
  rlClass.property("MAP_IRRADIANCE", 8, Php::Const);
  rlClass.property("MAP_PREFILTER", 9, Php::Const);
  rlClass.property("MAP_BRDF", 10, Php::Const);
  rlClass.property("UNCOMPRESSED_GRAYSCALE", 1, Php::Const);
  rlClass.property("UNCOMPRESSED_GRAY_ALPHA", 2, Php::Const);
  rlClass.property("UNCOMPRESSED_R5G6B5", 3, Php::Const);
  rlClass.property("UNCOMPRESSED_R8G8B8", 4, Php::Const);
  rlClass.property("UNCOMPRESSED_R5G5B5A1", 5, Php::Const);
  rlClass.property("UNCOMPRESSED_R4G4B4A4", 6, Php::Const);
  rlClass.property("UNCOMPRESSED_R8G8B8A8", 7, Php::Const);
  rlClass.property("UNCOMPRESSED_R32", 8, Php::Const);
  rlClass.property("UNCOMPRESSED_R32G32B32", 9, Php::Const);
  rlClass.property("UNCOMPRESSED_R32G32B32A32", 10, Php::Const);
  rlClass.property("COMPRESSED_DXT1_RGB", 11, Php::Const);
  rlClass.property("COMPRESSED_DXT1_RGBA", 12, Php::Const);
  rlClass.property("COMPRESSED_DXT3_RGBA", 13, Php::Const);
  rlClass.property("COMPRESSED_DXT5_RGBA", 14, Php::Const);
  rlClass.property("COMPRESSED_ETC1_RGB", 15, Php::Const);
  rlClass.property("COMPRESSED_ETC2_RGB", 16, Php::Const);
  rlClass.property("COMPRESSED_ETC2_EAC_RGBA", 17, Php::Const);
  rlClass.property("COMPRESSED_PVRT_RGB", 18, Php::Const);
  rlClass.property("COMPRESSED_PVRT_RGBA", 19, Php::Const);
  rlClass.property("COMPRESSED_ASTC_4x4_RGBA", 20, Php::Const);
  rlClass.property("COMPRESSED_ASTC_8x8_RGBA", 21, Php::Const);
  rlClass.property("FILTER_POINT", 0, Php::Const);
  rlClass.property("FILTER_BILINEAR", 1, Php::Const);
  rlClass.property("FILTER_TRILINEAR", 2, Php::Const);
  rlClass.property("FILTER_ANISOTROPIC_4X", 3, Php::Const);
  rlClass.property("FILTER_ANISOTROPIC_8X", 4, Php::Const);
  rlClass.property("FILTER_ANISOTROPIC_16X", 5, Php::Const);
  rlClass.property("CUBEMAP_AUTO_DETECT", 0, Php::Const);
  rlClass.property("CUBEMAP_LINE_VERTICAL", 1, Php::Const);
  rlClass.property("CUBEMAP_LINE_HORIZONTAL", 2, Php::Const);
  rlClass.property("CUBEMAP_CROSS_THREE_BY_FOUR", 3, Php::Const);
  rlClass.property("CUBEMAP_CROSS_FOUR_BY_THREE", 4, Php::Const);
  rlClass.property("CUBEMAP_PANORAMA", 5, Php::Const);
  rlClass.property("WRAP_REPEAT", 0, Php::Const);
  rlClass.property("WRAP_CLAMP", 1, Php::Const);
  rlClass.property("WRAP_MIRROR_REPEAT", 2, Php::Const);
  rlClass.property("WRAP_MIRROR_CLAMP", 3, Php::Const);
  rlClass.property("FONT_DEFAULT", 0, Php::Const);
  rlClass.property("FONT_BITMAP", 1, Php::Const);
  rlClass.property("FONT_SDF", 2, Php::Const);
  rlClass.property("BLEND_ALPHA", 0, Php::Const);
  rlClass.property("BLEND_ADDITIVE", 1, Php::Const);
  rlClass.property("BLEND_MULTIPLIED", 2, Php::Const);
  rlClass.property("GESTURE_NONE", 0, Php::Const);
  rlClass.property("GESTURE_TAP", 1, Php::Const);
  rlClass.property("GESTURE_DOUBLETAP", 2, Php::Const);
  rlClass.property("GESTURE_HOLD", 4, Php::Const);
  rlClass.property("GESTURE_DRAG", 8, Php::Const);
  rlClass.property("GESTURE_SWIPE_RIGHT", 16, Php::Const);
  rlClass.property("GESTURE_SWIPE_LEFT", 32, Php::Const);
  rlClass.property("GESTURE_SWIPE_UP", 64, Php::Const);
  rlClass.property("GESTURE_SWIPE_DOWN", 128, Php::Const);
  rlClass.property("GESTURE_PINCH_IN", 256, Php::Const);
  rlClass.property("GESTURE_PINCH_OUT", 512, Php::Const);
  rlClass.property("CAMERA_CUSTOM", 0, Php::Const);
  rlClass.property("CAMERA_FREE", 1, Php::Const);
  rlClass.property("CAMERA_ORBITAL", 2, Php::Const);
  rlClass.property("CAMERA_FIRST_PERSON", 3, Php::Const);
  rlClass.property("CAMERA_THIRD_PERSON", 4, Php::Const);
  rlClass.property("CAMERA_PERSPECTIVE", 0, Php::Const);
  rlClass.property("CAMERA_ORTHOGRAPHIC", 1, Php::Const);
  rlClass.property("HMD_DEFAULT_DEVICE", 0, Php::Const);
  rlClass.property("HMD_OCULUS_RIFT_DK2", 1, Php::Const);
  rlClass.property("HMD_OCULUS_RIFT_CV1", 2, Php::Const);
  rlClass.property("HMD_OCULUS_GO", 3, Php::Const);
  rlClass.property("HMD_VALVE_HTC_VIVE", 4, Php::Const);
  rlClass.property("HMD_SONY_PSVR", 5, Php::Const);
  rlClass.property("NPT_9PATCH", 0, Php::Const);
  rlClass.property("NPT_3PATCH_VERTICAL", 1, Php::Const);
  rlClass.property("NPT_3PATCH_HORIZONTAL", 2, Php::Const);
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
