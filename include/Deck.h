#ifndef Deck_H
#define Deck_H
#include "player.h"

class Deck
{
    public:
        SDL_Surface *screen;
    //Le constructeur permettant l'initialisation des variables
    Deck(SDL_Surface *window);

    void loop();

    //montrer le personnage

    void show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event);
};

#endif //Deck_H
