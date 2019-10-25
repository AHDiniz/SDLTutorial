#include "game.hpp"
#include "event.hpp"
#include "window.hpp"

class Main : public App
{
	void Start() override
	{
		window.Init("Test", 640, 480, SDL_WINDOW_SHOWN, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}

	void HandleEvents() override
	{
		Event event;
		Events::PollEvent(event);
		switch(event.type)
		{
			case EVENT_QUIT:
				running = false;
				break;
		}
	}

	void Update() override
	{
		
	}

	void Draw() override
	{
		Renderer &renderer = window.GetRenderer();
		r++;
		if (r == 255) { r = 0; }
		renderer.DrawColor(0, r, 0, 255);
		renderer.Clear();
		renderer.Present();
	}

	void Finish() override
	{

	}

	int r = 0;
};

App *CreateApp(void)
{
	return new Main();
}
