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
        square(gRenderer,  i *30);
    }
}
void square(SDL_Renderer *gRenderer, int size)
{
    int center =520 - (size / 2);
    int center2 = 390 - (size / 2);

    SDL_SetRenderDrawColor(gRenderer, 140, 200, 190, 0);
    SDL_Rect emptyRect = { center, center2, size, size};
    SDL_RenderDrawRect (gRenderer, &emptyRect);
}


