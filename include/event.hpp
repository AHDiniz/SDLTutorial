#pragma once

#include <SDL2/SDL.h>

enum EventType
{
	EVENT_QUIT = 256,
};

struct Event
{
	friend class Events;
	EventType type;
private:
	SDL_Event e;
};

class Events
{
public:
	static bool PollEvent(Event &event);
private:
};