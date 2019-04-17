#include <SDL/SDL.h>

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    
    auto win = SDL_SetVideoMode(
        640, 480, 32, 
        SDL_FULLSCREEN | SDL_HWSURFACE);
    
    SDL_FillRect(
        win,  // SDL_Surface to apply to
        NULL, // pointer to SDL_Rect, NULL means 'cover whole screen'
        SDL_MapRGB(win->format, 255, 255, 0)); // color

    SDL_Flip(win);

    SDL_Delay(5000); // ~1 second
    
    SDL_Quit();

    return 0;
}

