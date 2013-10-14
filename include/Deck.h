#ifndef Deck_H
#define Deck_H
#include "player.h"

class Deck
{
    public:
        SDL_Event event2;
    //Le constructeur permettant l'initialisation des variables
    Deck(SDL_Event event);

    void loop(SDL_Surface *screen, SDL_Surface *background);

    //montrer le personnage

    void show(int a, int b, int c);
};

#endif //Deck_H
