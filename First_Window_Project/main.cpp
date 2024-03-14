//Our setup for now is a bit unique so here is an example of how to include the SDL libraries in our projects
#define SDL_MAIN_HANDLED
#include "..\..\SDL2\headers\SDL.h"
#include "..\..\SDL2\headers\SDL_image.h"
#include "..\..\SDL2\headers\SDL_mixer.h"

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdio.h>

#include "chicken.h"
#include "pig.h"
#include "cow.h"
#include "giraffe.h"
#include "sheep.h"

namespace SDL_globals
{
    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HEIGHT = 860;

    SDL_Window* window = NULL;

    SDL_Surface* screen_surface = NULL;

    SDL_Surface* image_surface = NULL;
    SDL_Surface* text_surface = NULL;

    SDL_Rect yopos;

    vector<Animal*> animals;
    
    //The music that will be played
    Mix_Music* music_jazz = NULL;

    //The sound effects that will be used
    Mix_Chunk* sound_screaming = NULL;
    Mix_Chunk* sound_high = NULL;
    Mix_Chunk* sound_spook = NULL;
    Mix_Chunk* sound_low = NULL;
    Mix_Chunk* sound_monster = NULL;
}

using namespace std;
using namespace SDL_globals;

Animal* grab_animal(int t){
    Animal* the_animal = animals[t];

    cout<<"Click on "<<the_animal->name<<" this is the noise he makes ";
    the_animal->speak();

    return the_animal;
}

int main(){
    animals.push_back(new Sheep("Woolie"));
    animals.push_back(new Pig("Puck"));
    animals.push_back(new Cow("Bessie"));
    animals.push_back(new Chicken("Cluck Norris"));
    animals.push_back(new Giraffe("Long Neck Leaporad Moose"));

    SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO);

    window = SDL_CreateWindow("the game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    screen_surface = SDL_GetWindowSurface(window);

    // Setting the position of the text surface
    yopos.x = 0;
    yopos.y = 0;

    // Adding the sheep text part of the screen
    /*text_surface = SDL_LoadBMP("choose.BMP");
    SDL_BlitSurface(text_surface, NULL, screen_surface, &yopos);*/

    // Changing the position for the image surface

    // Adding the farm scene
    image_surface = SDL_LoadBMP("Farmies.bmp");
    SDL_BlitSurface(image_surface, NULL, screen_surface, NULL);
    music_jazz= SDL_LoadMUS("Jazz.mp3")
    SDL_UpdateWindowSurface(window);
    Mix_PlayChannel(-1,g)
    int whichAnimal = 0;
    Animal* the_animal = grab_animal(whichAnimal);

    SDL_Event e;
    bool quit = false;
    while(quit == false){
        while(SDL_PollEvent(&e)){
            if(e.type == SDL_QUIT){quit = true;}
            
            if(e.type == SDL_MOUSEBUTTONDOWN){
                int x, y;
                SDL_GetMouseState( &x, &y );

                string is_click = " ";
                
                the_animal = animals[whichAnimal];

                switch(whichAnimal){
                    //sheep
                    case(0):
                        if(((x>=1000)&&(x<=1121)) && ((y>=530)&&(y<=730))){
                            is_click = "First.bmp";
                        }else{
                            cout<<"\nThat is not "<<the_animal->name<< ".\n";
                            cout<<"I can't belive you messed up.\n";
                            cout<<"Don't do it again.\n";
                            cout<<"\nClick on "<<the_animal->name<<" this is the noise he makes ";
                            the_animal->speak();
                        }
                        break;
                    //pig
                    case(1):
                        if(((x>=0)&&(x<=65)) && ((y>=530)&&(y<=730))){
                            is_click = "Half_Way.bmp"
                        }else{
                            cout<<"\nThat is not "<<the_animal->name<<".\n";
                            cout<<"You are treading on dangerous ground.\n";
                            cout<<"I have a rope back in the barn.\n";
                            cout<<"Maybe you could use it.\n";
                            cout<<"It would be more enjoyable fate than messing up again.\n";
                            cout<<"\nClick on "<<the_animal->name<<" this is the noise he makes ";
                            the_animal->speak();
                        }
                        break;
                    //cow
                    case(2):
                        if(((x>=325)&&(x<=440)) && ((y>=285)&&(y<=335))){
                            is_click = "3_Progress.bmp";
                        }else{
                            cout<<"\nThat is not "<<the_animal->name<<".\n";
                            cout<<"is_click\n";
                            cout<<"If you value your life\n";
                            cout<<"\nClick on "<<the_animal->name<<" this is the noise she makes ";
                            the_animal->speak();
                        }
                        break;
                    //chicken
                    case(3):
                        if(((x>=1670)&&(x<=1715)) && ((y>=111)&&(y<=143))){
                            is_click = "Full_Progress.bmp"
                        }else{
                            cout<<"\nThat is not "<<the_animal->name<<".\n";
                            cout<<"DIE\n";
                            cout<<"DIE\n";
                            cout<<"DIE\n";
                            cout<<"DIE\n";
                            cout<<"DIE\n";
                            cout<<"\nClick on "<<the_animal->name<<" this is the noise he makes ";
                            the_animal->speak();
                        }
                        break;
                    //giraffe
                    case(4):
                        cout<<"\nsummoning the holy giraffe pet of cthulhu himself. You shall die a glorious death.";
                        image_surface = SDL_LoadBMP("Scare.bmp");
    
                        SDL_BlitSurface(image_surface, NULL, screen_surface, &yopos);
                            
                        SDL_UpdateWindowSurface(window);
                        whichAnimal++;
                        break;
                    case(5):
                        image_surface = SDL_LoadBMP("Game_Over.bmp");
    
                        SDL_BlitSurface(image_surface, NULL, screen_surface, &yopos);
                            
                        SDL_UpdateWindowSurface(window);
                        whichAnimal++;
                        break;
                    default:
                        quit = true;
                        break;
                }

                if(is_click!=" "){
                    cout<<"\nthat was "<<the_animal->name<<"\n";
                    cout<<"Nice job\n\n";
                    whichAnimal++;
                    the_animal = grab_animal(whichAnimal);
                    image_surface = SDL_LoadBMP(is_click);

                    SDL_BlitSurface(image_surface, NULL, screen_surface, &yopos);
                    
                    SDL_UpdateWindowSurface(window);
                }
            }
        }
    }
    for (Animal* i : animals)
    {
        delete i;
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
}