#pragma once

#include <SDL.h>

class modifBibButton
{
public:

    modifBibButton();
    ~modifBibButton();
    void setPosition(int x, int y);
    int handleEvent(SDL_Event event);
    SDL_Renderer* GetRenderer();
    void Init0(SDL_Renderer* renderer);
    void Init1(SDL_Renderer* renderer);

private:

    SDL_Point mPosition;
    int w;
    int h;

};