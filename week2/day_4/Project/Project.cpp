#include "draw.h"

void line(SDL_Renderer *gRenderer, int x, int y, int i);

void draw(SDL_Renderer *gRenderer)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < 7; ++i) {
        line(gRenderer, x  + i * 25, y  + i *  25, i);

    }
}

void line(SDL_Renderer *gRenderer, int x, int y, int i)
{

    SDL_SetRenderDrawColor(gRenderer, 180 /*R*/, 0x00 /*G*/, 0xFF /*B*/, 0xFF /*A*/);
//draw line
    SDL_Rect Incrementation = {(x * (i - 1) / 2) , (y* (i-1) / 2), 25 * i, 25 *i};
    SDL_RenderDrawRect(gRenderer, &Incrementation);
    SDL_RenderFillRect(gRenderer, &Incrementation);
}