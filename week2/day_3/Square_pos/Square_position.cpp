#include "draw.h"

void square(SDL_Renderer *gRenderer, int x, int y);

void draw(SDL_Renderer *gRenderer)
{
    int x = 7;
    int y = 7;
    for (int i = 0; i < 3; ++i) {
        square(gRenderer, x + i * 50, y + i * 50);
        // create a function that draws one square and takes 2 parameters:
        // the x and y coordinates of the square's top left corner
        // and draws a 50x50 square from that point.
        // draw at least 3 squares with that function.
        // avoid code duplication.
    }
}

void square(SDL_Renderer *gRenderer, int x, int y)
{

    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_Rect fillRect = {x, y, 50, 50};
    //draw rectangle
    SDL_RenderFillRect(gRenderer, &fillRect);


}