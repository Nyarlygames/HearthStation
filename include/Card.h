#ifndef Card_H
#define Card_H
#include "player.h"

class Card
{
    public:
        SDL_Surface *onscreen;
    //Le constructeur permettant l'initialisation des variables
    Card();

    void loop(SDL_Surface *screen);

    //montrer le personnage

    void show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event);
};

#endif //Card
