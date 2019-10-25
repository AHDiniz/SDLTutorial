#include "event.hpp"

bool Events::PollEvent(Event &event)
{
	int result = SDL_PollEvent(&(event.e));
	event.type = (EventType)event.e.type;
	return result;
}
