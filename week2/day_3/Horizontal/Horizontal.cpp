#include "draw.h"
void drawing(SDL_Renderer* gRenderer, int x, int y);
void draw2(SDL_Renderer* gRenderer) {
    // Create a function that draws a single line and takes 2 parameters:
    // The x and y coordinates of the line's starting point
    // and draws a 50 long horizontal line from that point.
    // Draw at least 3 lines with that function using a loop.
    int x = 100;
    int y = 240;
        drawing(gRenderer, x, y);

}
void drawing(SDL_Renderer* gRenderer, int x, int y){
    for(int i = 0; i < 3; ++i){
    SDL_SetRenderDrawColor(gRenderer, 180, 220, 0x00, 120);
    SDL_RenderDrawLine(gRenderer, x, (y + i * 10) + 50 , x  + 50, (y + i * 10) + 50);
}
}
