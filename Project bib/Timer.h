#pragma once
#include<iostream>
#include<SDL.h>

class Timer {

private:
	

public:

	Timer();
	~Timer();
	void handleEvent();
	SDL_Renderer *GetRenderer();
	void Init(SDL_Renderer* renderer);
};