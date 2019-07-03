#include "draw.h"

void draw2(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 120, 0);
    SDL_RenderDrawLine(gRenderer, 260, 120, 260, 220);
    SDL_RenderDrawLine(gRenderer, 260, 120, 360, 120);
    SDL_RenderDrawLine(gRenderer, 360, 120, 360, 220);
    SDL_RenderDrawLine(gRenderer, 360, 220, 260, 220);
}