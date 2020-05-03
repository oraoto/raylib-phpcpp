#include <phpcpp.h>
#include <raylib.h>
#define PHYSAC_IMPLEMENTATION
#include <physac.h>
#include <raymath.h>

using namespace std;

namespace rl {

template <typename T>
class ScalarArray : public Php::Base,
                    public Php::ArrayAccess,
                    public Php::Countable {
  public:
    T *data;
    int item_count;
    ScalarArray(T *_data) {
        data = _data;
        item_count = -1;
    }
    ScalarArray(T *_data, int _count) {
        data = _data;
        item_count = _count;
    }

    Php::Value getArray() {
        std::vector<Php::Value> result;
        for (int i = 0; i < item_count; i++) {
            result.push_back(Php::Value(data[i]));
        }
        return result;
    }

    virtual bool offsetExists(const Php::Value &key) override {
        return key.isNumeric() &&
               (item_count == -1 || item_count > key.isNumeric());
    }

    virtual void offsetSet(const Php::Value &key,
                           const Php::Value &value) override {
        data[key.numericValue()] = (T)(value.floatValue());
    }

    virtual Php::Value offsetGet(const Php::Value &key) override {
        return (T)data[key.numericValue()];
    }

    virtual void offsetUnset(const Php::Value &key) override { return; }
    virtual long count() override { return item_count; }
};

template <typename T, typename U>
class StructArray : public Php::Base,
                    public Php::ArrayAccess,
                    public Php::Countable {
  public:
    T *data;
    int item_count;
    string name;
    StructArray(string _name, T *_data) {
        name = _name;
        data = _data;
        item_count = -1;
    }
    StructArray(string _name, T *_data, int _count) {
        name = _name;
        data = _data;
        item_count = _count;
    }

    Php::Value getArray() {
        std::vector<Php::Value> result;
        for (int i = 0; i < item_count; i++) {
            result.push_back(Php::Object(name.c_str(), new U(data[i])));
        }
        return result;
    }

    virtual bool offsetExists(const Php::Value &key) override {
        return key.isNumeric() &&
               (item_count == -1 || item_count > key.isNumeric());
    }

    virtual void offsetSet(const Php::Value &key,
                           const Php::Value &value) override {
        data[key.numericValue()] = ((U *)value.implementation())->data;
    }

    virtual Php::Value offsetGet(const Php::Value &key) override {
        return Php::Object(name.c_str(), new U(data[key]));
    }

    virtual void offsetUnset(const Php::Value &key) override { return; }
    virtual long count() override { return item_count; }
};

class Vector2 : public Php::Base {
  public:
    ::Vector2 data;
    void __destruct() const {}
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
    void __destruct() const {}
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
    void __destruct() const {}
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
    void __destruct() const {}
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
    void __destruct() const {}
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
    void __destruct() const {}
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
    void __destruct() const {}
    Image(::Image x) { data = x; }
    Php::Value getdata() {
        void *result = data.data;
        return static_cast<std::string *>(result);
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
    void setwidth(const Php::Value &v) { data.width = (int)v; }
    void setheight(const Php::Value &v) { data.height = (int)v; }
    void setmipmaps(const Php::Value &v) { data.mipmaps = (int)v; }
    void setformat(const Php::Value &v) { data.format = (int)v; }
    void setdata(const Php::Value &v) {
        data.data = (void *)v.stringValue().data();
    }
};

class Texture2D : public Php::Base {
  public:
    ::Texture2D data;
    void __destruct() const {}
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
    void __destruct() const {}
    RenderTexture2D(::RenderTexture2D x) { data = x; }
    Php::Value getid() {
        long result = data.id;
        return result;
    }
    Php::Value gettexture() {
        Php::Value result =
            Php::Object("RayLib\\Texture2D", new Texture2D(data.texture));
        return result;
    }
    Php::Value getdepth() {
        Php::Value result =
            Php::Object("RayLib\\Texture2D", new Texture2D(data.depth));
        return result;
    }
    Php::Value getdepthTexture() {
        bool result = data.depthTexture;
        return result;
    }
    void setid(const Php::Value &v) { data.id = (long)v; }
    void settexture(const Php::Value &v) {
        data.texture = ((Texture2D *)(v.implementation()))->data;
    }
    void setdepth(const Php::Value &v) {
        data.depth = ((Texture2D *)(v.implementation()))->data;
    }
    void setdepthTexture(const Php::Value &v) { data.id = (bool)v; }
};

class NPatchInfo : public Php::Base {
  public:
    ::NPatchInfo data;
    void __destruct() const {}
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
    void __destruct() const {}
    CharInfo(::CharInfo x) { data = x; }
    Php::Value getvalue() {
        int result = data.value;
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
    Php::Value getimage() {
        Php::Value result = Php::Object("RayLib\\Image", new Image(data.image));
        return result;
    }
    void setvalue(const Php::Value &v) { data.value = (int)v; }
    void setoffsetX(const Php::Value &v) { data.offsetX = (int)v; }
    void setoffsetY(const Php::Value &v) { data.offsetY = (int)v; }
    void setadvanceX(const Php::Value &v) { data.advanceX = (int)v; }
    void setimage(const Php::Value &v) {
        data.image = ((Image *)(v.implementation()))->data;
    }
};

class Font : public Php::Base {
  public:
    ::Font data;
    void __destruct() const {}
    Font(::Font x) { data = x; }
    Php::Value getbaseSize() {
        int result = data.baseSize;
        return result;
    }
    Php::Value getcharsCount() {
        int result = data.charsCount;
        return result;
    }
    Php::Value gettexture() {
        Php::Value result =
            Php::Object("RayLib\\Texture2D", new Texture2D(data.texture));
        return result;
    }
    void setbaseSize(const Php::Value &v) { data.baseSize = (int)v; }
    void setcharsCount(const Php::Value &v) { data.charsCount = (int)v; }
    void settexture(const Php::Value &v) {
        data.texture = ((Texture2D *)(v.implementation()))->data;
    }
};

class Camera3D : public Php::Base {
  public:
    ::Camera3D data;
    void __destruct() const {}
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
        Php::Value result =
            Php::Object("RayLib\\Vector3", new Vector3(data.up));
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
    void __destruct() const {}
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

class Mesh : public Php::Base {
  public:
    ::Mesh data;
    void __destruct() const {}
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
    Php::Value getvertices() { throw Php::Exception("Not implemented"); }
    Php::Value gettexcoords() { throw Php::Exception("Not implemented"); }
    Php::Value gettexcoords2() { throw Php::Exception("Not implemented"); }
    Php::Value getnormals() { throw Php::Exception("Not implemented"); }
    Php::Value gettangents() { throw Php::Exception("Not implemented"); }
    Php::Value getcolors() { throw Php::Exception("Not implemented"); }
    Php::Value getindices() { throw Php::Exception("Not implemented"); }
    Php::Value getanimVertices() { throw Php::Exception("Not implemented"); }
    Php::Value getanimNormals() { throw Php::Exception("Not implemented"); }
    Php::Value getboneIds() { throw Php::Exception("Not implemented"); }
    Php::Value getboneWeights() { throw Php::Exception("Not implemented"); }
    Php::Value getvboId() { throw Php::Exception("Not implemented"); }
    void setvertexCount(const Php::Value &v) { data.vertexCount = (int)v; }
    void settriangleCount(const Php::Value &v) { data.triangleCount = (int)v; }
    void setvaoId(const Php::Value &v) { data.vaoId = (long)v; }
    void setvertices(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void settexcoords(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void settexcoords2(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setnormals(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void settangents(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setcolors(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setindices(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setanimVertices(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setanimNormals(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setboneIds(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setboneWeights(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setvboId(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
};

class Shader : public Php::Base {
  public:
    ::Shader data;
    void __destruct() const {}
    Shader(::Shader x) { data = x; }
    Php::Value getid() {
        long result = data.id;
        return result;
    }
    Php::Value getlocs() {
        std::vector<int> result;
        for (int i = 0; i < 32; i++) {
            result.push_back(data.locs[i]);
        }
        return result;
    }
    void setid(const Php::Value &v) { data.id = (long)v; }
    void setlocs(const Php::Value &v) {
        auto arr = v.vectorValue<int>();
        for (size_t i = 0; i < arr.size(); ++i) {
            data.locs[i] = arr[i];
        }
    }
};

class MaterialMap : public Php::Base {
  public:
    ::MaterialMap data;
    void __destruct() const {}
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
    void __destruct() const {}
    Material(::Material x) { data = x; }
    Php::Value getshader() {
        Php::Value result =
            Php::Object("RayLib\\Shader", new Shader(data.shader));
        return result;
    }
    Php::Value getmaps() {
        std::vector<Php::Value> result;
        for (int i = 0; i < 12; i++) {
            result.push_back(Php::Object("RayLib\\MaterialMap",
                                         new MaterialMap(data.maps[i])));
        }
        return result;
    }
    Php::Value getparams() { throw Php::Exception("Not implemented"); }
    void setshader(const Php::Value &v) {
        data.shader = ((Shader *)(v.implementation()))->data;
    }
    void setmaps(const Php::Value &v) {
        auto arr = v.vectorValue<Php::Value>();
        for (size_t i = 0; i < arr.size(); ++i) {
            data.maps[i] = ((MaterialMap *)(arr[i].implementation()))->data;
        }
    }
    void setparams(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
};

class Transform : public Php::Base {
  public:
    ::Transform data;
    void __destruct() const {}
    Transform(::Transform x) { data = x; }
    Php::Value gettranslation() {
        Php::Value result =
            Php::Object("RayLib\\Vector3", new Vector3(data.translation));
        return result;
    }
    Php::Value getrotation() {
        Php::Value result =
            Php::Object("RayLib\\Vector4", new Vector4(data.rotation));
        return result;
    }
    Php::Value getscale() {
        Php::Value result =
            Php::Object("RayLib\\Vector3", new Vector3(data.scale));
        return result;
    }
    void settranslation(const Php::Value &v) {
        data.translation = ((Vector3 *)(v.implementation()))->data;
    }
    void setrotation(const Php::Value &v) {
        data.rotation = ((Vector4 *)(v.implementation()))->data;
    }
    void setscale(const Php::Value &v) {
        data.scale = ((Vector3 *)(v.implementation()))->data;
    }
};

class BoneInfo : public Php::Base {
  public:
    ::BoneInfo data;
    void __destruct() const {}
    BoneInfo(::BoneInfo x) { data = x; }
    Php::Value getname() {
        string result(data.name, 32);
        return result;
    }
    Php::Value getparent() {
        int result = data.parent;
        return result;
    }
    void setname(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setparent(const Php::Value &v) { data.parent = (int)v; }
};

class Model : public Php::Base {
  public:
    ::Model data;
    void __destruct() const {}
    Model(::Model x) { data = x; }
    Php::Value gettransform() {
        Php::Value result =
            Php::Object("RayLib\\Matrix", new Matrix(data.transform));
        return result;
    }
    Php::Value getmeshCount() {
        int result = data.meshCount;
        return result;
    }
    Php::Value getmeshes() {
        std::vector<Php::Value> result;
        for (int i = 0; i < data.meshCount; i++) {
            result.push_back(
                Php::Object("RayLib\\Mesh", new Mesh(data.meshes[i])));
        }
        return result;
    }
    Php::Value getmaterials() {
        std::vector<Php::Value> result;
        for (int i = 0; i < data.materialCount; i++) {
            result.push_back(Php::Object("RayLib\\Material",
                                         new Material(data.materials[i])));
        }
        return result;
    }
    Php::Value getmeshMaterial() { throw Php::Exception("Not implemented"); }
    Php::Value getmaterialCount() {
        int result = data.materialCount;
        return result;
    }
    Php::Value getboneCount() {
        int result = data.boneCount;
        return result;
    }
    void settransform(const Php::Value &v) {
        data.transform = ((Matrix *)(v.implementation()))->data;
    }
    void setmeshCount(const Php::Value &v) { data.meshCount = (int)v; }
    void setmeshes(const Php::Value &v) {
        auto arr = v.vectorValue<Php::Value>();
        for (size_t i = 0; i < arr.size(); ++i) {
            data.meshes[i] = ((Mesh *)(arr[i].implementation()))->data;
        }
    }
    void setmaterialCount(const Php::Value &v) { data.materialCount = (int)v; }
    void setmaterials(const Php::Value &v) {
        auto arr = v.vectorValue<Php::Value>();
        for (size_t i = 0; i < arr.size(); ++i) {
            data.materials[i] = ((Material *)(arr[i].implementation()))->data;
        }
    }
    void setmeshMaterial(const Php::Value &v) {
        throw Php::Exception("Not implemented");
    }
    void setboneCount(const Php::Value &v) { data.boneCount = (int)v; }
};

class ModelAnimation : public Php::Base {
  public:
    ::ModelAnimation data;
    void __destruct() const {}
    ModelAnimation(::ModelAnimation x) { data = x; }
    Php::Value getboneCount() {
        int result = data.boneCount;
        return result;
    }
    Php::Value getframeCount() {
        int result = data.frameCount;
        return result;
    }
    void setboneCount(const Php::Value &v) { data.boneCount = (int)v; }
    void setframeCount(const Php::Value &v) { data.frameCount = (int)v; }
};

class Ray : public Php::Base {
  public:
    ::Ray data;
    void __destruct() const {}
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
    void __destruct() const {}
    RayHitInfo(::RayHitInfo x) { data = x; }
};

class BoundingBox : public Php::Base {
  public:
    ::BoundingBox data;
    void __destruct() const {}
    BoundingBox(::BoundingBox x) { data = x; }
    Php::Value getmin() {
        Php::Value result =
            Php::Object("RayLib\\Vector3", new Vector3(data.min));
        return result;
    }
    Php::Value getmax() {
        Php::Value result =
            Php::Object("RayLib\\Vector3", new Vector3(data.max));
        return result;
    }
    void setmin(const Php::Value &v) {
        data.min = ((Vector3 *)(v.implementation()))->data;
    }
    void setmax(const Php::Value &v) {
        data.max = ((Vector3 *)(v.implementation()))->data;
    }
};

class Wave : public Php::Base {
  public:
    ::Wave data;
    void __destruct() const {}
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

class rAudioBuffer : public Php::Base {
  public:
    void *data; // rAudioBuffer
    rAudioBuffer(void *x) { data = x; }
};

class AudioStream : public Php::Base {
  public:
    ::AudioStream data;
    void __destruct() const {}
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
    void setsampleRate(const Php::Value &v) { data.sampleRate = (long)v; }
    void setsampleSize(const Php::Value &v) { data.sampleSize = (long)v; }
    void setchannels(const Php::Value &v) { data.channels = (long)v; }
};

class Sound : public Php::Base {
  public:
    ::Sound data;
    void __destruct() const {}
    Sound(::Sound x) { data = x; }
    Php::Value getsampleCount() {
        long result = data.sampleCount;
        return result;
    }
    Php::Value getstream() {
        Php::Value result =
            Php::Object("RayLib\\AudioStream", new AudioStream(data.stream));
        return result;
    }
    void setsampleCount(const Php::Value &v) { data.sampleCount = (long)v; }
    void setstream(const Php::Value &v) {
        data.stream = ((AudioStream *)(v.implementation()))->data;
    }
};

class Music : public Php::Base {
  public:
    ::Music data;
    void __destruct() const {}
    Music(::Music x) { data = x; }
    Php::Value getctxType() {
        int result = data.ctxType;
        return result;
    }
    Php::Value getsampleCount() {
        long result = data.sampleCount;
        return result;
    }
    Php::Value getloopCount() {
        long result = data.loopCount;
        return result;
    }
    Php::Value getstream() {
        Php::Value result =
            Php::Object("RayLib\\AudioStream", new AudioStream(data.stream));
        return result;
    }
    void setctxType(const Php::Value &v) { data.ctxType = (int)v; }
    void setsampleCount(const Php::Value &v) { data.sampleCount = (long)v; }
    void setloopCount(const Php::Value &v) { data.loopCount = (long)v; }
    void setstream(const Php::Value &v) {
        data.stream = ((AudioStream *)(v.implementation()))->data;
    }
};

class VrDeviceInfo : public Php::Base {
  public:
    ::VrDeviceInfo data;
    void __destruct() const {}
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
    void setvScreenCenter(const Php::Value &v) {
        data.vScreenCenter = (double)v;
    }
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

class TraceLogCallback : public Php::Base {
  public:
    ::TraceLogCallback data;
    void __destruct() const {}
    TraceLogCallback(::TraceLogCallback x) { data = x; }
};

class rlPhysicsBody : public Php::Base {
  public:
    ::PhysicsBodyData *data;
    rlPhysicsBody(::PhysicsBodyData *x) { data = x; }
    Php::Value getid() {
        long result = data->id;
        return result;
    }
    Php::Value getenabled() { return data->enabled; }
    Php::Value getposition() {
        Php::Value result =
            Php::Object("RayLib\\Vector2", new Vector2(data->position));
        return result;
    }
    Php::Value getvelocity() {
        Php::Value result =
            Php::Object("RayLib\\Vector2", new Vector2(data->velocity));
        return result;
    }
    Php::Value getforce() {
        Php::Value result =
            Php::Object("RayLib\\Vector2", new Vector2(data->force));
        return result;
    }
    Php::Value getangularVelocity() {
        double result = data->angularVelocity;
        return result;
    }
    Php::Value gettorque() {
        double result = data->torque;
        return result;
    }
    Php::Value getorient() {
        double result = data->orient;
        return result;
    }
    Php::Value getinertia() {
        double result = data->inertia;
        return result;
    }
    Php::Value getinverseInertia() {
        double result = data->inverseInertia;
        return result;
    }
    Php::Value getmass() {
        double result = data->mass;
        return result;
    }
    Php::Value getinverseMass() {
        double result = data->inverseMass;
        return result;
    }
    Php::Value getstaticFriction() {
        double result = data->staticFriction;
        return result;
    }
    Php::Value getdynamicFriction() {
        double result = data->dynamicFriction;
        return result;
    }
    Php::Value getrestitution() {
        double result = data->restitution;
        return result;
    }
    Php::Value getuseGravity() { return data->useGravity; }
    Php::Value getisGrounded() { return data->isGrounded; }
    Php::Value getfreezeOrient() { return data->freezeOrient; }
    // Php::Value getshape() {
    //   Php::Value result =
    //       Php::Object("RayLib\\PhysicsShape", new PhysicsShape(data->shape));
    //   return result;
    // }
    void setid(const Php::Value &v) { data->id = (long)v; }
    void setenabled(const Php::Value &v) {}
    void setposition(const Php::Value &v) {
        data->position = ((Vector2 *)(v.implementation()))->data;
    }
    void setvelocity(const Php::Value &v) {
        data->velocity = ((Vector2 *)(v.implementation()))->data;
    }
    void setforce(const Php::Value &v) {
        data->force = ((Vector2 *)(v.implementation()))->data;
    }
    void setangularVelocity(const Php::Value &v) {
        data->angularVelocity = (double)v;
    }
    void settorque(const Php::Value &v) { data->torque = (double)v; }
    void setorient(const Php::Value &v) { data->orient = (double)v; }
    void setinertia(const Php::Value &v) { data->inertia = (double)v; }
    void setinverseInertia(const Php::Value &v) {
        data->inverseInertia = (double)v;
    }
    void setmass(const Php::Value &v) { data->mass = (double)v; }
    void setinverseMass(const Php::Value &v) { data->inverseMass = (double)v; }
    void setstaticFriction(const Php::Value &v) {
        data->staticFriction = (double)v;
    }
    void setdynamicFriction(const Php::Value &v) {
        data->dynamicFriction = (double)v;
    }
    void setrestitution(const Php::Value &v) { data->restitution = (double)v; }
    void setuseGravity(const Php::Value &v) {}
    void setisGrounded(const Php::Value &v) {}
    void setfreezeOrient(const Php::Value &v) {}
    // void setshape(const Php::Value &v) {
    //   data->shape = ((PhysicsShape *)(v.implementation()))->data;
    // }
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

    static Php::Value IsWindowFullscreen(Php::Parameters &params) {
        int result = ::IsWindowFullscreen();
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

    // GetWindowHandle is not supported
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

    static Php::Value GetWindowPosition(Php::Parameters &params) {
        Vector2 result = ::GetWindowPosition();
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value GetMonitorName(Php::Parameters &params) {
        int p0 = params[0];
        string result = ::GetMonitorName(p0);
        return result;
    }

    static Php::Value GetClipboardText(Php::Parameters &params) {
        string result = ::GetClipboardText();
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

    static void BeginScissorMode(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        ::BeginScissorMode(p0, p1, p2, p3);
    }

    static void EndScissorMode(Php::Parameters &params) { ::EndScissorMode(); }

    static Php::Value GetMouseRay(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Camera3D p1 = ((Camera3D *)(params[1].implementation()))->data;
        Ray result = ::GetMouseRay(p0, p1);
        return Php::Object("RayLib\\Ray", new Ray(result));
    }

    static Php::Value GetCameraMatrix(Php::Parameters &params) {
        ::Camera3D p0 = ((Camera3D *)(params[0].implementation()))->data;
        Matrix result = ::GetCameraMatrix(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value GetCameraMatrix2D(Php::Parameters &params) {
        ::Camera2D p0 = ((Camera2D *)(params[0].implementation()))->data;
        Matrix result = ::GetCameraMatrix2D(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value GetWorldToScreen(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Camera3D p1 = ((Camera3D *)(params[1].implementation()))->data;
        Vector2 result = ::GetWorldToScreen(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value GetWorldToScreenEx(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Camera3D p1 = ((Camera3D *)(params[1].implementation()))->data;
        int p2 = params[2];
        int p3 = params[3];
        Vector2 result = ::GetWorldToScreenEx(p0, p1, p2, p3);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value GetWorldToScreen2D(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Camera2D p1 = ((Camera2D *)(params[1].implementation()))->data;
        Vector2 result = ::GetWorldToScreen2D(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value GetScreenToWorld2D(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Camera2D p1 = ((Camera2D *)(params[1].implementation()))->data;
        Vector2 result = ::GetScreenToWorld2D(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
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

    static Php::Value ColorFromNormalized(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        Color result = ::ColorFromNormalized(p0);
        return Php::Object("RayLib\\Color", new Color(result));
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
        long p0 = params[0];
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

    static void SetTraceLogCallback(Php::Parameters &params) {
        ::TraceLogCallback p0 =
            ((TraceLogCallback *)(params[0].implementation()))->data;
        ::SetTraceLogCallback(p0);
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

    // LoadFileData is not supported
    static void SaveFileData(Php::Parameters &params) {
        string p0 = params[0];
        string p1 = params[1];
        long p2 = params[2];
        ::SaveFileData(p0.c_str(), (void *)p1.c_str(), p2);
    }

    static Php::Value LoadFileText(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::LoadFileText(p0.c_str());
        return result;
    }

    static void SaveFileText(Php::Parameters &params) {
        string p0 = params[0];
        string p1 = params[1];
        /// ::SaveFileText(p0.c_str(), p1.c_str());
    }

    static Php::Value FileExists(Php::Parameters &params) {
        string p0 = params[0];
        int result = ::FileExists(p0.c_str());
        return result;
    }

    static Php::Value IsFileExtension(Php::Parameters &params) {
        string p0 = params[0];
        string p1 = params[1];
        int result = ::IsFileExtension(p0.c_str(), p1.c_str());
        return result;
    }

    static Php::Value DirectoryExists(Php::Parameters &params) {
        string p0 = params[0];
        int result = ::DirectoryExists(p0.c_str());
        return result;
    }

    static Php::Value GetExtension(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::GetExtension(p0.c_str());
        return result;
    }

    static Php::Value GetFileName(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::GetFileName(p0.c_str());
        return result;
    }

    static Php::Value GetFileNameWithoutExt(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::GetFileNameWithoutExt(p0.c_str());
        return result;
    }

    static Php::Value GetDirectoryPath(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::GetDirectoryPath(p0.c_str());
        return result;
    }

    static Php::Value GetPrevDirectoryPath(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::GetPrevDirectoryPath(p0.c_str());
        return result;
    }

    static Php::Value GetWorkingDirectory(Php::Parameters &params) {
        string result = ::GetWorkingDirectory();
        return result;
    }

    // GetDirectoryFiles is not supported
    static void ClearDirectoryFiles(Php::Parameters &params) {
        ::ClearDirectoryFiles();
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

    static Php::Value GetDroppedFiles(Php::Parameters &params) {
        int p0 = 0;
        auto files = ::GetDroppedFiles(&p0);
        std::vector<string> result;
        for (int i = 0; i < p0; i++) {
            result.push_back(string(files[i]));
        }
        return result;
    }

    static void ClearDroppedFiles(Php::Parameters &params) {
        ::ClearDroppedFiles();
    }

    static Php::Value GetFileModTime(Php::Parameters &params) {
        string p0 = params[0];
        long result = ::GetFileModTime(p0.c_str());
        return result;
    }

    // CompressData is not supported
    // DecompressData is not supported
    static void SaveStorageValue(Php::Parameters &params) {
        long p0 = params[0];
        int p1 = params[1];
        ::SaveStorageValue(p0, p1);
    }

    static Php::Value LoadStorageValue(Php::Parameters &params) {
        long p0 = params[0];
        int result = ::LoadStorageValue(p0);
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

    static void SetExitKey(Php::Parameters &params) {
        int p0 = params[0];
        ::SetExitKey(p0);
    }

    static Php::Value GetKeyPressed(Php::Parameters &params) {
        int result = ::GetKeyPressed();
        return result;
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

    static Php::Value GetGamepadName(Php::Parameters &params) {
        int p0 = params[0];
        string result = ::GetGamepadName(p0);
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

    static void DrawLineStrip(Php::Parameters &params) {
        auto p0 = params[0].vectorValue<Php::Value>();
        int p1 = params[1];
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        std::vector<::Vector2> arr;
        for (int i = 0; i < p1; i++) {
            arr.push_back(((Vector2 *)p0[i].implementation())->data);
        }
        ::DrawLineStrip(arr.data(), p1, p2);
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
        int p4 = params[4];
        ::Color p5 = ((Color *)(params[5].implementation()))->data;
        ::DrawCircleSector(p0, p1, p2, p3, p4, p5);
    }

    static void DrawCircleSectorLines(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        ::Color p5 = ((Color *)(params[5].implementation()))->data;
        ::DrawCircleSectorLines(p0, p1, p2, p3, p4, p5);
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

    static void DrawEllipse(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::DrawEllipse(p0, p1, p2, p3, p4);
    }

    static void DrawEllipseLines(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::DrawEllipseLines(p0, p1, p2, p3, p4);
    }

    static void DrawRing(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        double p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        int p5 = params[5];
        ::Color p6 = ((Color *)(params[6].implementation()))->data;
        ::DrawRing(p0, p1, p2, p3, p4, p5, p6);
    }

    static void DrawRingLines(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        double p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        int p5 = params[5];
        ::Color p6 = ((Color *)(params[6].implementation()))->data;
        ::DrawRingLines(p0, p1, p2, p3, p4, p5, p6);
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

    static void DrawRectangleRounded(Php::Parameters &params) {
        ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
        double p1 = params[1];
        int p2 = params[2];
        ::Color p3 = ((Color *)(params[3].implementation()))->data;
        ::DrawRectangleRounded(p0, p1, p2, p3);
    }

    static void DrawRectangleRoundedLines(Php::Parameters &params) {
        ::Rectangle p0 = ((Rectangle *)(params[0].implementation()))->data;
        double p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::DrawRectangleRoundedLines(p0, p1, p2, p3, p4);
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

    static void DrawTriangleFan(Php::Parameters &params) {
        auto p0 = params[0].vectorValue<Php::Value>();
        int p1 = params[1];
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        std::vector<::Vector2> arr;
        for (int i = 0; i < p1; i++) {
            arr.push_back(((Vector2 *)p0[i].implementation())->data);
        }
        ::DrawTriangleFan(arr.data(), p1, p2);
    }

    static void DrawTriangleStrip(Php::Parameters &params) {
        auto p0 = params[0].vectorValue<Php::Value>();
        int p1 = params[1];
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        std::vector<::Vector2> arr;
        for (int i = 0; i < p1; i++) {
            arr.push_back(((Vector2 *)p0[i].implementation())->data);
        }
        ::DrawTriangleStrip(arr.data(), p1, p2);
    }

    static void DrawPoly(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        int p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::DrawPoly(p0, p1, p2, p3, p4);
    }

    static void DrawPolyLines(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        int p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::DrawPolyLines(p0, p1, p2, p3, p4);
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
        std::vector<::Color> p0;
        int p1 = params[1];
        int p2 = params[1];
        for (auto v : params[0].vectorValue<Php::Value>()) {
            p0.push_back(((Color *)v.implementation())->data);
        }
        Image result = ::LoadImageEx(p0.data(), p1, p2);
        return Php::Object("RayLib\\Image", new Image(result));
    }

    static Php::Value LoadImagePro(Php::Parameters &params) {
        string p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        Image result = ::LoadImagePro((void *)p0.data(), p1, p2, p3);
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

    static void UnloadImage(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        ::UnloadImage(p0);
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

    static Php::Value GetImageData(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        ::Color *result = ::GetImageData(p0);
        return Php::Object(
            "RayLib\\StructArray_Color",
            new StructArray<::Color, Color>("RayLib\\Color", result));
    }

    static Php::Value GetImageDataNormalized(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        ::Vector4 *result = ::GetImageDataNormalized(p0);
        return Php::Object(
            "RayLib\\StructArray_Vector4",
            new StructArray<::Vector4, Vector4>("RayLib\\Vector4", result));
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

    static Php::Value ImageCopy(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        Image result = ::ImageCopy(p0);
        return Php::Object("RayLib\\Image", new Image(result));
    }

    static Php::Value ImageFromImage(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
        Image result = ::ImageFromImage(p0, p1);
        return Php::Object("RayLib\\Image", new Image(result));
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

    static Php::Value ImageExtractPalette(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        int p1 = params[1];
        int p2 = 0;
        ::Color *result = ::ImageExtractPalette(p0, p1, &p2);
        return Php::Object(
            "RayLib\\StructArray_Color",
            new StructArray<::Color, Color>("RayLib\\Color", result, p2));
    }

    static Php::Value GetImageAlphaBorder(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        double p1 = params[1];
        Rectangle result = ::GetImageAlphaBorder(p0, p1);
        return Php::Object("RayLib\\Rectangle", new Rectangle(result));
    }

    static void ImageClearBackground(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Color p1 = ((Color *)(params[1].implementation()))->data;
        ::ImageClearBackground(p0, p1);
    }

    static void ImageDrawPixel(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        int p1 = params[1];
        int p2 = params[2];
        ::Color p3 = ((Color *)(params[3].implementation()))->data;
        ::ImageDrawPixel(p0, p1, p2, p3);
    }

    static void ImageDrawPixelV(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        ::ImageDrawPixelV(p0, p1, p2);
    }

    static void ImageDrawLine(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        ::Color p5 = ((Color *)(params[5].implementation()))->data;
        ::ImageDrawLine(p0, p1, p2, p3, p4, p5);
    }

    static void ImageDrawLineV(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
        ::Color p3 = ((Color *)(params[3].implementation()))->data;
        ::ImageDrawLineV(p0, p1, p2, p3);
    }

    static void ImageDrawCircle(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::ImageDrawCircle(p0, p1, p2, p3, p4);
    }

    static void ImageDrawCircleV(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        int p2 = params[2];
        ::Color p3 = ((Color *)(params[3].implementation()))->data;
        ::ImageDrawCircleV(p0, p1, p2, p3);
    }

    static void ImageDrawRectangle(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        ::Color p5 = ((Color *)(params[5].implementation()))->data;
        ::ImageDrawRectangle(p0, p1, p2, p3, p4, p5);
    }

    static void ImageDrawRectangleV(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
        ::Color p3 = ((Color *)(params[3].implementation()))->data;
        ::ImageDrawRectangleV(p0, p1, p2, p3);
    }

    static void ImageDrawRectangleRec(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        ::ImageDrawRectangleRec(p0, p1, p2);
    }

    static void ImageDrawRectangleLines(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
        int p2 = params[2];
        ::Color p3 = ((Color *)(params[3].implementation()))->data;
        ::ImageDrawRectangleLines(p0, p1, p2, p3);
    }

    static void ImageDraw(Php::Parameters &params) {
        ::Image *p0 = &((Image *)(params[0].implementation()))->data;
        ::Image p1 = ((Image *)(params[1].implementation()))->data;
        ::Rectangle p2 = ((Rectangle *)(params[2].implementation()))->data;
        ::Rectangle p3 = ((Rectangle *)(params[3].implementation()))->data;
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::ImageDraw(p0, p1, p2, p3, p4);
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
        return Php::Object("RayLib\\TextureCubemap",
                           new TextureCubemap(result));
    }

    static Php::Value LoadRenderTexture(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        RenderTexture2D result = ::LoadRenderTexture(p0, p1);
        return Php::Object("RayLib\\RenderTexture2D",
                           new RenderTexture2D(result));
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

    static void UpdateTexture(Php::Parameters &params) {
        ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
        if (params[1].isString()) {
            return ::UpdateTexture(p0, params[1].stringValue().data());
        }
        if (params[1].instanceOf("RayLib\\ScalarArray_float")) {
            return ::UpdateTexture(
                p0, ((ScalarArray<float> *)params[1].implementation())->data);
        }
        if (params[1].instanceOf("RayLib\\StructArray_Vector4")) {
            return ::UpdateTexture(
                p0,
                ((StructArray<::Vector4, Vector4> *)params[1].implementation())
                    ->data);
        }
        if (params[1].instanceOf("RayLib\\StructArray_Color")) {
            return ::UpdateTexture(
                p0, ((StructArray<::Color, Color> *)params[1].implementation())
                        ->data);
        }
    }

    static Php::Value GetTextureData(Php::Parameters &params) {
        ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
        Image result = ::GetTextureData(p0);
        return Php::Object("RayLib\\Image", new Image(result));
    }

    static Php::Value GetScreenData(Php::Parameters &params) {
        Image result = ::GetScreenData();
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

    static Php::Value GetPixelDataSize(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        int result = ::GetPixelDataSize(p0, p1, p2);
        return result;
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

    static Php::Value LoadFontEx(Php::Parameters &params) {
        string p0 = params[0];
        int p1 = params[1];
        int p2 = 0;
        int p3 = params[3];
        Font result = ::LoadFontEx(p0.c_str(), p1, &p2, p3);
        params[2] = p2;
        return Php::Object("RayLib\\Font", new Font(result));
    }

    static Php::Value LoadFontFromImage(Php::Parameters &params) {
        ::Image p0 = ((Image *)(params[0].implementation()))->data;
        ::Color p1 = ((Color *)(params[1].implementation()))->data;
        int p2 = params[2];
        Font result = ::LoadFontFromImage(p0, p1, p2);
        return Php::Object("RayLib\\Font", new Font(result));
    }

    // LoadFontData is not supported
    // static Php::Value GenImageFontAtlas(Php::Parameters &params) {
    //   ::const struct CharInfo *p0 =
    //       &((const struct CharInfo *)(params[0].implementation()))->data;
    //   int p2 = params[2];
    //   int p3 = params[3];
    //   int p4 = params[4];
    //   int p5 = params[5];
    //   Image result = ::GenImageFontAtlas(p0, p1, p2, p3, p4, p5);
    //   return Php::Object("RayLib\\Image", new Image(result));
    // }

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

    static void DrawTextCodepoint(Php::Parameters &params) {
        ::Font p0 = ((Font *)(params[0].implementation()))->data;
        int p1 = params[1];
        ::Vector2 p2 = ((Vector2 *)(params[2].implementation()))->data;
        double p3 = params[3];
        ::Color p4 = ((Color *)(params[4].implementation()))->data;
        ::DrawTextCodepoint(p0, p1, p2, p3, p4);
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

    // static Php::Value TextCopy(Php::Parameters &params) {
    //   string p0 = params[0];
    //   string p1 = params[1];
    //   int result = ::TextCopy(p0.c_str(), p1.c_str());
    //   return result;
    // }

    // static Php::Value TextIsEqual(Php::Parameters &params) {
    //   string p0 = params[0];
    //   string p1 = params[1];
    //   int result = ::TextIsEqual(p0.c_str(), p1.c_str());
    //   return result;
    // }

    static Php::Value TextLength(Php::Parameters &params) {
        string p0 = params[0];
        long result = ::TextLength(p0.c_str());
        return result;
    }

    static Php::Value TextFormat(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::TextFormat(p0.c_str());
        return result;
    }

    static Php::Value TextSubtext(Php::Parameters &params) {
        string p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        string result = ::TextSubtext(p0.c_str(), p1, p2);
        return result;
    }

    // static Php::Value TextReplace(Php::Parameters &params) {
    //   string p0 = params[0];
    //   string p1 = params[1];
    //   string p2 = params[2];
    //   string result = ::TextReplace(p0.c_str(), p1.c_str(), p2.c_str());
    // }

    static Php::Value TextInsert(Php::Parameters &params) {
        string p0 = params[0];
        string p1 = params[1];
        int p2 = params[2];
        string result = ::TextInsert(p0.c_str(), p1.c_str(), p2);
        return result;
    }

    // static Php::Value TextJoin(Php::Parameters &params) {
    //   int p1 = params[1];
    //   string p2 = params[2];
    //   string result = ::TextJoin(p0, p1, p2.c_str());
    // }

    // TextSplit is not supported
    // static void TextAppend(Php::Parameters &params) {
    //   string p0 = params[0];
    //   string p1 = params[1];
    //   // Pointer to scalar as argument is not supported
    //   ::TextAppend(p0.c_str(), p1.c_str(), p2);
    // }

    static Php::Value TextFindIndex(Php::Parameters &params) {
        string p0 = params[0];
        string p1 = params[1];
        int result = ::TextFindIndex(p0.c_str(), p1.c_str());
        return result;
    }

    static Php::Value TextToUpper(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::TextToUpper(p0.c_str());
        return result;
    }

    static Php::Value TextToLower(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::TextToLower(p0.c_str());
        return result;
    }

    static Php::Value TextToPascal(Php::Parameters &params) {
        string p0 = params[0];
        string result = ::TextToPascal(p0.c_str());
        return result;
    }

    static Php::Value TextToInteger(Php::Parameters &params) {
        string p0 = params[0];
        int result = ::TextToInteger(p0.c_str());
        return result;
    }

    // static Php::Value TextToUtf8(Php::Parameters &params) {
    //   // Pointer to scalar as argument is not supported
    //   int p1 = params[1];
    //   string result = ::TextToUtf8(p0, p1);
    // }

    // GetCodepoints is not supported
    static Php::Value GetCodepointsCount(Php::Parameters &params) {
        string p0 = params[0];
        int result = ::GetCodepointsCount(p0.c_str());
        return result;
    }

    // static Php::Value GetNextCodepoint(Php::Parameters &params) {
    //   string p0 = params[0];
    //   // Pointer to scalar as argument is not supported
    //   int result = ::GetNextCodepoint(p0.c_str(), p1);
    //   return result;
    // }

    // static Php::Value CodepointToUtf8(Php::Parameters &params) {
    //   int p0 = params[0];
    //   // Pointer to scalar as argument is not supported
    //   string result = ::CodepointToUtf8(p0, p1);
    // }

    static void DrawLine3D(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        ::DrawLine3D(p0, p1, p2);
    }

    static void DrawPoint3D(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Color p1 = ((Color *)(params[1].implementation()))->data;
        ::DrawPoint3D(p0, p1);
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

    static void DrawCubeWiresV(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        ::Color p2 = ((Color *)(params[2].implementation()))->data;
        ::DrawCubeWiresV(p0, p1, p2);
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

    static Php::Value LoadMeshes(Php::Parameters &params) {
        string p0 = params[0];
        int p1 = params[1];
        ::Mesh *result = ::LoadMeshes(p0.c_str(), &p1);
        return Php::Object("RayLib\\StructArray", new StructArray<::Mesh, Mesh>(
                                                      "RayLib\\Mesh", result));
    }

    static void ExportMesh(Php::Parameters &params) {
        ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
        string p1 = params[1];
        ::ExportMesh(p0, p1.c_str());
    }

    static void UnloadMesh(Php::Parameters &params) {
        ::Mesh p0 = ((Mesh *)(params[0].implementation()))->data;
        ::UnloadMesh(p0);
    }

    static Php::Value LoadMaterials(Php::Parameters &params) {
        string p0 = params[0];
        int p1 = 0;
        ::Material *result = ::LoadMaterials(p0.c_str(), &p1);
        return Php::Object("RayLib\\StructArray",
                           new StructArray<::Material, Material>(
                               "RayLib\\Material", result, p1));
    }

    static Php::Value LoadMaterialDefault(Php::Parameters &params) {
        Material result = ::LoadMaterialDefault();
        return Php::Object("RayLib\\Material", new Material(result));
    }

    static void UnloadMaterial(Php::Parameters &params) {
        ::Material p0 = ((Material *)(params[0].implementation()))->data;
        ::UnloadMaterial(p0);
    }

    static void SetMaterialTexture(Php::Parameters &params) {
        ::Material *p0 = &((Material *)(params[0].implementation()))->data;
        int p1 = params[1];
        ::Texture2D p2 = ((Texture2D *)(params[2].implementation()))->data;
        ::SetMaterialTexture(p0, p1, p2);
    }

    static void SetModelMeshMaterial(Php::Parameters &params) {
        ::Model *p0 = &((Model *)(params[0].implementation()))->data;
        int p1 = params[1];
        int p2 = params[2];
        ::SetModelMeshMaterial(p0, p1, p2);
    }

    static Php::Value LoadModelAnimations(Php::Parameters &params) {
        string p0 = params[0];
        int p1 = 0;
        ::ModelAnimation *result = ::LoadModelAnimations(p0.c_str(), &p1);
        return Php::Object("RayLib\\StructArray",
                           new StructArray<::ModelAnimation, ModelAnimation>(
                               "RayLib\\ModelAnimation", result, p1));
    }

    static void UpdateModelAnimation(Php::Parameters &params) {
        ::Model p0 = ((Model *)(params[0].implementation()))->data;
        ::ModelAnimation p1 =
            ((ModelAnimation *)(params[1].implementation()))->data;
        int p2 = params[2];
        ::UpdateModelAnimation(p0, p1, p2);
    }

    static void UnloadModelAnimation(Php::Parameters &params) {
        ::ModelAnimation p0 =
            ((ModelAnimation *)(params[0].implementation()))->data;
        ::UnloadModelAnimation(p0);
    }

    static Php::Value IsModelAnimationValid(Php::Parameters &params) {
        ::Model p0 = ((Model *)(params[0].implementation()))->data;
        ::ModelAnimation p1 =
            ((ModelAnimation *)(params[1].implementation()))->data;
        int result = ::IsModelAnimationValid(p0, p1);
        return result;
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
        ::Model p1 = ((Model *)(params[1].implementation()))->data;
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
        Shader result = ::LoadShader(params[0].isNull() ? 0 : p0.c_str(),
                                     params[1].isNull() ? 0 : p1.c_str());
        return Php::Object("RayLib\\Shader", new Shader(result));
    }

    static Php::Value LoadShaderCode(Php::Parameters &params) {
        string p0 = params[0];
        string p1 = params[1];
        Shader result = ::LoadShaderCode(params[0].isNull() ? 0 : p0.c_str(),
                                         params[1].isNull() ? 0 : p1.c_str());
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

    static Php::Value GetShapesTexture(Php::Parameters &params) {
        Texture2D result = ::GetShapesTexture();
        return Php::Object("RayLib\\Texture2D", new Texture2D(result));
    }

    static Php::Value GetShapesTextureRec(Php::Parameters &params) {
        Rectangle result = ::GetShapesTextureRec();
        return Php::Object("RayLib\\Rectangle", new Rectangle(result));
    }

    static void SetShapesTexture(Php::Parameters &params) {
        ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
        ::Rectangle p1 = ((Rectangle *)(params[1].implementation()))->data;
        ::SetShapesTexture(p0, p1);
    }

    static Php::Value GetShaderLocation(Php::Parameters &params) {
        ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
        string p1 = params[1];
        int result = ::GetShaderLocation(p0, p1.c_str());
        return result;
    }

    static void SetShaderValue(Php::Parameters &params) {
        ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
        int p1 = params[1];
        string p2 = params[2];
        int p3 = params[3];
        ::SetShaderValue(p0, p1, p2.c_str(), p3);
    }

    static void SetShaderValueV(Php::Parameters &params) {
        ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
        int p1 = params[1];
        string p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        ::SetShaderValueV(p0, p1, p2.c_str(), p3, p4);
    }

    static void SetShaderValueMatrix(Php::Parameters &params) {
        ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
        int p1 = params[1];
        ::Matrix p2 = ((Matrix *)(params[2].implementation()))->data;
        ::SetShaderValueMatrix(p0, p1, p2);
    }

    static void SetShaderValueTexture(Php::Parameters &params) {
        ::Shader p0 = ((Shader *)(params[0].implementation()))->data;
        int p1 = params[1];
        ::Texture2D p2 = ((Texture2D *)(params[2].implementation()))->data;
        ::SetShaderValueTexture(p0, p1, p2);
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

    static Php::Value GetMatrixProjection(Php::Parameters &params) {
        Matrix result = ::GetMatrixProjection();
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

    static void InitVrSimulator(Php::Parameters &params) {
        ::InitVrSimulator();
    }

    static void CloseVrSimulator(Php::Parameters &params) {
        ::CloseVrSimulator();
    }

    static void UpdateVrTracking(Php::Parameters &params) {
        ::Camera3D *p0 = &((Camera3D *)(params[0].implementation()))->data;
        ::UpdateVrTracking(p0);
    }

    static void SetVrConfiguration(Php::Parameters &params) {
        ::VrDeviceInfo p0 =
            ((VrDeviceInfo *)(params[0].implementation()))->data;
        ::Shader p1 = ((Shader *)(params[1].implementation()))->data;
        ::SetVrConfiguration(p0, p1);
    }

    static Php::Value IsVrSimulatorReady(Php::Parameters &params) {
        int result = ::IsVrSimulatorReady();
        return result;
    }

    static void ToggleVrMode(Php::Parameters &params) { ::ToggleVrMode(); }

    static void BeginVrDrawing(Php::Parameters &params) { ::BeginVrDrawing(); }

    static void EndVrDrawing(Php::Parameters &params) { ::EndVrDrawing(); }

    static void InitAudioDevice(Php::Parameters &params) {
        ::InitAudioDevice();
    }

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

    static void UpdateSound(Php::Parameters &params) {
        ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
        string p1 = params[1];
        int p2 = params[2];
        ::UpdateSound(p0, p1.data(), p2);
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

    static void StopSound(Php::Parameters &params) {
        ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
        ::StopSound(p0);
    }

    static void PauseSound(Php::Parameters &params) {
        ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
        ::PauseSound(p0);
    }

    static void ResumeSound(Php::Parameters &params) {
        ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
        ::ResumeSound(p0);
    }

    static void PlaySoundMulti(Php::Parameters &params) {
        ::Sound p0 = ((Sound *)(params[0].implementation()))->data;
        ::PlaySoundMulti(p0);
    }

    static void StopSoundMulti(Php::Parameters &params) { ::StopSoundMulti(); }

    static Php::Value GetSoundsPlaying(Php::Parameters &params) {
        int result = ::GetSoundsPlaying();
        return result;
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

    static Php::Value GetWaveData(Php::Parameters &params) {
        ::Wave p0 = ((Wave *)(params[0].implementation()))->data;
        float *result = ::GetWaveData(p0);
        return Php::Object("RayLib\\ScalarArray_float",
                           new ScalarArray<float>(result));
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

    static void UpdateAudioStream(Php::Parameters &params) {
        ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
        int p2 = params[2];
        string p1 = params[1];
        ::UpdateAudioStream(p0, p1.c_str(), p2);
    }

    static void CloseAudioStream(Php::Parameters &params) {
        ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
        ::CloseAudioStream(p0);
    }

    static Php::Value IsAudioStreamProcessed(Php::Parameters &params) {
        ::AudioStream p0 = ((AudioStream *)(params[0].implementation()))->data;
        int result = ::IsAudioStreamProcessed(p0);
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

    static void SetAudioStreamBufferSizeDefault(Php::Parameters &params) {
        int p0 = params[0];
        ::SetAudioStreamBufferSizeDefault(p0);
    }

    static Php::Value createVector2(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        return Php::Object("RayLib\\Vector2",
                           new Vector2(::Vector2{(float)p0, (float)p1}));
    }

    static Php::Value createVector3(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        return Php::Object(
            "RayLib\\Vector3",
            new Vector3(::Vector3{(float)p0, (float)p1, (float)p2}));
    }

    static Php::Value createVector4(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        return Php::Object(
            "RayLib\\Vector4",
            new Vector4(::Vector4{(float)p0, (float)p1, (float)p2, (float)p3}));
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
        return Php::Object(
            "RayLib\\Matrix",
            new Matrix(::Matrix{(float)p0, (float)p1, (float)p2, (float)p3,
                                (float)p4, (float)p5, (float)p6, (float)p7,
                                (float)p8, (float)p9, (float)p10, (float)p11,
                                (float)p12, (float)p13, (float)p14,
                                (float)p15}));
    }

    static Php::Value createColor(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        return Php::Object(
            "RayLib\\Color",
            new Color(::Color{(unsigned char)p0, (unsigned char)p1,
                              (unsigned char)p2, (unsigned char)p3}));
    }

    static Php::Value createRectangle(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        return Php::Object("RayLib\\Rectangle",
                           new Rectangle(::Rectangle{(float)p0, (float)p1,
                                                     (float)p2, (float)p3}));
    }

    static Php::Value createTexture2D(Php::Parameters &params) {
        long p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        int p4 = params[4];
        return Php::Object(
            "RayLib\\Texture2D",
            new Texture2D(::Texture2D{(unsigned int)p0, p1, p2, p3, p4}));
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
        return Php::Object("RayLib\\NPatchInfo", new NPatchInfo(::NPatchInfo{
                                                     p0, p1, p2, p3, p4, p5}));
    }

    static Php::Value createCharInfo(Php::Parameters &params) {
        int p0 = params[0];
        int p1 = params[1];
        int p2 = params[2];
        int p3 = params[3];
        ::Image p4 = ((Image *)(params[4].implementation()))->data;
        return Php::Object("RayLib\\CharInfo",
                           new CharInfo(::CharInfo{p0, p1, p2, p3, p4}));
    }

    static Php::Value createCamera3D(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
        double p3 = params[3];
        int p4 = params[4];
        return Php::Object("RayLib\\Camera3D",
                           new Camera3D(::Camera3D{p0, p1, p2, (float)p3, p4}));
    }

    static Php::Value createCamera2D(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        double p2 = params[2];
        double p3 = params[3];
        return Php::Object(
            "RayLib\\Camera2D",
            new Camera2D(::Camera2D{p0, p1, (float)p2, (float)p3}));
    }

    static Php::Value createMaterialMap(Php::Parameters &params) {
        ::Texture2D p0 = ((Texture2D *)(params[0].implementation()))->data;
        ::Color p1 = ((Color *)(params[1].implementation()))->data;
        double p2 = params[2];
        return Php::Object("RayLib\\MaterialMap",
                           new MaterialMap(::MaterialMap{p0, p1, (float)p2}));
    }

    static Php::Value createTransform(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector4 p1 = ((Vector4 *)(params[1].implementation()))->data;
        ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
        return Php::Object("RayLib\\Transform",
                           new Transform(::Transform{p0, p1, p2}));
    }

    static Php::Value createRay(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        return Php::Object("RayLib\\Ray", new Ray(::Ray{p0, p1}));
    }

    static Php::Value createRayHitInfo(Php::Parameters &params) {
        return Php::Object("RayLib\\RayHitInfo",
                           new RayHitInfo(::RayHitInfo{}));
    }

    static Php::Value createBoundingBox(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        return Php::Object("RayLib\\BoundingBox",
                           new BoundingBox(::BoundingBox{p0, p1}));
    }

    static Php::Value createSound(Php::Parameters &params) {
        long p0 = params[0];
        ::AudioStream p1 = ((AudioStream *)(params[1].implementation()))->data;
        return Php::Object("RayLib\\Sound",
                           new Sound(::Sound{(unsigned int)p0, p1}));
    }

    static Php::Value getColorLIGHTGRAY() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{200, 200, 200, 255}));
    }

    static Php::Value getColorGRAY() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{130, 130, 130, 255}));
    }

    static Php::Value getColorDARKGRAY() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{80, 80, 80, 255}));
    }

    static Php::Value getColorYELLOW() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{253, 249, 0, 255}));
    }

    static Php::Value getColorGOLD() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{255, 203, 0, 255}));
    }

    static Php::Value getColorORANGE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{255, 161, 0, 255}));
    }

    static Php::Value getColorPINK() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{255, 109, 194, 255}));
    }

    static Php::Value getColorRED() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{230, 41, 55, 255}));
    }

    static Php::Value getColorMAROON() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{190, 33, 55, 255}));
    }

    static Php::Value getColorGREEN() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{0, 228, 48, 255}));
    }

    static Php::Value getColorLIME() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{0, 158, 47, 255}));
    }

    static Php::Value getColorDARKGREEN() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{0, 117, 44, 255}));
    }

    static Php::Value getColorSKYBLUE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{102, 191, 255, 255}));
    }

    static Php::Value getColorBLUE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{0, 121, 241, 255}));
    }

    static Php::Value getColorDARKBLUE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{0, 82, 172, 255}));
    }

    static Php::Value getColorPURPLE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{200, 122, 255, 255}));
    }

    static Php::Value getColorVIOLET() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{135, 60, 190, 255}));
    }

    static Php::Value getColorDARKPURPLE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{112, 31, 126, 255}));
    }

    static Php::Value getColorBEIGE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{211, 176, 131, 255}));
    }

