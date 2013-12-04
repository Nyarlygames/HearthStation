#ifndef Deck_H
#define Deck_H
#include "player.h"

class Deck
{
    public:
    //Le constructeur permettant l'initialisation des variables
    Deck();

    void loop(SDL_Surface *screen, SDL_Surface *background, SDL_Event event);

    //montrer le personnage

    void show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event);
};

#endif //Deck_H
