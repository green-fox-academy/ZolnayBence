#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw2(SDL_Renderer* gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF , 0x00, 0x00, 0x00 );
    SDL_RenderDrawLine(gRenderer,240, 240 , 240, 120);

    SDL_SetRenderDrawColor(gRenderer, 0x00 , 255, 140, 80 );
    SDL_RenderDrawLine(gRenderer, 240, 120 , 400, 120);

   SDL_SetRenderDrawColor(gRenderer, 100 , 120, 200, 0x00 );
    SDL_RenderDrawLine(gRenderer, 400, 120 , 400, 240);

    SDL_SetRenderDrawColor(gRenderer, 35 , 31, 60, 0x00 );
    SDL_RenderDrawLine(gRenderer, 400, 240 , 240, 240);


}