    static Php::Value getColorBROWN() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{127, 106, 79, 255}));
    }

    static Php::Value getColorDARKBROWN() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{76, 63, 47, 255}));
    }

    static Php::Value getColorWHITE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{255, 255, 255, 255}));
    }

    static Php::Value getColorBLACK() {
        return Php::Object("RayLib\\Color", new Color(::Color{0, 0, 0, 255}));
    }

    static Php::Value getColorBLANK() {
        return Php::Object("RayLib\\Color", new Color(::Color{0, 0, 0, 0}));
    }

    static Php::Value getColorMAGENTA() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{255, 0, 255, 255}));
    }

    static Php::Value getColorRAYWHITE() {
        return Php::Object("RayLib\\Color",
                           new Color(::Color{245, 245, 245, 255}));
    }

    static Php::Value Clamp(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double result = ::Clamp(p0, p1, p2);
        return result;
    }

    static Php::Value Lerp(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double result = ::Lerp(p0, p1, p2);
        return result;
    }

    static Php::Value Vector2Zero(Php::Parameters &params) {
        Vector2 result = ::Vector2Zero();
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2One(Php::Parameters &params) {
        Vector2 result = ::Vector2One();
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Add(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        Vector2 result = ::Vector2Add(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Subtract(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        Vector2 result = ::Vector2Subtract(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Length(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double result = ::Vector2Length(p0);
        return result;
    }

    static Php::Value Vector2DotProduct(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        double result = ::Vector2DotProduct(p0, p1);
        return result;
    }

    static Php::Value Vector2Distance(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        double result = ::Vector2Distance(p0, p1);
        return result;
    }

    static Php::Value Vector2Angle(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        double result = ::Vector2Angle(p0, p1);
        return result;
    }

    static Php::Value Vector2Scale(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Vector2 result = ::Vector2Scale(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2MultiplyV(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        Vector2 result = ::Vector2MultiplyV(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Negate(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        Vector2 result = ::Vector2Negate(p0);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Divide(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Vector2 result = ::Vector2Divide(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2DivideV(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        Vector2 result = ::Vector2DivideV(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Normalize(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        Vector2 result = ::Vector2Normalize(p0);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Lerp(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[1].implementation()))->data;
        double p2 = params[2];
        Vector2 result = ::Vector2Lerp(p0, p1, p2);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector2Rotate(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Vector2 result = ::Vector2Rotate(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static Php::Value Vector3Zero(Php::Parameters &params) {
        Vector3 result = ::Vector3Zero();
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3One(Php::Parameters &params) {
        Vector3 result = ::Vector3One();
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Add(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Add(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Subtract(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Subtract(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Scale(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Vector3 result = ::Vector3Scale(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Multiply(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Multiply(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3CrossProduct(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3CrossProduct(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Perpendicular(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        Vector3 result = ::Vector3Perpendicular(p0);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Length(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        double result = ::Vector3Length(p0);
        return result;
    }

    static Php::Value Vector3DotProduct(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        double result = ::Vector3DotProduct(p0, p1);
        return result;
    }

    static Php::Value Vector3Distance(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        double result = ::Vector3Distance(p0, p1);
        return result;
    }

    static Php::Value Vector3Negate(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        Vector3 result = ::Vector3Negate(p0);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Divide(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Vector3 result = ::Vector3Divide(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3DivideV(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3DivideV(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Normalize(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        Vector3 result = ::Vector3Normalize(p0);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static void Vector3OrthoNormalize(Php::Parameters &params) {
        ::Vector3 *p0 = &((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 *p1 = &((Vector3 *)(params[1].implementation()))->data;
        ::Vector3OrthoNormalize(p0, p1);
    }

    static Php::Value Vector3Transform(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Matrix p1 = ((Matrix *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Transform(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3RotateByQuaternion(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector4 p1 = ((Vector4 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3RotateByQuaternion(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Lerp(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        double p2 = params[2];
        Vector3 result = ::Vector3Lerp(p0, p1, p2);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Reflect(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Reflect(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Min(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Min(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Max(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector3 result = ::Vector3Max(p0, p1);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3Barycenter(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
        ::Vector3 p3 = ((Vector3 *)(params[3].implementation()))->data;
        Vector3 result = ::Vector3Barycenter(p0, p1, p2, p3);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value Vector3ToFloatV(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        float3 result = ::Vector3ToFloatV(p0);
        return Php::Object("RayLib\\float3", new float3(result));
    }

    static Php::Value MatrixDeterminant(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        double result = ::MatrixDeterminant(p0);
        return result;
    }

    static Php::Value MatrixTrace(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        double result = ::MatrixTrace(p0);
        return result;
    }

    static Php::Value MatrixTranspose(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        Matrix result = ::MatrixTranspose(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixInvert(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        Matrix result = ::MatrixInvert(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixNormalize(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        Matrix result = ::MatrixNormalize(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixIdentity(Php::Parameters &params) {
        Matrix result = ::MatrixIdentity();
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixAdd(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        ::Matrix p1 = ((Matrix *)(params[1].implementation()))->data;
        Matrix result = ::MatrixAdd(p0, p1);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixSubtract(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        ::Matrix p1 = ((Matrix *)(params[1].implementation()))->data;
        Matrix result = ::MatrixSubtract(p0, p1);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixTranslate(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        Matrix result = ::MatrixTranslate(p0, p1, p2);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixRotate(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Matrix result = ::MatrixRotate(p0, p1);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixRotateXYZ(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        Matrix result = ::MatrixRotateXYZ(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixRotateX(Php::Parameters &params) {
        double p0 = params[0];
        Matrix result = ::MatrixRotateX(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixRotateY(Php::Parameters &params) {
        double p0 = params[0];
        Matrix result = ::MatrixRotateY(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixRotateZ(Php::Parameters &params) {
        double p0 = params[0];
        Matrix result = ::MatrixRotateZ(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixScale(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        Matrix result = ::MatrixScale(p0, p1, p2);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixMultiply(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        ::Matrix p1 = ((Matrix *)(params[1].implementation()))->data;
        Matrix result = ::MatrixMultiply(p0, p1);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixFrustum(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        double p4 = params[4];
        double p5 = params[5];
        Matrix result = ::MatrixFrustum(p0, p1, p2, p3, p4, p5);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixPerspective(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        Matrix result = ::MatrixPerspective(p0, p1, p2, p3);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixOrtho(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        double p4 = params[4];
        double p5 = params[5];
        Matrix result = ::MatrixOrtho(p0, p1, p2, p3, p4, p5);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixLookAt(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        ::Vector3 p2 = ((Vector3 *)(params[2].implementation()))->data;
        Matrix result = ::MatrixLookAt(p0, p1, p2);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value MatrixToFloatV(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        float16 result = ::MatrixToFloatV(p0);
        return Php::Object("RayLib\\float16", new float16(result));
    }

    static Php::Value QuaternionIdentity(Php::Parameters &params) {
        Vector4 result = ::QuaternionIdentity();
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionLength(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        double result = ::QuaternionLength(p0);
        return result;
    }

    static Php::Value QuaternionNormalize(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        Vector4 result = ::QuaternionNormalize(p0);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionInvert(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        Vector4 result = ::QuaternionInvert(p0);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionMultiply(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        ::Vector4 p1 = ((Vector4 *)(params[1].implementation()))->data;
        Vector4 result = ::QuaternionMultiply(p0, p1);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionLerp(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        ::Vector4 p1 = ((Vector4 *)(params[1].implementation()))->data;
        double p2 = params[2];
        Vector4 result = ::QuaternionLerp(p0, p1, p2);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionNlerp(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        ::Vector4 p1 = ((Vector4 *)(params[1].implementation()))->data;
        double p2 = params[2];
        Vector4 result = ::QuaternionNlerp(p0, p1, p2);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionSlerp(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        ::Vector4 p1 = ((Vector4 *)(params[1].implementation()))->data;
        double p2 = params[2];
        Vector4 result = ::QuaternionSlerp(p0, p1, p2);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionFromVector3ToVector3(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        ::Vector3 p1 = ((Vector3 *)(params[1].implementation()))->data;
        Vector4 result = ::QuaternionFromVector3ToVector3(p0, p1);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionFromMatrix(Php::Parameters &params) {
        ::Matrix p0 = ((Matrix *)(params[0].implementation()))->data;
        Vector4 result = ::QuaternionFromMatrix(p0);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionToMatrix(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        Matrix result = ::QuaternionToMatrix(p0);
        return Php::Object("RayLib\\Matrix", new Matrix(result));
    }

    static Php::Value QuaternionFromAxisAngle(Php::Parameters &params) {
        ::Vector3 p0 = ((Vector3 *)(params[0].implementation()))->data;
        double p1 = params[1];
        Vector4 result = ::QuaternionFromAxisAngle(p0, p1);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static void QuaternionToAxisAngle(Php::Parameters &params) {
        // ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        // ::Vector3 *p1 = &((Vector3 *)(params[1].implementation()))->data;
        // Pointer to scalar as argument is not supported
        // ::QuaternionToAxisAngle(p0, p1, p2);
    }

    static Php::Value QuaternionFromEuler(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        double p2 = params[2];
        Vector4 result = ::QuaternionFromEuler(p0, p1, p2);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static Php::Value QuaternionToEuler(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        Vector3 result = ::QuaternionToEuler(p0);
        return Php::Object("RayLib\\Vector3", new Vector3(result));
    }

    static Php::Value QuaternionTransform(Php::Parameters &params) {
        ::Vector4 p0 = ((Vector4 *)(params[0].implementation()))->data;
        ::Matrix p1 = ((Matrix *)(params[1].implementation()))->data;
        Vector4 result = ::QuaternionTransform(p0, p1);
        return Php::Object("RayLib\\Vector4", new Vector4(result));
    }

    static void InitPhysics(Php::Parameters &params) { ::InitPhysics(); }

    static void RunPhysicsStep(Php::Parameters &params) { ::RunPhysicsStep(); }

    static void SetPhysicsTimeStep(Php::Parameters &params) {
        double p0 = params[0];
        ::SetPhysicsTimeStep(p0);
    }

    static Php::Value IsPhysicsEnabled(Php::Parameters &params) {
        int result = ::IsPhysicsEnabled();
        return result;
    }

    static void SetPhysicsGravity(Php::Parameters &params) {
        double p0 = params[0];
        double p1 = params[1];
        ::SetPhysicsGravity(p0, p1);
    }

    static Php::Value CreatePhysicsBodyCircle(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        double p2 = params[2];
        PhysicsBody result = ::CreatePhysicsBodyCircle(p0, p1, p2);
        return Php::Object("RayLib\\PhysicsBody", new PhysicsBody(result));
    }

    static Php::Value CreatePhysicsBodyRectangle(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        double p2 = params[2];
        double p3 = params[3];
        PhysicsBody result = ::CreatePhysicsBodyRectangle(p0, p1, p2, p3);
        return Php::Object("RayLib\\PhysicsBody", new PhysicsBody(result));
    }

    static Php::Value CreatePhysicsBodyPolygon(Php::Parameters &params) {
        ::Vector2 p0 = ((Vector2 *)(params[0].implementation()))->data;
        double p1 = params[1];
        int p2 = params[2];
        double p3 = params[3];
        PhysicsBody result = ::CreatePhysicsBodyPolygon(p0, p1, p2, p3);
        return Php::Object("RayLib\\PhysicsBody", new PhysicsBody(result));
    }

    static void PhysicsAddForce(Php::Parameters &params) {
        ::PhysicsBody p0 =
            ((rlPhysicsBody *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[0].implementation()))->data;
        ::PhysicsAddForce(p0, p1);
    }

    static void PhysicsAddTorque(Php::Parameters &params) {
        ::PhysicsBody p0 =
            ((rlPhysicsBody *)(params[0].implementation()))->data;
        double p1 = params[1];
        ::PhysicsAddTorque(p0, p1);
    }

    static void PhysicsShatter(Php::Parameters &params) {
        ::PhysicsBody p0 =
            ((rlPhysicsBody *)(params[0].implementation()))->data;
        ::Vector2 p1 = ((Vector2 *)(params[0].implementation()))->data;
        double p2 = params[2];
        ::PhysicsShatter(p0, p1, p2);
    }

    static Php::Value GetPhysicsBodiesCount(Php::Parameters &params) {
        int result = ::GetPhysicsBodiesCount();
        return result;
    }

    static Php::Value GetPhysicsBody(Php::Parameters &params) {
        int p0 = params[0];
        PhysicsBody result = ::GetPhysicsBody(p0);
        return Php::Object("RayLib\\PhysicsBody", new PhysicsBody(result));
    }

    static Php::Value GetPhysicsShapeType(Php::Parameters &params) {
        int p0 = params[0];
        int result = ::GetPhysicsShapeType(p0);
        return result;
    }

    static Php::Value GetPhysicsShapeVerticesCount(Php::Parameters &params) {
        int p0 = params[0];
        int result = ::GetPhysicsShapeVerticesCount(p0);
        return result;
    }

    static Php::Value GetPhysicsShapeVertex(Php::Parameters &params) {
        ::PhysicsBody p0 =
            ((rlPhysicsBody *)(params[0].implementation()))->data;
        int p1 = params[1];
        ::Vector2 result = ::GetPhysicsShapeVertex(p0, p1);
        return Php::Object("RayLib\\Vector2", new Vector2(result));
    }

    static void SetPhysicsBodyRotation(Php::Parameters &params) {
        ::PhysicsBody p0 =
            ((rlPhysicsBody *)(params[0].implementation()))->data;
        double p1 = params[1];
        ::SetPhysicsBodyRotation(p0, p1);
    }

    static void DestroyPhysicsBody(Php::Parameters &params) {
        ::PhysicsBody p0 =
            ((rlPhysicsBody *)(params[0].implementation()))->data;
        ::DestroyPhysicsBody(p0);
    }

    static void ResetPhysics(Php::Parameters &params) { ::ResetPhysics(); }

    static void ClosePhysics(Php::Parameters &params) { ::ClosePhysics(); }
};

// symbols are exported according to the "C" language
extern "C" {
// export the "get_module" function that will be called by the Zend engine
PHPCPP_EXPORT void *get_module() {
    // create extension
    static Php::Extension extension("raylib", "1.0");

    Php::Namespace rlNamespace("RayLib");

    Php::Class<RL> rlClass("RL");

    Php::Class<ScalarArray<float>> scalarArrayFloat("ScalarArray_float");
    rlNamespace.add(scalarArrayFloat);

    Php::Class<StructArray<::Color, Color>> structArrayColor(
        "StructArray_Color");
    rlNamespace.add(structArrayColor);

    Php::Class<StructArray<::Vector4, Vector4>> structArrayVector4(
        "StructArray_Vector4");
    rlNamespace.add(structArrayVector4);

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
    rlRectangle.property("height", &Rectangle::getheight,
                         &Rectangle::setheight);

    Php::Class<Image> rlImage("Image");
    rlNamespace.add(rlImage);
    rlImage.property("data", &Image::getdata, &Image::setdata);
    rlImage.property("width", &Image::getwidth, &Image::setwidth);
    rlImage.property("height", &Image::getheight, &Image::setheight);
    rlImage.property("mipmaps", &Image::getmipmaps, &Image::setmipmaps);
    rlImage.property("format", &Image::getformat, &Image::setformat);

    Php::Class<Texture2D> rlTexture2D("Texture2D");
    rlNamespace.add(rlTexture2D);
    rlTexture2D.property("id", &Texture2D::getid, &Texture2D::setid);
    rlTexture2D.property("width", &Texture2D::getwidth, &Texture2D::setwidth);
    rlTexture2D.property("height", &Texture2D::getheight,
                         &Texture2D::setheight);
    rlTexture2D.property("mipmaps", &Texture2D::getmipmaps,
                         &Texture2D::setmipmaps);
    rlTexture2D.property("format", &Texture2D::getformat,
                         &Texture2D::setformat);

    Php::Class<RenderTexture2D> rlRenderTexture2D("RenderTexture2D");
    rlRenderTexture2D.property("id", &RenderTexture2D::getid,
                               &RenderTexture2D::setid);
    rlRenderTexture2D.property("texture", &RenderTexture2D::gettexture,
                               &RenderTexture2D::settexture);
    rlRenderTexture2D.property("depth", &RenderTexture2D::getdepth,
                               &RenderTexture2D::setdepth);
    rlRenderTexture2D.property("depthTexture",
                               &RenderTexture2D::getdepthTexture,
                               &RenderTexture2D::setdepthTexture);
    rlNamespace.add(rlRenderTexture2D);

    Php::Class<NPatchInfo> rlNPatchInfo("NPatchInfo");
    rlNamespace.add(rlNPatchInfo);
    rlNPatchInfo.property("sourceRec", &NPatchInfo::getsourceRec,
                          &NPatchInfo::setsourceRec);
    rlNPatchInfo.property("left", &NPatchInfo::getleft, &NPatchInfo::setleft);
    rlNPatchInfo.property("top", &NPatchInfo::gettop, &NPatchInfo::settop);
    rlNPatchInfo.property("right", &NPatchInfo::getright,
                          &NPatchInfo::setright);
    rlNPatchInfo.property("bottom", &NPatchInfo::getbottom,
                          &NPatchInfo::setbottom);
    rlNPatchInfo.property("type", &NPatchInfo::gettype, &NPatchInfo::settype);

    Php::Class<CharInfo> rlCharInfo("CharInfo");
    rlNamespace.add(rlCharInfo);
    rlCharInfo.property("value", &CharInfo::getvalue, &CharInfo::setvalue);
    rlCharInfo.property("offsetX", &CharInfo::getoffsetX,
                        &CharInfo::setoffsetX);
    rlCharInfo.property("offsetY", &CharInfo::getoffsetY,
                        &CharInfo::setoffsetY);
    rlCharInfo.property("advanceX", &CharInfo::getadvanceX,
                        &CharInfo::setadvanceX);
    rlCharInfo.property("image", &CharInfo::getimage, &CharInfo::setimage);

    Php::Class<Font> rlFont("Font");
    rlNamespace.add(rlFont);
    rlFont.property("baseSize", &Font::getbaseSize, &Font::setbaseSize);
    rlFont.property("charsCount", &Font::getcharsCount, &Font::setcharsCount);
    rlFont.property("texture", &Font::gettexture, &Font::settexture);

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

    Php::Class<Mesh> rlMesh("Mesh");
    rlNamespace.add(rlMesh);
    rlMesh.property("vertexCount", &Mesh::getvertexCount,
                    &Mesh::setvertexCount);
    rlMesh.property("triangleCount", &Mesh::gettriangleCount,
                    &Mesh::settriangleCount);
    rlMesh.property("vaoId", &Mesh::getvaoId, &Mesh::setvaoId);
    rlMesh.property("vertices", &Mesh::getvertices, &Mesh::setvertices);
    rlMesh.property("texcoords", &Mesh::gettexcoords, &Mesh::settexcoords);
    rlMesh.property("texcoords2", &Mesh::gettexcoords2, &Mesh::settexcoords2);
    rlMesh.property("normals", &Mesh::getnormals, &Mesh::setnormals);
    rlMesh.property("tangents", &Mesh::gettangents, &Mesh::settangents);
    rlMesh.property("colors", &Mesh::getcolors, &Mesh::setcolors);
    rlMesh.property("indices", &Mesh::getindices, &Mesh::setindices);
    rlMesh.property("animVertices", &Mesh::getanimVertices,
                    &Mesh::setanimVertices);
    rlMesh.property("animNormals", &Mesh::getanimNormals,
                    &Mesh::setanimNormals);
    rlMesh.property("boneIds", &Mesh::getboneIds, &Mesh::setboneIds);
    rlMesh.property("boneWeights", &Mesh::getboneWeights,
                    &Mesh::setboneWeights);
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
    rlMaterial.property("params", &Material::getparams, &Material::setparams);

    Php::Class<Transform> rlTransform("Transform");
    rlNamespace.add(rlTransform);
    rlTransform.property("translation", &Transform::gettranslation,
                         &Transform::settranslation);
    rlTransform.property("rotation", &Transform::getrotation,
                         &Transform::setrotation);
    rlTransform.property("scale", &Transform::getscale, &Transform::setscale);

    Php::Class<BoneInfo> rlBoneInfo("BoneInfo");
    rlNamespace.add(rlBoneInfo);
    rlBoneInfo.property("name", &BoneInfo::getname, &BoneInfo::setname);
    rlBoneInfo.property("parent", &BoneInfo::getparent, &BoneInfo::setparent);

    Php::Class<Model> rlModel("Model");
    rlNamespace.add(rlModel);
    rlModel.property("transform", &Model::gettransform, &Model::settransform);
    rlModel.property("meshCount", &Model::getmeshCount, &Model::setmeshCount);
    rlModel.property("meshes", &Model::getmeshes, &Model::setmeshes);
    rlModel.property("materialCount", &Model::getmaterialCount,
                     &Model::setmaterialCount);
    rlModel.property("materials", &Model::getmaterials, &Model::setmaterials);
    rlModel.property("boneCount", &Model::getboneCount, &Model::setboneCount);

    Php::Class<ModelAnimation> rlModelAnimation("ModelAnimation");
    rlNamespace.add(rlModelAnimation);
    rlModelAnimation.property("boneCount", &ModelAnimation::getboneCount,
                              &ModelAnimation::setboneCount);
    rlModelAnimation.property("frameCount", &ModelAnimation::getframeCount,
                              &ModelAnimation::setframeCount);

    Php::Class<Ray> rlRay("Ray");
    rlNamespace.add(rlRay);
    rlRay.property("position", &Ray::getposition, &Ray::setposition);
    rlRay.property("direction", &Ray::getdirection, &Ray::setdirection);

    Php::Class<RayHitInfo> rlRayHitInfo("RayHitInfo");
    rlNamespace.add(rlRayHitInfo);

    Php::Class<BoundingBox> rlBoundingBox("BoundingBox");
    rlNamespace.add(rlBoundingBox);
    rlBoundingBox.property("min", &BoundingBox::getmin, &BoundingBox::setmin);
    rlBoundingBox.property("max", &BoundingBox::getmax, &BoundingBox::setmax);

    Php::Class<Wave> rlWave("Wave");
    rlNamespace.add(rlWave);
    rlWave.property("sampleCount", &Wave::getsampleCount,
                    &Wave::setsampleCount);
    rlWave.property("sampleRate", &Wave::getsampleRate, &Wave::setsampleRate);
    rlWave.property("sampleSize", &Wave::getsampleSize, &Wave::setsampleSize);
    rlWave.property("channels", &Wave::getchannels, &Wave::setchannels);

    // Php::Class<rAudioBuffer> rlrAudioBuffer("rAudioBuffer");
    // rlNamespace.add(rlrAudioBuffer);

    Php::Class<AudioStream> rlAudioStream("AudioStream");
    rlNamespace.add(rlAudioStream);
    rlAudioStream.property("sampleRate", &AudioStream::getsampleRate,
                           &AudioStream::setsampleRate);
    rlAudioStream.property("sampleSize", &AudioStream::getsampleSize,
                           &AudioStream::setsampleSize);
    rlAudioStream.property("channels", &AudioStream::getchannels,
                           &AudioStream::setchannels);

    Php::Class<Sound> rlSound("Sound");
    rlNamespace.add(rlSound);
    rlSound.property("sampleCount", &Sound::getsampleCount,
                     &Sound::setsampleCount);
    rlSound.property("stream", &Sound::getstream, &Sound::setstream);

    Php::Class<Music> rlMusic("Music");
    rlNamespace.add(rlMusic);
    rlMusic.property("ctxType", &Music::getctxType, &Music::setctxType);
    rlMusic.property("sampleCount", &Music::getsampleCount,
                     &Music::setsampleCount);
    rlMusic.property("loopCount", &Music::getloopCount, &Music::setloopCount);
    rlMusic.property("stream", &Music::getstream, &Music::setstream);

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

    Php::Class<TraceLogCallback> rlTraceLogCallback("TraceLogCallback");
    rlNamespace.add(rlTraceLogCallback);

    extension.add<&RL::InitWindow>("InitWindow");
    extension.add<&RL::WindowShouldClose>("WindowShouldClose");
    extension.add<&RL::CloseWindow>("CloseWindow");
    extension.add<&RL::IsWindowReady>("IsWindowReady");
    extension.add<&RL::IsWindowMinimized>("IsWindowMinimized");
    extension.add<&RL::IsWindowResized>("IsWindowResized");
    extension.add<&RL::IsWindowHidden>("IsWindowHidden");
    extension.add<&RL::IsWindowFullscreen>("IsWindowFullscreen");
    extension.add<&RL::ToggleFullscreen>("ToggleFullscreen");
    extension.add<&RL::UnhideWindow>("UnhideWindow");
    extension.add<&RL::HideWindow>("HideWindow");
    extension.add<&RL::SetWindowIcon>("SetWindowIcon");
    extension.add<&RL::SetWindowTitle>("SetWindowTitle");
    extension.add<&RL::SetWindowPosition>("SetWindowPosition");
    extension.add<&RL::SetWindowMonitor>("SetWindowMonitor");
    extension.add<&RL::SetWindowMinSize>("SetWindowMinSize");
    extension.add<&RL::SetWindowSize>("SetWindowSize");
    // GetWindowHandle is not supported
    extension.add<&RL::GetScreenWidth>("GetScreenWidth");
    extension.add<&RL::GetScreenHeight>("GetScreenHeight");
    extension.add<&RL::GetMonitorCount>("GetMonitorCount");
    extension.add<&RL::GetMonitorWidth>("GetMonitorWidth");
    extension.add<&RL::GetMonitorHeight>("GetMonitorHeight");
    extension.add<&RL::GetMonitorPhysicalWidth>("GetMonitorPhysicalWidth");
    extension.add<&RL::GetMonitorPhysicalHeight>("GetMonitorPhysicalHeight");
    extension.add<&RL::GetWindowPosition>("GetWindowPosition");
    extension.add<&RL::GetMonitorName>("GetMonitorName");
    extension.add<&RL::GetClipboardText>("GetClipboardText");
    extension.add<&RL::SetClipboardText>("SetClipboardText");
    extension.add<&RL::ShowCursor>("ShowCursor");
    extension.add<&RL::HideCursor>("HideCursor");
    extension.add<&RL::IsCursorHidden>("IsCursorHidden");
    extension.add<&RL::EnableCursor>("EnableCursor");
    extension.add<&RL::DisableCursor>("DisableCursor");
    extension.add<&RL::ClearBackground>("ClearBackground");
    extension.add<&RL::BeginDrawing>("BeginDrawing");
    extension.add<&RL::EndDrawing>("EndDrawing");
    extension.add<&RL::BeginMode2D>("BeginMode2D");
    extension.add<&RL::EndMode2D>("EndMode2D");
    extension.add<&RL::BeginMode3D>("BeginMode3D");
    extension.add<&RL::EndMode3D>("EndMode3D");
    extension.add<&RL::BeginTextureMode>("BeginTextureMode");
    extension.add<&RL::EndTextureMode>("EndTextureMode");
    extension.add<&RL::BeginScissorMode>("BeginScissorMode");
    extension.add<&RL::EndScissorMode>("EndScissorMode");
    extension.add<&RL::GetMouseRay>("GetMouseRay");
    extension.add<&RL::GetCameraMatrix>("GetCameraMatrix");
    extension.add<&RL::GetCameraMatrix2D>("GetCameraMatrix2D");
    extension.add<&RL::GetWorldToScreen>("GetWorldToScreen");
    extension.add<&RL::GetWorldToScreenEx>("GetWorldToScreenEx");
    extension.add<&RL::GetWorldToScreen2D>("GetWorldToScreen2D");
    extension.add<&RL::GetScreenToWorld2D>("GetScreenToWorld2D");
    extension.add<&RL::SetTargetFPS>("SetTargetFPS");
    extension.add<&RL::GetFPS>("GetFPS");
    extension.add<&RL::GetFrameTime>("GetFrameTime");
    extension.add<&RL::GetTime>("GetTime");
    extension.add<&RL::ColorToInt>("ColorToInt");
    extension.add<&RL::ColorNormalize>("ColorNormalize");
    extension.add<&RL::ColorFromNormalized>("ColorFromNormalized");
    extension.add<&RL::ColorToHSV>("ColorToHSV");
    extension.add<&RL::ColorFromHSV>("ColorFromHSV");
    extension.add<&RL::GetColor>("GetColor");
    extension.add<&RL::Fade>("Fade");
    extension.add<&RL::SetConfigFlags>("SetConfigFlags");
    extension.add<&RL::SetTraceLogLevel>("SetTraceLogLevel");
    extension.add<&RL::SetTraceLogExit>("SetTraceLogExit");
    extension.add<&RL::SetTraceLogCallback>("SetTraceLogCallback");
    extension.add<&RL::TraceLog>("TraceLog");
    extension.add<&RL::TakeScreenshot>("TakeScreenshot");
    extension.add<&RL::GetRandomValue>("GetRandomValue");
    // LoadFileData is not supported
    extension.add<&RL::SaveFileData>("SaveFileData");
    extension.add<&RL::LoadFileText>("LoadFileText");
    extension.add<&RL::SaveFileText>("SaveFileText");
    extension.add<&RL::FileExists>("FileExists");
    extension.add<&RL::IsFileExtension>("IsFileExtension");
    extension.add<&RL::DirectoryExists>("DirectoryExists");
    extension.add<&RL::GetExtension>("GetExtension");
    extension.add<&RL::GetFileName>("GetFileName");
    extension.add<&RL::GetFileNameWithoutExt>("GetFileNameWithoutExt");
    extension.add<&RL::GetDirectoryPath>("GetDirectoryPath");
    extension.add<&RL::GetPrevDirectoryPath>("GetPrevDirectoryPath");
    extension.add<&RL::GetWorkingDirectory>("GetWorkingDirectory");
    // GetDirectoryFiles is not supported
    extension.add<&RL::ClearDirectoryFiles>("ClearDirectoryFiles");
    extension.add<&RL::ChangeDirectory>("ChangeDirectory");
    extension.add<&RL::IsFileDropped>("IsFileDropped");
    extension.add<&RL::GetDroppedFiles>("GetDroppedFiles");
    extension.add<&RL::ClearDroppedFiles>("ClearDroppedFiles");
    extension.add<&RL::GetFileModTime>("GetFileModTime");
    // CompressData is not supported
    // DecompressData is not supported
    extension.add<&RL::SaveStorageValue>("SaveStorageValue");
    extension.add<&RL::LoadStorageValue>("LoadStorageValue");
    extension.add<&RL::OpenURL>("OpenURL");
    extension.add<&RL::IsKeyPressed>("IsKeyPressed");
    extension.add<&RL::IsKeyDown>("IsKeyDown");
    extension.add<&RL::IsKeyReleased>("IsKeyReleased");
    extension.add<&RL::IsKeyUp>("IsKeyUp");
    extension.add<&RL::SetExitKey>("SetExitKey");
    extension.add<&RL::GetKeyPressed>("GetKeyPressed");
    extension.add<&RL::IsGamepadAvailable>("IsGamepadAvailable");
    extension.add<&RL::IsGamepadName>("IsGamepadName");
    extension.add<&RL::GetGamepadName>("GetGamepadName");
    extension.add<&RL::IsGamepadButtonPressed>("IsGamepadButtonPressed");
    extension.add<&RL::IsGamepadButtonDown>("IsGamepadButtonDown");
    extension.add<&RL::IsGamepadButtonReleased>("IsGamepadButtonReleased");
    extension.add<&RL::IsGamepadButtonUp>("IsGamepadButtonUp");
    extension.add<&RL::GetGamepadButtonPressed>("GetGamepadButtonPressed");
    extension.add<&RL::GetGamepadAxisCount>("GetGamepadAxisCount");
    extension.add<&RL::GetGamepadAxisMovement>("GetGamepadAxisMovement");
    extension.add<&RL::IsMouseButtonPressed>("IsMouseButtonPressed");
    extension.add<&RL::IsMouseButtonDown>("IsMouseButtonDown");
    extension.add<&RL::IsMouseButtonReleased>("IsMouseButtonReleased");
    extension.add<&RL::IsMouseButtonUp>("IsMouseButtonUp");
    extension.add<&RL::GetMouseX>("GetMouseX");
    extension.add<&RL::GetMouseY>("GetMouseY");
    extension.add<&RL::GetMousePosition>("GetMousePosition");
    extension.add<&RL::SetMousePosition>("SetMousePosition");
    extension.add<&RL::SetMouseOffset>("SetMouseOffset");
    extension.add<&RL::SetMouseScale>("SetMouseScale");
    extension.add<&RL::GetMouseWheelMove>("GetMouseWheelMove");
    extension.add<&RL::GetTouchX>("GetTouchX");
    extension.add<&RL::GetTouchY>("GetTouchY");
    extension.add<&RL::GetTouchPosition>("GetTouchPosition");
    extension.add<&RL::SetGesturesEnabled>("SetGesturesEnabled");
    extension.add<&RL::IsGestureDetected>("IsGestureDetected");
    extension.add<&RL::GetGestureDetected>("GetGestureDetected");
    extension.add<&RL::GetTouchPointsCount>("GetTouchPointsCount");
    extension.add<&RL::GetGestureHoldDuration>("GetGestureHoldDuration");
    extension.add<&RL::GetGestureDragVector>("GetGestureDragVector");
    extension.add<&RL::GetGestureDragAngle>("GetGestureDragAngle");
    extension.add<&RL::GetGesturePinchVector>("GetGesturePinchVector");
    extension.add<&RL::GetGesturePinchAngle>("GetGesturePinchAngle");
    extension.add<&RL::SetCameraMode>("SetCameraMode");
    extension.add<&RL::UpdateCamera>("UpdateCamera");
    extension.add<&RL::SetCameraPanControl>("SetCameraPanControl");
    extension.add<&RL::SetCameraAltControl>("SetCameraAltControl");
    extension.add<&RL::SetCameraSmoothZoomControl>(
        "SetCameraSmoothZoomControl");
    extension.add<&RL::SetCameraMoveControls>("SetCameraMoveControls");
    extension.add<&RL::DrawPixel>("DrawPixel");
    extension.add<&RL::DrawPixelV>("DrawPixelV");
    extension.add<&RL::DrawLine>("DrawLine");
    extension.add<&RL::DrawLineV>("DrawLineV");
    extension.add<&RL::DrawLineEx>("DrawLineEx");
    extension.add<&RL::DrawLineBezier>("DrawLineBezier");
    extension.add<&RL::DrawLineStrip>("DrawLineStrip");
    extension.add<&RL::DrawCircle>("DrawCircle");
    extension.add<&RL::DrawCircleSector>("DrawCircleSector");
    extension.add<&RL::DrawCircleSectorLines>("DrawCircleSectorLines");
    extension.add<&RL::DrawCircleGradient>("DrawCircleGradient");
    extension.add<&RL::DrawCircleV>("DrawCircleV");
    extension.add<&RL::DrawCircleLines>("DrawCircleLines");
    extension.add<&RL::DrawEllipse>("DrawEllipse");
    extension.add<&RL::DrawEllipseLines>("DrawEllipseLines");
    extension.add<&RL::DrawRing>("DrawRing");
    extension.add<&RL::DrawRingLines>("DrawRingLines");
    extension.add<&RL::DrawRectangle>("DrawRectangle");
    extension.add<&RL::DrawRectangleV>("DrawRectangleV");
    extension.add<&RL::DrawRectangleRec>("DrawRectangleRec");
    extension.add<&RL::DrawRectanglePro>("DrawRectanglePro");
    extension.add<&RL::DrawRectangleGradientV>("DrawRectangleGradientV");
    extension.add<&RL::DrawRectangleGradientH>("DrawRectangleGradientH");
    extension.add<&RL::DrawRectangleGradientEx>("DrawRectangleGradientEx");
    extension.add<&RL::DrawRectangleLines>("DrawRectangleLines");
    extension.add<&RL::DrawRectangleLinesEx>("DrawRectangleLinesEx");
    extension.add<&RL::DrawRectangleRounded>("DrawRectangleRounded");
    extension.add<&RL::DrawRectangleRoundedLines>("DrawRectangleRoundedLines");
    extension.add<&RL::DrawTriangle>("DrawTriangle");
    extension.add<&RL::DrawTriangleLines>("DrawTriangleLines");
    extension.add<&RL::DrawTriangleFan>("DrawTriangleFan");
    extension.add<&RL::DrawTriangleStrip>("DrawTriangleStrip");
    extension.add<&RL::DrawPoly>("DrawPoly");
    extension.add<&RL::DrawPolyLines>("DrawPolyLines");
    extension.add<&RL::CheckCollisionRecs>("CheckCollisionRecs");
    extension.add<&RL::CheckCollisionCircles>("CheckCollisionCircles");
    extension.add<&RL::CheckCollisionCircleRec>("CheckCollisionCircleRec");
    extension.add<&RL::GetCollisionRec>("GetCollisionRec");
    extension.add<&RL::CheckCollisionPointRec>("CheckCollisionPointRec");
    extension.add<&RL::CheckCollisionPointCircle>("CheckCollisionPointCircle");
    extension.add<&RL::CheckCollisionPointTriangle>(
        "CheckCollisionPointTriangle");
    extension.add<&RL::LoadImage>("LoadImage");
    extension.add<&RL::LoadImageEx>("LoadImageEx");
    extension.add<&RL::LoadImagePro>("LoadImagePro");
    extension.add<&RL::LoadImageRaw>("LoadImageRaw");
    extension.add<&RL::UnloadImage>("UnloadImage");
    extension.add<&RL::ExportImage>("ExportImage");
    extension.add<&RL::ExportImageAsCode>("ExportImageAsCode");
    extension.add<&RL::GetImageData>("GetImageData");
    extension.add<&RL::GetImageDataNormalized>("GetImageDataNormalized");
    extension.add<&RL::GenImageColor>("GenImageColor");
    extension.add<&RL::GenImageGradientV>("GenImageGradientV");
    extension.add<&RL::GenImageGradientH>("GenImageGradientH");
    extension.add<&RL::GenImageGradientRadial>("GenImageGradientRadial");
    extension.add<&RL::GenImageChecked>("GenImageChecked");
    extension.add<&RL::GenImageWhiteNoise>("GenImageWhiteNoise");
    extension.add<&RL::GenImagePerlinNoise>("GenImagePerlinNoise");
    extension.add<&RL::GenImageCellular>("GenImageCellular");
    extension.add<&RL::ImageCopy>("ImageCopy");
    extension.add<&RL::ImageFromImage>("ImageFromImage");
    extension.add<&RL::ImageText>("ImageText");
    extension.add<&RL::ImageTextEx>("ImageTextEx");
    extension.add<&RL::ImageToPOT>("ImageToPOT");
    extension.add<&RL::ImageFormat>("ImageFormat");
    extension.add<&RL::ImageAlphaMask>("ImageAlphaMask");
    extension.add<&RL::ImageAlphaClear>("ImageAlphaClear");
    extension.add<&RL::ImageAlphaCrop>("ImageAlphaCrop");
    extension.add<&RL::ImageAlphaPremultiply>("ImageAlphaPremultiply");
    extension.add<&RL::ImageCrop>("ImageCrop");
    extension.add<&RL::ImageResize>("ImageResize");
    extension.add<&RL::ImageResizeNN>("ImageResizeNN");
    extension.add<&RL::ImageResizeCanvas>("ImageResizeCanvas");
    extension.add<&RL::ImageMipmaps>("ImageMipmaps");
    extension.add<&RL::ImageDither>("ImageDither");
    extension.add<&RL::ImageFlipVertical>("ImageFlipVertical");
    extension.add<&RL::ImageFlipHorizontal>("ImageFlipHorizontal");
    extension.add<&RL::ImageRotateCW>("ImageRotateCW");
    extension.add<&RL::ImageRotateCCW>("ImageRotateCCW");
    extension.add<&RL::ImageColorTint>("ImageColorTint");
    extension.add<&RL::ImageColorInvert>("ImageColorInvert");
    extension.add<&RL::ImageColorGrayscale>("ImageColorGrayscale");
    extension.add<&RL::ImageColorContrast>("ImageColorContrast");
    extension.add<&RL::ImageColorBrightness>("ImageColorBrightness");
    extension.add<&RL::ImageColorReplace>("ImageColorReplace");
    extension.add<&RL::ImageExtractPalette>("ImageExtractPalette");
    extension.add<&RL::GetImageAlphaBorder>("GetImageAlphaBorder");
    extension.add<&RL::ImageClearBackground>("ImageClearBackground");
    extension.add<&RL::ImageDrawPixel>("ImageDrawPixel");
    extension.add<&RL::ImageDrawPixelV>("ImageDrawPixelV");
    extension.add<&RL::ImageDrawLine>("ImageDrawLine");
    extension.add<&RL::ImageDrawLineV>("ImageDrawLineV");
    extension.add<&RL::ImageDrawCircle>("ImageDrawCircle");
    extension.add<&RL::ImageDrawCircleV>("ImageDrawCircleV");
    extension.add<&RL::ImageDrawRectangle>("ImageDrawRectangle");
    extension.add<&RL::ImageDrawRectangleV>("ImageDrawRectangleV");
    extension.add<&RL::ImageDrawRectangleRec>("ImageDrawRectangleRec");
    extension.add<&RL::ImageDrawRectangleLines>("ImageDrawRectangleLines");
    extension.add<&RL::ImageDraw>("ImageDraw");
    extension.add<&RL::ImageDrawText>("ImageDrawText");
    extension.add<&RL::ImageDrawTextEx>("ImageDrawTextEx");
    extension.add<&RL::LoadTexture>("LoadTexture");
    extension.add<&RL::LoadTextureFromImage>("LoadTextureFromImage");
    extension.add<&RL::LoadTextureCubemap>("LoadTextureCubemap");
    extension.add<&RL::LoadRenderTexture>("LoadRenderTexture");
    extension.add<&RL::UnloadTexture>("UnloadTexture");
    extension.add<&RL::UnloadRenderTexture>("UnloadRenderTexture");
    extension.add<&RL::UpdateTexture>("UpdateTexture");
    extension.add<&RL::GetTextureData>("GetTextureData");
    extension.add<&RL::GetScreenData>("GetScreenData");
    extension.add<&RL::GenTextureMipmaps>("GenTextureMipmaps");
    extension.add<&RL::SetTextureFilter>("SetTextureFilter");
    extension.add<&RL::SetTextureWrap>("SetTextureWrap");
    extension.add<&RL::DrawTexture>("DrawTexture");
    extension.add<&RL::DrawTextureV>("DrawTextureV");
    extension.add<&RL::DrawTextureEx>("DrawTextureEx");
    extension.add<&RL::DrawTextureRec>("DrawTextureRec");
    extension.add<&RL::DrawTextureQuad>("DrawTextureQuad");
    extension.add<&RL::DrawTexturePro>("DrawTexturePro");
    extension.add<&RL::DrawTextureNPatch>("DrawTextureNPatch");
    extension.add<&RL::GetPixelDataSize>("GetPixelDataSize");
    extension.add<&RL::GetFontDefault>("GetFontDefault");
    extension.add<&RL::LoadFont>("LoadFont");
    // extension.add<&RL::LoadFontEx>("LoadFontEx");
    extension.add<&RL::LoadFontFromImage>("LoadFontFromImage");
    // LoadFontData is not supported
    // extension.add<&RL::GenImageFontAtlas>("GenImageFontAtlas");
    extension.add<&RL::UnloadFont>("UnloadFont");
    extension.add<&RL::DrawFPS>("DrawFPS");
    extension.add<&RL::DrawText>("DrawText");
    extension.add<&RL::DrawTextEx>("DrawTextEx");
    extension.add<&RL::DrawTextRec>("DrawTextRec");
    extension.add<&RL::DrawTextRecEx>("DrawTextRecEx");
    extension.add<&RL::DrawTextCodepoint>("DrawTextCodepoint");
    extension.add<&RL::MeasureText>("MeasureText");
    extension.add<&RL::MeasureTextEx>("MeasureTextEx");
    extension.add<&RL::GetGlyphIndex>("GetGlyphIndex");
    // extension.add<&RL::TextCopy>("TextCopy");
    // extension.add<&RL::TextIsEqual>("TextIsEqual");
    extension.add<&RL::TextLength>("TextLength");
    extension.add<&RL::TextFormat>("TextFormat");
    extension.add<&RL::TextSubtext>("TextSubtext");
    // extension.add<&RL::TextReplace>("TextReplace");
    extension.add<&RL::TextInsert>("TextInsert");
    // extension.add<&RL::TextJoin>("TextJoin");
    // TextSplit is not supported
    // extension.add<&RL::TextAppend>("TextAppend");
    extension.add<&RL::TextFindIndex>("TextFindIndex");
    extension.add<&RL::TextToUpper>("TextToUpper");
    extension.add<&RL::TextToLower>("TextToLower");
    extension.add<&RL::TextToPascal>("TextToPascal");
    extension.add<&RL::TextToInteger>("TextToInteger");
    // extension.add<&RL::TextToUtf8>("TextToUtf8");
    // GetCodepoints is not supported
    extension.add<&RL::GetCodepointsCount>("GetCodepointsCount");
    // extension.add<&RL::GetNextCodepoint>("GetNextCodepoint");
    // extension.add<&RL::CodepointToUtf8>("CodepointToUtf8");
    extension.add<&RL::DrawLine3D>("DrawLine3D");
    extension.add<&RL::DrawPoint3D>("DrawPoint3D");
    extension.add<&RL::DrawCircle3D>("DrawCircle3D");
    extension.add<&RL::DrawCube>("DrawCube");
    extension.add<&RL::DrawCubeV>("DrawCubeV");
    extension.add<&RL::DrawCubeWires>("DrawCubeWires");
    extension.add<&RL::DrawCubeWiresV>("DrawCubeWiresV");
    extension.add<&RL::DrawCubeTexture>("DrawCubeTexture");
    extension.add<&RL::DrawSphere>("DrawSphere");
    extension.add<&RL::DrawSphereEx>("DrawSphereEx");
    extension.add<&RL::DrawSphereWires>("DrawSphereWires");
    extension.add<&RL::DrawCylinder>("DrawCylinder");
    extension.add<&RL::DrawCylinderWires>("DrawCylinderWires");
    extension.add<&RL::DrawPlane>("DrawPlane");
    extension.add<&RL::DrawRay>("DrawRay");
    extension.add<&RL::DrawGrid>("DrawGrid");
    extension.add<&RL::DrawGizmo>("DrawGizmo");
    extension.add<&RL::LoadModel>("LoadModel");
    extension.add<&RL::LoadModelFromMesh>("LoadModelFromMesh");
    extension.add<&RL::UnloadModel>("UnloadModel");
    extension.add<&RL::UnloadModel>("LoadMeshes");
    extension.add<&RL::ExportMesh>("ExportMesh");
    extension.add<&RL::UnloadMesh>("UnloadMesh");
    extension.add<&RL::UnloadMesh>("LoadMaterials");
    extension.add<&RL::LoadMaterialDefault>("LoadMaterialDefault");
    extension.add<&RL::UnloadMaterial>("UnloadMaterial");
    extension.add<&RL::SetMaterialTexture>("SetMaterialTexture");
    extension.add<&RL::SetModelMeshMaterial>("SetModelMeshMaterial");
    extension.add<&RL::SetModelMeshMaterial>("LoadModelAnimations");
    extension.add<&RL::UpdateModelAnimation>("UpdateModelAnimation");
    extension.add<&RL::UnloadModelAnimation>("UnloadModelAnimation");
    extension.add<&RL::IsModelAnimationValid>("IsModelAnimationValid");
    extension.add<&RL::GenMeshPoly>("GenMeshPoly");
    extension.add<&RL::GenMeshPlane>("GenMeshPlane");
    extension.add<&RL::GenMeshCube>("GenMeshCube");
    extension.add<&RL::GenMeshSphere>("GenMeshSphere");
    extension.add<&RL::GenMeshHemiSphere>("GenMeshHemiSphere");
    extension.add<&RL::GenMeshCylinder>("GenMeshCylinder");
    extension.add<&RL::GenMeshTorus>("GenMeshTorus");
    extension.add<&RL::GenMeshKnot>("GenMeshKnot");
    extension.add<&RL::GenMeshHeightmap>("GenMeshHeightmap");
    extension.add<&RL::GenMeshCubicmap>("GenMeshCubicmap");
    extension.add<&RL::MeshBoundingBox>("MeshBoundingBox");
    extension.add<&RL::MeshTangents>("MeshTangents");
    extension.add<&RL::MeshBinormals>("MeshBinormals");
    extension.add<&RL::DrawModel>("DrawModel");
    extension.add<&RL::DrawModelEx>("DrawModelEx");
    extension.add<&RL::DrawModelWires>("DrawModelWires");
    extension.add<&RL::DrawModelWiresEx>("DrawModelWiresEx");
    extension.add<&RL::DrawBoundingBox>("DrawBoundingBox");
    extension.add<&RL::DrawBillboard>("DrawBillboard");
    extension.add<&RL::DrawBillboardRec>("DrawBillboardRec");
    extension.add<&RL::CheckCollisionSpheres>("CheckCollisionSpheres");
    extension.add<&RL::CheckCollisionBoxes>("CheckCollisionBoxes");
    extension.add<&RL::CheckCollisionBoxSphere>("CheckCollisionBoxSphere");
    extension.add<&RL::CheckCollisionRaySphere>("CheckCollisionRaySphere");
    extension.add<&RL::CheckCollisionRaySphereEx>("CheckCollisionRaySphereEx");
    extension.add<&RL::CheckCollisionRayBox>("CheckCollisionRayBox");
    extension.add<&RL::GetCollisionRayModel>("GetCollisionRayModel");
    extension.add<&RL::GetCollisionRayTriangle>("GetCollisionRayTriangle");
    extension.add<&RL::GetCollisionRayGround>("GetCollisionRayGround");
    extension.add<&RL::LoadShader>("LoadShader");
    extension.add<&RL::LoadShaderCode>("LoadShaderCode");
    extension.add<&RL::UnloadShader>("UnloadShader");
    extension.add<&RL::GetShaderDefault>("GetShaderDefault");
    extension.add<&RL::GetTextureDefault>("GetTextureDefault");
    extension.add<&RL::GetShapesTexture>("GetShapesTexture");
    extension.add<&RL::GetShapesTextureRec>("GetShapesTextureRec");
    extension.add<&RL::SetShapesTexture>("SetShapesTexture");
    extension.add<&RL::GetShaderLocation>("GetShaderLocation");
    extension.add<&RL::SetShaderValue>("SetShaderValue");
    extension.add<&RL::SetShaderValueV>("SetShaderValueV");
    extension.add<&RL::SetShaderValueMatrix>("SetShaderValueMatrix");
    extension.add<&RL::SetShaderValueTexture>("SetShaderValueTexture");
    extension.add<&RL::SetMatrixProjection>("SetMatrixProjection");
    extension.add<&RL::SetMatrixModelview>("SetMatrixModelview");
    extension.add<&RL::GetMatrixModelview>("GetMatrixModelview");
    extension.add<&RL::GetMatrixProjection>("GetMatrixProjection");
    extension.add<&RL::GenTextureCubemap>("GenTextureCubemap");
    extension.add<&RL::GenTextureIrradiance>("GenTextureIrradiance");
    extension.add<&RL::GenTexturePrefilter>("GenTexturePrefilter");
    extension.add<&RL::GenTextureBRDF>("GenTextureBRDF");
    extension.add<&RL::BeginShaderMode>("BeginShaderMode");
    extension.add<&RL::EndShaderMode>("EndShaderMode");
    extension.add<&RL::BeginBlendMode>("BeginBlendMode");
    extension.add<&RL::EndBlendMode>("EndBlendMode");
    extension.add<&RL::InitVrSimulator>("InitVrSimulator");
    extension.add<&RL::CloseVrSimulator>("CloseVrSimulator");
    extension.add<&RL::UpdateVrTracking>("UpdateVrTracking");
    extension.add<&RL::SetVrConfiguration>("SetVrConfiguration");
    extension.add<&RL::IsVrSimulatorReady>("IsVrSimulatorReady");
    extension.add<&RL::ToggleVrMode>("ToggleVrMode");
    extension.add<&RL::BeginVrDrawing>("BeginVrDrawing");
    extension.add<&RL::EndVrDrawing>("EndVrDrawing");
    extension.add<&RL::InitAudioDevice>("InitAudioDevice");
    extension.add<&RL::CloseAudioDevice>("CloseAudioDevice");
    extension.add<&RL::IsAudioDeviceReady>("IsAudioDeviceReady");
    extension.add<&RL::SetMasterVolume>("SetMasterVolume");
    extension.add<&RL::LoadWave>("LoadWave");
    extension.add<&RL::LoadSound>("LoadSound");
    extension.add<&RL::LoadSoundFromWave>("LoadSoundFromWave");
    extension.add<&RL::UpdateSound>("UpdateSound");
    extension.add<&RL::UnloadWave>("UnloadWave");
    extension.add<&RL::UnloadSound>("UnloadSound");
    extension.add<&RL::ExportWave>("ExportWave");
    extension.add<&RL::ExportWaveAsCode>("ExportWaveAsCode");
    extension.add<&RL::PlaySound>("PlaySound");
    extension.add<&RL::StopSound>("StopSound");
    extension.add<&RL::PauseSound>("PauseSound");
    extension.add<&RL::ResumeSound>("ResumeSound");
    extension.add<&RL::PlaySoundMulti>("PlaySoundMulti");
    extension.add<&RL::StopSoundMulti>("StopSoundMulti");
    extension.add<&RL::GetSoundsPlaying>("GetSoundsPlaying");
    extension.add<&RL::IsSoundPlaying>("IsSoundPlaying");
    extension.add<&RL::SetSoundVolume>("SetSoundVolume");
    extension.add<&RL::SetSoundPitch>("SetSoundPitch");
    extension.add<&RL::WaveFormat>("WaveFormat");
    extension.add<&RL::WaveCopy>("WaveCopy");
    extension.add<&RL::WaveCrop>("WaveCrop");
    extension.add<&RL::GetWaveData>("GetWaveData");
    extension.add<&RL::LoadMusicStream>("LoadMusicStream");
    extension.add<&RL::UnloadMusicStream>("UnloadMusicStream");
    extension.add<&RL::PlayMusicStream>("PlayMusicStream");
    extension.add<&RL::UpdateMusicStream>("UpdateMusicStream");
    extension.add<&RL::StopMusicStream>("StopMusicStream");
    extension.add<&RL::PauseMusicStream>("PauseMusicStream");
    extension.add<&RL::ResumeMusicStream>("ResumeMusicStream");
    extension.add<&RL::IsMusicPlaying>("IsMusicPlaying");
    extension.add<&RL::SetMusicVolume>("SetMusicVolume");
    extension.add<&RL::SetMusicPitch>("SetMusicPitch");
    extension.add<&RL::SetMusicLoopCount>("SetMusicLoopCount");
    extension.add<&RL::GetMusicTimeLength>("GetMusicTimeLength");
    extension.add<&RL::GetMusicTimePlayed>("GetMusicTimePlayed");
    extension.add<&RL::InitAudioStream>("InitAudioStream");
    extension.add<&RL::UpdateAudioStream>("UpdateAudioStream");
    extension.add<&RL::CloseAudioStream>("CloseAudioStream");
    extension.add<&RL::IsAudioStreamProcessed>("IsAudioStreamProcessed");
    extension.add<&RL::PlayAudioStream>("PlayAudioStream");
    extension.add<&RL::PauseAudioStream>("PauseAudioStream");
    extension.add<&RL::ResumeAudioStream>("ResumeAudioStream");
    extension.add<&RL::IsAudioStreamPlaying>("IsAudioStreamPlaying");
    extension.add<&RL::StopAudioStream>("StopAudioStream");
    extension.add<&RL::SetAudioStreamVolume>("SetAudioStreamVolume");
    extension.add<&RL::SetAudioStreamPitch>("SetAudioStreamPitch");
    extension.add<&RL::SetAudioStreamBufferSizeDefault>(
        "SetAudioStreamBufferSizeDefault");
    extension.add<&RL::createVector2>("Vector2");
    extension.add<&RL::createVector3>("Vector3");
    extension.add<&RL::createVector4>("Vector4");
    extension.add<&RL::createMatrix>("Matrix");
    extension.add<&RL::createColor>("Color");
    extension.add<&RL::createRectangle>("Rectangle");
    extension.add<&RL::createTexture2D>("Texture2D");
    extension.add<&RL::createRenderTexture2D>("RenderTexture2D");
    extension.add<&RL::createNPatchInfo>("NPatchInfo");
    extension.add<&RL::createCharInfo>("CharInfo");
    extension.add<&RL::createCamera3D>("Camera3D");
    extension.add<&RL::createCamera2D>("Camera2D");
    extension.add<&RL::createMaterialMap>("MaterialMap");
    extension.add<&RL::createTransform>("Transform");
    extension.add<&RL::createRay>("Ray");
    extension.add<&RL::createRayHitInfo>("RayHitInfo");
    extension.add<&RL::createBoundingBox>("BoundingBox");
    // extension.add<&RL::createrAudioBuffer>("rAudioBuffer");
    extension.add<&RL::createSound>("Sound");
    extension.add<&RL::getColorLIGHTGRAY>("LIGHTGRAY");
    extension.add<&RL::getColorGRAY>("GRAY");
    extension.add<&RL::getColorDARKGRAY>("DARKGRAY");
    extension.add<&RL::getColorYELLOW>("YELLOW");
    extension.add<&RL::getColorGOLD>("GOLD");
    extension.add<&RL::getColorORANGE>("ORANGE");
    extension.add<&RL::getColorPINK>("PINK");
    extension.add<&RL::getColorRED>("RED");
    extension.add<&RL::getColorMAROON>("MAROON");
    extension.add<&RL::getColorGREEN>("GREEN");
    extension.add<&RL::getColorLIME>("LIME");
    extension.add<&RL::getColorDARKGREEN>("DARKGREEN");
    extension.add<&RL::getColorSKYBLUE>("SKYBLUE");
    extension.add<&RL::getColorBLUE>("BLUE");
    extension.add<&RL::getColorDARKBLUE>("DARKBLUE");
    extension.add<&RL::getColorPURPLE>("PURPLE");
    extension.add<&RL::getColorVIOLET>("VIOLET");
    extension.add<&RL::getColorDARKPURPLE>("DARKPURPLE");
    extension.add<&RL::getColorBEIGE>("BEIGE");
    extension.add<&RL::getColorBROWN>("BROWN");
    extension.add<&RL::getColorDARKBROWN>("DARKBROWN");
    extension.add<&RL::getColorWHITE>("WHITE");
    extension.add<&RL::getColorBLACK>("BLACK");
    extension.add<&RL::getColorBLANK>("BLANK");
    extension.add<&RL::getColorMAGENTA>("MAGENTA");
    extension.add<&RL::getColorRAYWHITE>("RAYWHITE");
    rlClass.method<&RL::Clamp>("Clamp");
    rlClass.method<&RL::Lerp>("Lerp");
    rlClass.method<&RL::Vector2Zero>("Vector2Zero");
    rlClass.method<&RL::Vector2One>("Vector2One");
    rlClass.method<&RL::Vector2Add>("Vector2Add");
    rlClass.method<&RL::Vector2Subtract>("Vector2Subtract");
    rlClass.method<&RL::Vector2Length>("Vector2Length");
    rlClass.method<&RL::Vector2DotProduct>("Vector2DotProduct");
    rlClass.method<&RL::Vector2Distance>("Vector2Distance");
    rlClass.method<&RL::Vector2Angle>("Vector2Angle");
    rlClass.method<&RL::Vector2Scale>("Vector2Scale");
    rlClass.method<&RL::Vector2MultiplyV>("Vector2MultiplyV");
    rlClass.method<&RL::Vector2Negate>("Vector2Negate");
    rlClass.method<&RL::Vector2Divide>("Vector2Divide");
    rlClass.method<&RL::Vector2DivideV>("Vector2DivideV");
    rlClass.method<&RL::Vector2Normalize>("Vector2Normalize");
    rlClass.method<&RL::Vector2Lerp>("Vector2Lerp");
    rlClass.method<&RL::Vector2Rotate>("Vector2Rotate");
    rlClass.method<&RL::Vector3Zero>("Vector3Zero");
    rlClass.method<&RL::Vector3One>("Vector3One");
    rlClass.method<&RL::Vector3Add>("Vector3Add");
    rlClass.method<&RL::Vector3Subtract>("Vector3Subtract");
    rlClass.method<&RL::Vector3Scale>("Vector3Scale");
    rlClass.method<&RL::Vector3Multiply>("Vector3Multiply");
    rlClass.method<&RL::Vector3CrossProduct>("Vector3CrossProduct");
    rlClass.method<&RL::Vector3Perpendicular>("Vector3Perpendicular");
    rlClass.method<&RL::Vector3Length>("Vector3Length");
    rlClass.method<&RL::Vector3DotProduct>("Vector3DotProduct");
    rlClass.method<&RL::Vector3Distance>("Vector3Distance");
    rlClass.method<&RL::Vector3Negate>("Vector3Negate");
    rlClass.method<&RL::Vector3Divide>("Vector3Divide");
    rlClass.method<&RL::Vector3DivideV>("Vector3DivideV");
    rlClass.method<&RL::Vector3Normalize>("Vector3Normalize");
    rlClass.method<&RL::Vector3OrthoNormalize>("Vector3OrthoNormalize");
    rlClass.method<&RL::Vector3Transform>("Vector3Transform");
    rlClass.method<&RL::Vector3RotateByQuaternion>("Vector3RotateByQuaternion");
    rlClass.method<&RL::Vector3Lerp>("Vector3Lerp");
    rlClass.method<&RL::Vector3Reflect>("Vector3Reflect");
    rlClass.method<&RL::Vector3Min>("Vector3Min");
    rlClass.method<&RL::Vector3Max>("Vector3Max");
    rlClass.method<&RL::Vector3Barycenter>("Vector3Barycenter");
    rlClass.method<&RL::Vector3ToFloatV>("Vector3ToFloatV");
    rlClass.method<&RL::MatrixDeterminant>("MatrixDeterminant");
    rlClass.method<&RL::MatrixTrace>("MatrixTrace");
    rlClass.method<&RL::MatrixTranspose>("MatrixTranspose");
    rlClass.method<&RL::MatrixInvert>("MatrixInvert");
    rlClass.method<&RL::MatrixNormalize>("MatrixNormalize");
    rlClass.method<&RL::MatrixIdentity>("MatrixIdentity");
    rlClass.method<&RL::MatrixAdd>("MatrixAdd");
    rlClass.method<&RL::MatrixSubtract>("MatrixSubtract");
    rlClass.method<&RL::MatrixTranslate>("MatrixTranslate");
    rlClass.method<&RL::MatrixRotate>("MatrixRotate");
    rlClass.method<&RL::MatrixRotateXYZ>("MatrixRotateXYZ");
    rlClass.method<&RL::MatrixRotateX>("MatrixRotateX");
    rlClass.method<&RL::MatrixRotateY>("MatrixRotateY");
    rlClass.method<&RL::MatrixRotateZ>("MatrixRotateZ");
    rlClass.method<&RL::MatrixScale>("MatrixScale");
    rlClass.method<&RL::MatrixMultiply>("MatrixMultiply");
    rlClass.method<&RL::MatrixFrustum>("MatrixFrustum");
    rlClass.method<&RL::MatrixPerspective>("MatrixPerspective");
    rlClass.method<&RL::MatrixOrtho>("MatrixOrtho");
    rlClass.method<&RL::MatrixLookAt>("MatrixLookAt");
    rlClass.method<&RL::MatrixToFloatV>("MatrixToFloatV");
    rlClass.method<&RL::QuaternionIdentity>("QuaternionIdentity");
    rlClass.method<&RL::QuaternionLength>("QuaternionLength");
    rlClass.method<&RL::QuaternionNormalize>("QuaternionNormalize");
    rlClass.method<&RL::QuaternionInvert>("QuaternionInvert");
    rlClass.method<&RL::QuaternionMultiply>("QuaternionMultiply");
    rlClass.method<&RL::QuaternionLerp>("QuaternionLerp");
    rlClass.method<&RL::QuaternionNlerp>("QuaternionNlerp");
    rlClass.method<&RL::QuaternionSlerp>("QuaternionSlerp");
    rlClass.method<&RL::QuaternionFromVector3ToVector3>(
        "QuaternionFromVector3ToVector3");
    rlClass.method<&RL::QuaternionFromMatrix>("QuaternionFromMatrix");
    rlClass.method<&RL::QuaternionToMatrix>("QuaternionToMatrix");
    rlClass.method<&RL::QuaternionFromAxisAngle>("QuaternionFromAxisAngle");
    rlClass.method<&RL::QuaternionToAxisAngle>("QuaternionToAxisAngle");
    rlClass.method<&RL::QuaternionFromEuler>("QuaternionFromEuler");
    rlClass.method<&RL::QuaternionToEuler>("QuaternionToEuler");
    rlClass.method<&RL::QuaternionTransform>("QuaternionTransform");

    extension.add(Php::Constant("RL_FLAG_RESERVED", 1));
    extension.add(Php::Constant("RL_FLAG_FULLSCREEN_MODE", 2));
    extension.add(Php::Constant("RL_FLAG_WINDOW_RESIZABLE", 4));
    extension.add(Php::Constant("RL_FLAG_WINDOW_UNDECORATED", 8));
    extension.add(Php::Constant("RL_FLAG_WINDOW_TRANSPARENT", 16));
    extension.add(Php::Constant("RL_FLAG_WINDOW_HIDDEN", 128));
    extension.add(Php::Constant("RL_FLAG_WINDOW_ALWAYS_RUN", 256));
    extension.add(Php::Constant("RL_FLAG_MSAA_4X_HINT", 32));
    extension.add(Php::Constant("RL_FLAG_VSYNC_HINT", 64));
    extension.add(Php::Constant("RL_LOG_ALL", 0));
    extension.add(Php::Constant("RL_LOG_TRACE", 1));
    extension.add(Php::Constant("RL_LOG_DEBUG", 2));
    extension.add(Php::Constant("RL_LOG_INFO", 3));
    extension.add(Php::Constant("RL_LOG_WARNING", 4));
    extension.add(Php::Constant("RL_LOG_ERROR", 5));
    extension.add(Php::Constant("RL_LOG_FATAL", 6));
    extension.add(Php::Constant("RL_LOG_NONE", 7));
    extension.add(Php::Constant("RL_KEY_APOSTROPHE", 39));
    extension.add(Php::Constant("RL_KEY_COMMA", 44));
    extension.add(Php::Constant("RL_KEY_MINUS", 45));
    extension.add(Php::Constant("RL_KEY_PERIOD", 46));
    extension.add(Php::Constant("RL_KEY_SLASH", 47));
    extension.add(Php::Constant("RL_KEY_ZERO", 48));
    extension.add(Php::Constant("RL_KEY_ONE", 49));
    extension.add(Php::Constant("RL_KEY_TWO", 50));
    extension.add(Php::Constant("RL_KEY_THREE", 51));
    extension.add(Php::Constant("RL_KEY_FOUR", 52));
    extension.add(Php::Constant("RL_KEY_FIVE", 53));
    extension.add(Php::Constant("RL_KEY_SIX", 54));
    extension.add(Php::Constant("RL_KEY_SEVEN", 55));
    extension.add(Php::Constant("RL_KEY_EIGHT", 56));
    extension.add(Php::Constant("RL_KEY_NINE", 57));
    extension.add(Php::Constant("RL_KEY_SEMICOLON", 59));
    extension.add(Php::Constant("RL_KEY_EQUAL", 61));
    extension.add(Php::Constant("RL_KEY_A", 65));
    extension.add(Php::Constant("RL_KEY_B", 66));
    extension.add(Php::Constant("RL_KEY_C", 67));
    extension.add(Php::Constant("RL_KEY_D", 68));
    extension.add(Php::Constant("RL_KEY_E", 69));
    extension.add(Php::Constant("RL_KEY_F", 70));
    extension.add(Php::Constant("RL_KEY_G", 71));
    extension.add(Php::Constant("RL_KEY_H", 72));
    extension.add(Php::Constant("RL_KEY_I", 73));
    extension.add(Php::Constant("RL_KEY_J", 74));
    extension.add(Php::Constant("RL_KEY_K", 75));
    extension.add(Php::Constant("RL_KEY_L", 76));
    extension.add(Php::Constant("RL_KEY_M", 77));
    extension.add(Php::Constant("RL_KEY_N", 78));
    extension.add(Php::Constant("RL_KEY_O", 79));
    extension.add(Php::Constant("RL_KEY_P", 80));
    extension.add(Php::Constant("RL_KEY_Q", 81));
    extension.add(Php::Constant("RL_KEY_R", 82));
    extension.add(Php::Constant("RL_KEY_S", 83));
    extension.add(Php::Constant("RL_KEY_T", 84));
    extension.add(Php::Constant("RL_KEY_U", 85));
    extension.add(Php::Constant("RL_KEY_V", 86));
    extension.add(Php::Constant("RL_KEY_W", 87));
    extension.add(Php::Constant("RL_KEY_X", 88));
    extension.add(Php::Constant("RL_KEY_Y", 89));
    extension.add(Php::Constant("RL_KEY_Z", 90));
    extension.add(Php::Constant("RL_KEY_SPACE", 32));
    extension.add(Php::Constant("RL_KEY_ESCAPE", 256));
    extension.add(Php::Constant("RL_KEY_ENTER", 257));
    extension.add(Php::Constant("RL_KEY_TAB", 258));
    extension.add(Php::Constant("RL_KEY_BACKSPACE", 259));
    extension.add(Php::Constant("RL_KEY_INSERT", 260));
    extension.add(Php::Constant("RL_KEY_DELETE", 261));
    extension.add(Php::Constant("RL_KEY_RIGHT", 262));
    extension.add(Php::Constant("RL_KEY_LEFT", 263));
    extension.add(Php::Constant("RL_KEY_DOWN", 264));
    extension.add(Php::Constant("RL_KEY_UP", 265));
    extension.add(Php::Constant("RL_KEY_PAGE_UP", 266));
    extension.add(Php::Constant("RL_KEY_PAGE_DOWN", 267));
    extension.add(Php::Constant("RL_KEY_HOME", 268));
    extension.add(Php::Constant("RL_KEY_END", 269));
    extension.add(Php::Constant("RL_KEY_CAPS_LOCK", 280));
    extension.add(Php::Constant("RL_KEY_SCROLL_LOCK", 281));
    extension.add(Php::Constant("RL_KEY_NUM_LOCK", 282));
    extension.add(Php::Constant("RL_KEY_PRINT_SCREEN", 283));
    extension.add(Php::Constant("RL_KEY_PAUSE", 284));
    extension.add(Php::Constant("RL_KEY_F1", 290));
    extension.add(Php::Constant("RL_KEY_F2", 291));
    extension.add(Php::Constant("RL_KEY_F3", 292));
    extension.add(Php::Constant("RL_KEY_F4", 293));
    extension.add(Php::Constant("RL_KEY_F5", 294));
    extension.add(Php::Constant("RL_KEY_F6", 295));
    extension.add(Php::Constant("RL_KEY_F7", 296));
    extension.add(Php::Constant("RL_KEY_F8", 297));
    extension.add(Php::Constant("RL_KEY_F9", 298));
    extension.add(Php::Constant("RL_KEY_F10", 299));
    extension.add(Php::Constant("RL_KEY_F11", 300));
    extension.add(Php::Constant("RL_KEY_F12", 301));
    extension.add(Php::Constant("RL_KEY_LEFT_SHIFT", 340));
    extension.add(Php::Constant("RL_KEY_LEFT_CONTROL", 341));
    extension.add(Php::Constant("RL_KEY_LEFT_ALT", 342));
    extension.add(Php::Constant("RL_KEY_LEFT_SUPER", 343));
    extension.add(Php::Constant("RL_KEY_RIGHT_SHIFT", 344));
    extension.add(Php::Constant("RL_KEY_RIGHT_CONTROL", 345));
    extension.add(Php::Constant("RL_KEY_RIGHT_ALT", 346));
    extension.add(Php::Constant("RL_KEY_RIGHT_SUPER", 347));
    extension.add(Php::Constant("RL_KEY_KB_MENU", 348));
    extension.add(Php::Constant("RL_KEY_LEFT_BRACKET", 91));
    extension.add(Php::Constant("RL_KEY_BACKSLASH", 92));
    extension.add(Php::Constant("RL_KEY_RIGHT_BRACKET", 93));
    extension.add(Php::Constant("RL_KEY_GRAVE", 96));
    extension.add(Php::Constant("RL_KEY_KP_0", 320));
    extension.add(Php::Constant("RL_KEY_KP_1", 321));
    extension.add(Php::Constant("RL_KEY_KP_2", 322));
    extension.add(Php::Constant("RL_KEY_KP_3", 323));
    extension.add(Php::Constant("RL_KEY_KP_4", 324));
    extension.add(Php::Constant("RL_KEY_KP_5", 325));
    extension.add(Php::Constant("RL_KEY_KP_6", 326));
    extension.add(Php::Constant("RL_KEY_KP_7", 327));
    extension.add(Php::Constant("RL_KEY_KP_8", 328));
    extension.add(Php::Constant("RL_KEY_KP_9", 329));
    extension.add(Php::Constant("RL_KEY_KP_DECIMAL", 330));
    extension.add(Php::Constant("RL_KEY_KP_DIVIDE", 331));
    extension.add(Php::Constant("RL_KEY_KP_MULTIPLY", 332));
    extension.add(Php::Constant("RL_KEY_KP_SUBTRACT", 333));
    extension.add(Php::Constant("RL_KEY_KP_ADD", 334));
    extension.add(Php::Constant("RL_KEY_KP_ENTER", 335));
    extension.add(Php::Constant("RL_KEY_KP_EQUAL", 336));
    extension.add(Php::Constant("RL_KEY_BACK", 4));
    extension.add(Php::Constant("RL_KEY_MENU", 82));
    extension.add(Php::Constant("RL_KEY_VOLUME_UP", 24));
    extension.add(Php::Constant("RL_KEY_VOLUME_DOWN", 25));
    extension.add(Php::Constant("RL_MOUSE_LEFT_BUTTON", 0));
    extension.add(Php::Constant("RL_MOUSE_RIGHT_BUTTON", 1));
    extension.add(Php::Constant("RL_MOUSE_MIDDLE_BUTTON", 2));
    extension.add(Php::Constant("RL_GAMEPAD_PLAYER1", 0));
    extension.add(Php::Constant("RL_GAMEPAD_PLAYER2", 1));
    extension.add(Php::Constant("RL_GAMEPAD_PLAYER3", 2));
    extension.add(Php::Constant("RL_GAMEPAD_PLAYER4", 3));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_UNKNOWN", 0));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_FACE_UP", 1));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_FACE_RIGHT", 2));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_FACE_DOWN", 3));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_FACE_LEFT", 4));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_FACE_UP", 5));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", 6));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_FACE_DOWN", 7));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_FACE_LEFT", 8));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_TRIGGER_1", 9));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_TRIGGER_2", 10));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_TRIGGER_1", 11));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_TRIGGER_2", 12));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_MIDDLE_LEFT", 13));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_MIDDLE", 14));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_MIDDLE_RIGHT", 15));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_LEFT_THUMB", 16));
    extension.add(Php::Constant("RL_GAMEPAD_BUTTON_RIGHT_THUMB", 17));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_UNKNOWN", 0));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_LEFT_X", 1));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_LEFT_Y", 2));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_RIGHT_X", 3));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_RIGHT_Y", 4));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_LEFT_TRIGGER", 5));
    extension.add(Php::Constant("RL_GAMEPAD_AXIS_RIGHT_TRIGGER", 6));
    extension.add(Php::Constant("RL_LOC_VERTEX_POSITION", 0));
    extension.add(Php::Constant("RL_LOC_VERTEX_TEXCOORD01", 1));
    extension.add(Php::Constant("RL_LOC_VERTEX_TEXCOORD02", 2));
    extension.add(Php::Constant("RL_LOC_VERTEX_NORMAL", 3));
    extension.add(Php::Constant("RL_LOC_VERTEX_TANGENT", 4));
    extension.add(Php::Constant("RL_LOC_VERTEX_COLOR", 5));
    extension.add(Php::Constant("RL_LOC_MATRIX_MVP", 6));
    extension.add(Php::Constant("RL_LOC_MATRIX_MODEL", 7));
    extension.add(Php::Constant("RL_LOC_MATRIX_VIEW", 8));
    extension.add(Php::Constant("RL_LOC_MATRIX_PROJECTION", 9));
    extension.add(Php::Constant("RL_LOC_VECTOR_VIEW", 10));
    extension.add(Php::Constant("RL_LOC_COLOR_DIFFUSE", 11));
    extension.add(Php::Constant("RL_LOC_COLOR_SPECULAR", 12));
    extension.add(Php::Constant("RL_LOC_COLOR_AMBIENT", 13));
    extension.add(Php::Constant("RL_LOC_MAP_ALBEDO", 14));
    extension.add(Php::Constant("RL_LOC_MAP_METALNESS", 15));
    extension.add(Php::Constant("RL_LOC_MAP_NORMAL", 16));
    extension.add(Php::Constant("RL_LOC_MAP_ROUGHNESS", 17));
    extension.add(Php::Constant("RL_LOC_MAP_OCCLUSION", 18));
    extension.add(Php::Constant("RL_LOC_MAP_EMISSION", 19));
    extension.add(Php::Constant("RL_LOC_MAP_HEIGHT", 20));
    extension.add(Php::Constant("RL_LOC_MAP_CUBEMAP", 21));
    extension.add(Php::Constant("RL_LOC_MAP_IRRADIANCE", 22));
    extension.add(Php::Constant("RL_LOC_MAP_PREFILTER", 23));
    extension.add(Php::Constant("RL_LOC_MAP_BRDF", 24));
    extension.add(Php::Constant("RL_UNIFORM_FLOAT", 0));
    extension.add(Php::Constant("RL_UNIFORM_VEC2", 1));
    extension.add(Php::Constant("RL_UNIFORM_VEC3", 2));
    extension.add(Php::Constant("RL_UNIFORM_VEC4", 3));
    extension.add(Php::Constant("RL_UNIFORM_INT", 4));
    extension.add(Php::Constant("RL_UNIFORM_IVEC2", 5));
    extension.add(Php::Constant("RL_UNIFORM_IVEC3", 6));
    extension.add(Php::Constant("RL_UNIFORM_IVEC4", 7));
    extension.add(Php::Constant("RL_UNIFORM_SAMPLER2D", 8));
    extension.add(Php::Constant("RL_MAP_ALBEDO", 0));
    extension.add(Php::Constant("RL_MAP_METALNESS", 1));
    extension.add(Php::Constant("RL_MAP_NORMAL", 2));
    extension.add(Php::Constant("RL_MAP_ROUGHNESS", 3));
    extension.add(Php::Constant("RL_MAP_OCCLUSION", 4));
    extension.add(Php::Constant("RL_MAP_EMISSION", 5));
    extension.add(Php::Constant("RL_MAP_HEIGHT", 6));
    extension.add(Php::Constant("RL_MAP_CUBEMAP", 7));
    extension.add(Php::Constant("RL_MAP_IRRADIANCE", 8));
    extension.add(Php::Constant("RL_MAP_PREFILTER", 9));
    extension.add(Php::Constant("RL_MAP_BRDF", 10));
    extension.add(Php::Constant("RL_UNCOMPRESSED_GRAYSCALE", 1));
    extension.add(Php::Constant("RL_UNCOMPRESSED_GRAY_ALPHA", 2));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R5G6B5", 3));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R8G8B8", 4));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R5G5B5A1", 5));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R4G4B4A4", 6));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R8G8B8A8", 7));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R32", 8));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R32G32B32", 9));
    extension.add(Php::Constant("RL_UNCOMPRESSED_R32G32B32A32", 10));
    extension.add(Php::Constant("RL_COMPRESSED_DXT1_RGB", 11));
    extension.add(Php::Constant("RL_COMPRESSED_DXT1_RGBA", 12));
    extension.add(Php::Constant("RL_COMPRESSED_DXT3_RGBA", 13));
    extension.add(Php::Constant("RL_COMPRESSED_DXT5_RGBA", 14));
    extension.add(Php::Constant("RL_COMPRESSED_ETC1_RGB", 15));
    extension.add(Php::Constant("RL_COMPRESSED_ETC2_RGB", 16));
    extension.add(Php::Constant("RL_COMPRESSED_ETC2_EAC_RGBA", 17));
    extension.add(Php::Constant("RL_COMPRESSED_PVRT_RGB", 18));
    extension.add(Php::Constant("RL_COMPRESSED_PVRT_RGBA", 19));
    extension.add(Php::Constant("RL_COMPRESSED_ASTC_4x4_RGBA", 20));
    extension.add(Php::Constant("RL_COMPRESSED_ASTC_8x8_RGBA", 21));
    extension.add(Php::Constant("RL_FILTER_POINT", 0));
    extension.add(Php::Constant("RL_FILTER_BILINEAR", 1));
    extension.add(Php::Constant("RL_FILTER_TRILINEAR", 2));
    extension.add(Php::Constant("RL_FILTER_ANISOTROPIC_4X", 3));
    extension.add(Php::Constant("RL_FILTER_ANISOTROPIC_8X", 4));
    extension.add(Php::Constant("RL_FILTER_ANISOTROPIC_16X", 5));
    extension.add(Php::Constant("RL_CUBEMAP_AUTO_DETECT", 0));
    extension.add(Php::Constant("RL_CUBEMAP_LINE_VERTICAL", 1));
    extension.add(Php::Constant("RL_CUBEMAP_LINE_HORIZONTAL", 2));
    extension.add(Php::Constant("RL_CUBEMAP_CROSS_THREE_BY_FOUR", 3));
    extension.add(Php::Constant("RL_CUBEMAP_CROSS_FOUR_BY_THREE", 4));
    extension.add(Php::Constant("RL_CUBEMAP_PANORAMA", 5));
    extension.add(Php::Constant("RL_WRAP_REPEAT", 0));
    extension.add(Php::Constant("RL_WRAP_CLAMP", 1));
    extension.add(Php::Constant("RL_WRAP_MIRROR_REPEAT", 2));
    extension.add(Php::Constant("RL_WRAP_MIRROR_CLAMP", 3));
    extension.add(Php::Constant("RL_FONT_DEFAULT", 0));
    extension.add(Php::Constant("RL_FONT_BITMAP", 1));
    extension.add(Php::Constant("RL_FONT_SDF", 2));
    extension.add(Php::Constant("RL_BLEND_ALPHA", 0));
    extension.add(Php::Constant("RL_BLEND_ADDITIVE", 1));
    extension.add(Php::Constant("RL_BLEND_MULTIPLIED", 2));
    extension.add(Php::Constant("RL_GESTURE_NONE", 0));
    extension.add(Php::Constant("RL_GESTURE_TAP", 1));
    extension.add(Php::Constant("RL_GESTURE_DOUBLETAP", 2));
    extension.add(Php::Constant("RL_GESTURE_HOLD", 4));
    extension.add(Php::Constant("RL_GESTURE_DRAG", 8));
    extension.add(Php::Constant("RL_GESTURE_SWIPE_RIGHT", 16));
    extension.add(Php::Constant("RL_GESTURE_SWIPE_LEFT", 32));
    extension.add(Php::Constant("RL_GESTURE_SWIPE_UP", 64));
    extension.add(Php::Constant("RL_GESTURE_SWIPE_DOWN", 128));
    extension.add(Php::Constant("RL_GESTURE_PINCH_IN", 256));
    extension.add(Php::Constant("RL_GESTURE_PINCH_OUT", 512));
    extension.add(Php::Constant("RL_CAMERA_CUSTOM", 0));
    extension.add(Php::Constant("RL_CAMERA_FREE", 1));
    extension.add(Php::Constant("RL_CAMERA_ORBITAL", 2));
    extension.add(Php::Constant("RL_CAMERA_FIRST_PERSON", 3));
    extension.add(Php::Constant("RL_CAMERA_THIRD_PERSON", 4));
    extension.add(Php::Constant("RL_CAMERA_PERSPECTIVE", 0));
    extension.add(Php::Constant("RL_CAMERA_ORTHOGRAPHIC", 1));
    extension.add(Php::Constant("RL_NPT_9PATCH", 0));
    extension.add(Php::Constant("RL_NPT_3PATCH_VERTICAL", 1));
    extension.add(Php::Constant("RL_NPT_3PATCH_HORIZONTAL", 2));

    Php::Class<rlPhysicsBody> rlPhysicsBody("PhysicsBody");
    rlNamespace.add(rlPhysicsBody);
    rlPhysicsBody.property("id", &rlPhysicsBody::getid, &rlPhysicsBody::setid);
    rlPhysicsBody.property("enabled", &rlPhysicsBody::getenabled,
                           &rlPhysicsBody::setenabled);
    rlPhysicsBody.property("position", &rlPhysicsBody::getposition,
                           &rlPhysicsBody::setposition);
    rlPhysicsBody.property("velocity", &rlPhysicsBody::getvelocity,
                           &rlPhysicsBody::setvelocity);
    rlPhysicsBody.property("force", &rlPhysicsBody::getforce,
                           &rlPhysicsBody::setforce);
    rlPhysicsBody.property("angularVelocity",
                           &rlPhysicsBody::getangularVelocity,
                           &rlPhysicsBody::setangularVelocity);
    rlPhysicsBody.property("torque", &rlPhysicsBody::gettorque,
                           &rlPhysicsBody::settorque);
    rlPhysicsBody.property("orient", &rlPhysicsBody::getorient,
                           &rlPhysicsBody::setorient);
    rlPhysicsBody.property("inertia", &rlPhysicsBody::getinertia,
                           &rlPhysicsBody::setinertia);
    rlPhysicsBody.property("inverseInertia", &rlPhysicsBody::getinverseInertia,
                           &rlPhysicsBody::setinverseInertia);
    rlPhysicsBody.property("mass", &rlPhysicsBody::getmass,
                           &rlPhysicsBody::setmass);
    rlPhysicsBody.property("inverseMass", &rlPhysicsBody::getinverseMass,
                           &rlPhysicsBody::setinverseMass);
    rlPhysicsBody.property("staticFriction", &rlPhysicsBody::getstaticFriction,
                           &rlPhysicsBody::setstaticFriction);
    rlPhysicsBody.property("dynamicFriction",
                           &rlPhysicsBody::getdynamicFriction,
                           &rlPhysicsBody::setdynamicFriction);
    rlPhysicsBody.property("restitution", &rlPhysicsBody::getrestitution,
                           &rlPhysicsBody::setrestitution);
    rlPhysicsBody.property("useGravity", &rlPhysicsBody::getuseGravity,
                           &rlPhysicsBody::setuseGravity);
    rlPhysicsBody.property("isGrounded", &rlPhysicsBody::getisGrounded,
                           &rlPhysicsBody::setisGrounded);
    rlPhysicsBody.property("freezeOrient", &rlPhysicsBody::getfreezeOrient,
                           &rlPhysicsBody::setfreezeOrient);
    //  rlPhysicsBody.property("shape", &rlPhysicsBody::getshape,
    //                           &rlPhysicsBody::setshape);

    rlClass.method<&RL::InitPhysics>("InitPhysics");
    rlClass.method<&RL::RunPhysicsStep>("RunPhysicsStep");
    rlClass.method<&RL::SetPhysicsTimeStep>("SetPhysicsTimeStep");
    rlClass.method<&RL::IsPhysicsEnabled>("IsPhysicsEnabled");
    rlClass.method<&RL::SetPhysicsGravity>("SetPhysicsGravity");
    rlClass.method<&RL::CreatePhysicsBodyCircle>("CreatePhysicsBodyCircle");
    rlClass.method<&RL::CreatePhysicsBodyRectangle>(
        "CreatePhysicsBodyRectangle");
    rlClass.method<&RL::CreatePhysicsBodyPolygon>("CreatePhysicsBodyPolygon");
    rlClass.method<&RL::PhysicsAddForce>("PhysicsAddForce");
    rlClass.method<&RL::PhysicsAddTorque>("PhysicsAddTorque");
    rlClass.method<&RL::PhysicsShatter>("PhysicsShatter");
    rlClass.method<&RL::GetPhysicsBodiesCount>("GetPhysicsBodiesCount");
    rlClass.method<&RL::GetPhysicsBody>("GetPhysicsBody");
    rlClass.method<&RL::GetPhysicsShapeType>("GetPhysicsShapeType");
    rlClass.method<&RL::GetPhysicsShapeVerticesCount>(
        "GetPhysicsShapeVerticesCount");
    rlClass.method<&RL::GetPhysicsShapeVertex>("GetPhysicsShapeVertex");
    rlClass.method<&RL::SetPhysicsBodyRotation>("SetPhysicsBodyRotation");
    rlClass.method<&RL::DestroyPhysicsBody>("DestroyPhysicsBody");
    rlClass.method<&RL::ResetPhysics>("ResetPhysics");
    rlClass.method<&RL::ClosePhysics>("ClosePhysics");

    rlClass.property("PHYSICS_CIRCLE", 0, Php::Const);
    rlClass.property("PHYSICS_POLYGON", 1, Php::Const);

    rlNamespace.add(rlClass);

    // add everything to extension
    extension.add(rlNamespace);

    // return the module entry
    return extension.module();
}
}

} // namespace rl
