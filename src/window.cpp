#include "window.hpp"

void Window::Init(const char *name, int w, int h, uint32_t wFlags, uint32_t rFlags)
{
    window = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, wFlags);
    renderer.Init(window, rFlags);
}
