cmake_minimum_required(VERSION 3.16)
project(Egl-test)

# Increase warning levels
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wno-deprecated-declarations")
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
endif()

set(CMAKE_POSITION_INDEPENDENT_CODE ON) # enable position independent code (for including static libs in dynamic lib)
set(CMAKE_CXX_STANDARD 17) # set c++ standard to c++17 for all projects
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}) # make sure executables of subdirectories are copied to bin directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}) # make sure that shared libraries are copied to bin directory
# the following properties change the RPATH (linux) of libraries and executables, i.e. the path in which
# libraries are searched.
set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE) # use the "install" rpath instead of the "build" rpath
set(CMAKE_INSTALL_RPATH "$ORIGIN") # set the RPATH to the directory of the executable

# ReconstructorServer
file(GLOB_RECURSE EGL_TEST_SRC_LIST
    src/*.cpp
    src/*.h)

add_executable(EglTest ${EGL_TEST_SRC_LIST})

target_link_libraries(EglTest PRIVATE GL EGL)

