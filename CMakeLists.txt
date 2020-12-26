cmake_minimum_required(VERSION 3.13)
project(test)

INCLUDE(ExternalProject)

Execute_Process(COMMAND sh -c "php-config --include-dir | tr -d '\n'" OUTPUT_VARIABLE PHP_INCLUDE_DIR)
MESSAGE( STATUS "PHP_INCLUDE_DIR:" ${PHP_INCLUDE_DIR})

ExternalProject_Add(
  raylib
  PREFIX          raylib
  GIT_REPOSITORY  https://github.com/raysan5/raylib.git
  GIT_TAG         3.5.0
  GIT_SHALLOW     true
  STEP_TARGETS    build
  CMAKE_ARGS      -DCMAKE_INSTALL_PREFIX=.
                  -DCMAKE_CONFIGURATION_TYPES=Release
                  -DCMAKE_BUILD_TYPE=Release
                  -DWITH_PIC=ON
                  -DBUILD_EXAMPLES=OFF
                  -DBUILD_GAMES=OFF
                  -DOpenGL_GL_PREFERENCE=GLVND
)

ExternalProject_Add(
  PHP-CPP
  PREFIX          PHP-CPP
  GIT_REPOSITORY  https://github.com/NobletSolutions/PHP-CPP.git
  GIT_TAG         86d3624857a4d6a5ca8f760bb233ed083079e462
  INSTALL_COMMAND sh -c "cp libphpcpp.a.2.2.0 libphpcpp.a && ln -sf include phpcpp"
  CONFIGURE_COMMAND ""
  # Hack: Expose pic, O2
  PATCH_COMMAND   sh -c "sed 's/^STATIC_COMPILER_FLAGS.*=.*$/STATIC_COMPILER_FLAGS=-fpic -O2 -fno-plt -g/' -i Makefile"
  BUILD_ALWAYS    true
  BUILD_IN_SOURCE true
  # Not using cmake
  BUILD_COMMAND  CC=clang CXX=clang++ make -j4
  )

SET (raylib-phpcpp-src
  raylib.cpp
)

# Library and dependencies
Add_Library(raylib-phpcpp SHARED ${raylib-phpcpp-src})
Set_Target_Properties(raylib-phpcpp PROPERTIES LINKER_LANGUAGE CXX)
Add_Dependencies(raylib-phpcpp PHP-CPP)
Add_Dependencies(raylib-phpcpp raylib)

# Include headers
# Target_Include_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/clickhouse-cpp/src/clickhouse-cpp")
Target_Include_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/PHP-CPP/src/PHP-CPP/include/")
Target_Include_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/PHP-CPP/src/PHP-CPP/")
Target_Include_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/raylib/src/raylib-build/include/")
Target_Include_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/raylib/src/raylib-build/src/")
Target_Include_Directories(raylib-phpcpp PRIVATE "${PHP_INCLUDE_DIR}" "${PHP_INCLUDE_DIR}/main" "${PHP_INCLUDE_DIR}/TSRM" "${PHP_INCLUDE_DIR}/Zend" "${PHP_INCLUDE_DIR}/ext" "${PHP_INCLUDE_DIR}/ext/date/lib")

# Linker
Target_Link_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/PHP-CPP/src/PHP-CPP/")
Target_Link_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/raylib/src/raylib-build/src/")
Target_Link_Directories(raylib-phpcpp PRIVATE "${CMAKE_BINARY_DIR}/raylib/src/raylib-build/src/external/glfw/src/")

Target_Link_Libraries(raylib-phpcpp :libphpcpp.a)
Target_Link_Libraries(raylib-phpcpp :libraylib.a)
# GLFW
Target_Link_Libraries(raylib-phpcpp :libglfw3.a)
Target_Link_Libraries(raylib-phpcpp X11)
