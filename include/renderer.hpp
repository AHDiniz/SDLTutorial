#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Renderer
{
public:
	inline ~Renderer() { SDL_DestroyRenderer(renderer); }

	void Init(SDL_Window *window, uint32_t flags);

	inline void Clear()
	{
		SDL_RenderClear(renderer);
	}

	inline void Present()
	{
		SDL_RenderPresent(renderer);
	}

	inline void DrawColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
	{
		SDL_SetRenderDrawColor(renderer, r, g, b, a);
	}

private:
	SDL_Renderer *renderer;
};
