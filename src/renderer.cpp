#include "renderer.hpp"

void Renderer::Init(SDL_Window *window, uint32_t flags)
{
    renderer = SDL_CreateRenderer(window, -1, flags);
}