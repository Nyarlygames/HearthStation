#ifndef Deck_H
#define Deck_H
#include "Collection.h"

class Deck
{
    public:
        SDL_Surface *screen;
        Collection *allset;
        SDL_Surface *cursord = NULL;
        SDL_Rect cursorl;
        SDL_Surface *bgd = NULL;

    Deck(SDL_Surface *window);

    void loop();

    //montrer le personnage

    void show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event);
};

#endif //Deck_H
