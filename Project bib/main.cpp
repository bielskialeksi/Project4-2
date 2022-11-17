#include<iostream>
#include <vector>
#include"app.h"

#include"Timer.h"
#include "MainSDLWindow.h"
#include "constants.h"

#include <SDL.h>
#include <stdio.h>

using namespace std;


int main(int argc, char* args[])
{
	MainSDLWindow sdlwin;
	rectangle* rect = new rectangle();
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
		rect->Init(renderer);

		SDL_RenderPresent(renderer);

	} while (playing == 1);


	return 0;
}

 
