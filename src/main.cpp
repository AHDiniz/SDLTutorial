#include "game.hpp"

class Main : public App
{
	void Start() override
	{
		window.Init("Test", 640, 480, SDL_WINDOW_SHOWN, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	}

	void HandleEvents() override
	{

	}

	void Update() override
	{
		running = false;
	}

	void Draw() override
	{
		
	}

	void Finish() override
	{

	}
};

App *CreateApp(void)
{
	return new Main();
}
