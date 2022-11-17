#include"Timer.h"
#include"app.h"
#include"constants.h"
#include <SDL.h>

Timer::Timer() {

}

Timer::~Timer() {

}

 


void Timer::handleEvent() {

}

void Timer::Init(SDL_Renderer* renderer) {

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_Rect fillRect = { 20, 60, WIDTH - 40, HEIGHT / 2 };
	SDL_RenderFillRect(renderer, &fillRect);
	/*
	SDL_SetRenderDrawColor(this->renderer, 0, 0, 255, 255);
	SDL_RenderFillRect(this->renderer, &this->rect);
	*/
}