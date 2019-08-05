#include "draw.h"
#include <vector>

void chekerwhite(SDL_Renderer *gRenderer, int x, int y);

void column(SDL_Renderer *gRenderer, int startx, int starty);

void draw(SDL_Renderer *gRenderer)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < 9; ++i) {
        if(i%2 == 0){
            column(gRenderer, x + (i * 69), y - 69 );
        }else {
            column(gRenderer, x + (i * 69), y);
        }
    }


}

void chekerwhite(SDL_Renderer *gRenderer, int x, int y)
{

    SDL_Rect black = {x, y, 69, 69};
    SDL_RenderFillRect(gRenderer, &black);
    SDL_RenderDrawRect(gRenderer, &black);
}

void column(SDL_Renderer *gRenderer, int startx, int starty)
{

        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);

        for (int i = starty; i < 552; i+=138) {
            chekerwhite(gRenderer, startx, i);

        }

}