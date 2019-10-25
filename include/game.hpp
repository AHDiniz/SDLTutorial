#pragma once

#include "window.hpp"

class App
{
public:
	virtual void Start() = 0;
	virtual void HandleEvents() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Finish() = 0;

	inline bool Running() { return running; }
protected:
	Window window;
	bool running = true;
};

App *CreateApp(void);