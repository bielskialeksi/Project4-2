#include<iostream>
#include <vector>
#include"app.h"

#include"Timer.h"
#include "addButton.h"
#include "courseButton.h"
#include "modifBibButton.h"
#include "listeCourseButton.h"
#include "MainSDLWindow.h"
#include "constants.h"

#include <SDL.h>
#include <stdio.h>

using namespace std;


int main(int argc, char* args[])
{
	MainSDLWindow sdlwin;
	app aply;
	Timer* t = new Timer();
	addButton* aBtn = new addButton();
	courseButton* cBtn = new courseButton();
	modifBibButton* mbBtn = new modifBibButton();
	listeCourseButton* lcBtn = new listeCourseButton();
	SDL_Event event;

	int playing = 1;

	sdlwin.Init("test", WIDTH, HEIGHT);
	
	SDL_Renderer* renderer = sdlwin.GetRenderer();

	
	do {
		SDL_SetRenderDrawColor(renderer, 170, 240, 240, 255);
		SDL_RenderClear(renderer);


		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				playing = 0;
			}
		}

		t->Init(renderer);
		aBtn->setPosition(20, HEIGHT / 2 + 160);
		cBtn->setPosition(WIDTH / 2 + 20, HEIGHT / 2 + 160);
		mbBtn->setPosition(20, HEIGHT / 2 + 320);
		lcBtn->setPosition(WIDTH / 2 + 20, HEIGHT / 2 + 320);
		
		if (aBtn->handleEvent(event) ==0) {
			
			aBtn->Init0(renderer);
			
		}
		else {
			aBtn->Init1(renderer);
			aply.New_rappel();


		}

		if (cBtn->handleEvent(event) == 0) {

			cBtn->Init0(renderer);
		}
		else {
			cBtn->Init1(renderer);
			aply.New_course();
		}

		if (mbBtn->handleEvent(event) == 0) {

			mbBtn->Init0(renderer);
		}
		else {
			mbBtn->Init1(renderer);
			aply.Liste_de_rappel();
			aply.sup_rappel();
		}

		if (lcBtn->handleEvent(event) == 0) {

			lcBtn->Init0(renderer);
		}
		else {
			lcBtn->Init1(renderer);
			
			aply.Liste_de_course();
		}

		SDL_RenderPresent(renderer);

	} while (playing == 1);


	return 0;
}

 
