#include "addButton.h"
#include "constants.h"

#include <stdio.h>

addButton::addButton() {
	mPosition.x = 0;
	mPosition.y = 0;
	w = WIDTH / 2 - 40;
	h = 100;
}

addButton::~addButton() {
	
}

void addButton::setPosition(int x, int y) {
	mPosition.x = x;
	mPosition.y = y;
}

int addButton::handleEvent(SDL_Event* e) {
	if (e->type == SDL_MOUSEMOTION) {
		int x, y;
		SDL_GetMouseState(&x, &y);
		bool inside = true;
		if (x < mPosition.x) {
			inside = false;
		}
		else if (x > mPosition.x + w) {
			inside = false;
		}
		else if (y < mPosition.y) {
			inside = false;
		}
		else if (y > mPosition.y + h) {
			inside = false;
		}
		if (!inside) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

void addButton::Init(SDL_Renderer* renderer) {

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_Rect fillRect = { 20, HEIGHT, w, h };
	SDL_RenderFillRect(renderer, &fillRect);
	/*
	SDL_SetRenderDrawColor(this->renderer, 0, 0, 255, 255);
	SDL_RenderFillRect(this->renderer, &this->rect);
	*/
}