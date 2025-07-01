#include "display/game_window.hpp"

int main() {
    // Create the game window with the specified size and title
    GameWindow gw = GameWindow{ 1280, 720, "OpenGL Voxel Engine" };
    return gw.Run();
}