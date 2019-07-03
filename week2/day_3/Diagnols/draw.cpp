#include "draw.h"

void draw2(SDL_Renderer *gRenderer)
{

    SDL_SetRenderDrawColor(gRenderer, 0, 0xFF, 0x00, 0x00);
    SDL_RenderDrawLine(gRenderer, 0, 0, 200, 200);

    SDL_SetRenderDrawColor(gRenderer, 0x00, 0, 0x00, 0x00);
    SDL_RenderDrawLine(gRenderer, 680, 0, 200, 400);


}