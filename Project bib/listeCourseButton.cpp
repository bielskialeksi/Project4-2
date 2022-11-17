#include "listeCourseButton.h"
#include "constants.h"

#include<iostream>
#include <SDL.h>
#include <stdio.h>




listeCourseButton::listeCourseButton() {
	this->mPosition.x = 0;
	this->mPosition.y = 0;
	this->w = WIDTH / 2 - 40;
	this->h = 100;
}

listeCourseButton::~listeCourseButton() {

}

void listeCourseButton::setPosition(int x, int y) {
	this->mPosition.x = x;
	this->mPosition.y = y;
}

int listeCourseButton::handleEvent(SDL_Event event) {

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

void listeCourseButton::Init0(SDL_Renderer* renderer) {

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_Rect fillRect = { WIDTH / 2 + 20, HEIGHT / 2 + 320, WIDTH / 2 - 40, 100 };
	SDL_RenderFillRect(renderer, &fillRect);
}

void listeCourseButton::Init1(SDL_Renderer* renderer) {

	SDL_SetRenderDrawColor(renderer, 220, 220, 220, 255);
	SDL_Rect fillRect = { WIDTH / 2 + 20, HEIGHT / 2 + 320, WIDTH / 2 - 40, 100 };
	SDL_RenderFillRect(renderer, &fillRect);
}