#include <iostream>
#include "header/game.hpp"
using namespace std;

int main(int argc, char* args[]) 
{
    srand(time(NULL));
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        cout << "Subsystems Initialized... " << endl;
    }
    int imgFlags = IMG_INIT_PNG;
    if( !( IMG_Init( imgFlags ) & imgFlags ) )
    {
        printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
    }
    
    Game game("Tetris");
    while(game.running())
    {
        game.handleStatus();
        SDL_PollEvent(&game.e);
        if(game.e.type == SDL_QUIT)
        {
            break;
        }
    }
    return 0;
}