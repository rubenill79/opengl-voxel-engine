cmake_minimum_required(VERSION 3.10)
project(opengl-voxel-engine VERSION 0.0.1)
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")

link_directories(libs/glfw)

include_directories(libs/glad)
include_directories(libs/KHR)
include_directories(libs/imgui)
include_directories(libs/glfw)
include_directories(libs/glm)
include_directories(include)

file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(opengl-voxel-engine ${SOURCES})

find_package(OpenGL REQUIRED)
target_link_libraries(opengl-voxel-engine PRIVATE ${OPENGL_gl_LIBRARY})
target_link_libraries(opengl-voxel-engine PRIVATE glfw3)

file(COPY resources DESTINATION /)
