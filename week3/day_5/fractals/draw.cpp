#include "draw.h"
#include <SDL.h>

void draw_recursive(SDL_Renderer* gRenderer, Sint16 x1, Sint16 y1, Sint16 x2,Sint16 y2, int depth)
{
     if (depth == 7) {
         return;

     }
    SDL_SetRenderDrawColor(gRenderer,0,0,0,255);
    SDL_Rect fillRect = {x1, y1, x2, y2}; // square
    SDL_RenderFillRect(gRenderer, &fillRect);
    draw_recursive(gRenderer, (x1/3), (y1/3), (x2/3), (y2/3) ,depth + 1); // bal felső
    draw_recursive(gRenderer, (x1/3) + x2 ,  (y1/3),  (x2/3)  , (y2/3) ,depth + 1); //felül közép
    draw_recursive(gRenderer, (x1/3) + 2 * x2  , (y1/3), (x2/3), (y2/3) ,depth + 1); // jobb felső
    draw_recursive(gRenderer,  (x1/3), (y1/3 + y2), (x2/3), (y2/3) ,depth + 1); // bal közép
    draw_recursive(gRenderer, (x1/3),(y1/3) + 2* y2, (x2/3),  (y2/3) ,depth + 1); //bal alsó
    draw_recursive(gRenderer, (x1/3) + x2 ,(y1/3) + 2 * y2 , (x2/3),  (y2/3) ,depth + 1); //középső also
    draw_recursive(gRenderer, (x1/3) + 2 * x2 ,(y1/3) + 2 * y2 , (x2/3),  (y2/3) ,depth + 1); //jobb also
    draw_recursive(gRenderer, (x1/3) + 2 * x2 ,(y1/3) + 2 * y2 , (x2/3),  (y2/3) ,depth + 1); //jobb also



}


   void draw(SDL_Renderer* gRenderer) {

       draw_recursive(gRenderer, 645 / 3, 645 / 3, 645 / 3,  645 / 3, 0);

   }