#include "addButton.h"
#include "constants.h"

#include<iostream>
#include <SDL.h>
#include <stdio.h>




addButton::addButton() {
	this->mPosition.x = 0;
	this->mPosition.y = 0;
	this->w = WIDTH / 2 - 40;
	this->h = 100;
}

addButton::~addButton() {
	
}

void addButton::setPosition(int x, int y) {
	this->mPosition.x = x;
	this->mPosition.y = y;
}

int addButton::handleEvent(SDL_Event event) {
	
	if (event.type) {
		
		int x, y;
		SDL_GetMouseState(&x, &y);
		bool inside = true;
		if (x < this->mPosition.x) {
			inside = false;
		}
		else if (x > this->mPosition.x + this->w) {
			inside = false;
		}
		else if (y < this->mPosition.y) {
			inside = false;
		}
		else if (y > this->mPosition.y + this->h) {
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

void addButton::Init0(SDL_Renderer* renderer) {

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_Rect fillRect = { 20, HEIGHT / 2 + 160, WIDTH / 2 - 40, 100 };
	SDL_RenderFillRect(renderer, &fillRect);
}

void addButton::Init1(SDL_Renderer* renderer) {

	SDL_SetRenderDrawColor(renderer, 220, 220, 220, 255);
	SDL_Rect fillRect = { 20, HEIGHT / 2 + 160, WIDTH / 2 - 40, 100 };
	SDL_RenderFillRect(renderer, &fillRect);
}