#include "draw.h"
void square(SDL_Renderer* gRenderer, int size);
void draw(SDL_Renderer* gRenderer) {
    // create a function that draws one square and takes 1 parameters:
    // the square size
    // and draws a square of that size to the center of the canvas.
    // draw at least 3 squares with that function.
    // the squares should not be filled otherwise they will hide each other
    // avoid code duplication.
        for(int i = 0; i < 3; ++i) {
        square(gRenderer,  i *36);
    }
}
void square(SDL_Renderer *gRenderer, int size)
{
    int center = 520 - size;

    SDL_SetRenderDrawColor(gRenderer, 140, 200, 190, 0);

    SDL_RenderDrawLine(gRenderer, size, size, size, center);
    SDL_RenderDrawLine(gRenderer, size, center, center, center);
    SDL_RenderDrawLine(gRenderer, center, center, center, size);
    SDL_RenderDrawLine(gRenderer, size, size, center, size);

}


