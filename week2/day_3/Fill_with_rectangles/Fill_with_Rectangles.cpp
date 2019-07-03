#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 255, 255);
//create a rectangle
    SDL_Rect fillRect = { 260, 240, 50, 50};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect );

    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
//create a rectangle
    SDL_Rect fillRect2 = { 260, 160, 50, 50};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect2 );

    SDL_SetRenderDrawColor(gRenderer, 255, 0xFF, 0x00, 0xFF);
//create a rectangle
    SDL_Rect fillRect3 = { 340, 240, 50, 50};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect3 );

    SDL_SetRenderDrawColor(gRenderer, 50, 0xFF, 0x00, 0xFF);
//create a rectangle
    SDL_Rect fillRect4 = { 340, 160, 50, 50};
    //draw rectangle
    SDL_RenderFillRect( gRenderer, &fillRect4 );


}