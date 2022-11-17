#pragma once

#include <SDL.h>

class addButton
{
public:

    addButton();
    ~addButton();
    void setPosition(int x, int y);
    int handleEvent(SDL_Event* e);
    SDL_Renderer* GetRenderer();
    void Init(SDL_Renderer* renderer);

private:

    SDL_Point mPosition;
    int w;
    int h;

};
