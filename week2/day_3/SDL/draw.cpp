#include "draw.h"
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void draw(SDL_Renderer* gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF , 0x00, 0x00, 0x00 );
    SDL_RenderDrawLine(gRenderer, 0, 240 , 640, 240);

    SDL_SetRenderDrawColor(gRenderer, 0x00 , 0xFF, 0x00, 0x00 );
    SDL_RenderDrawLine(gRenderer, 320, 0 , 320, 480);




}
