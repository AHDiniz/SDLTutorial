#pragma once

#include "renderer.hpp"

class Window
{
public:

	inline ~Window() { SDL_DestroyWindow(window); }

	void Init(const char *name, int w, int h, uint32_t wFlags, uint32_t rFlags);

	inline Renderer &GetRenderer(void) { return renderer; }
private:
	SDL_Window *window;
	Renderer renderer;
};
