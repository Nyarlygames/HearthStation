#ifndef Collection_H
#define Collection_H


#include "Card.h"

class Collection
{
    public:
        Card *c;
        SDL_Surface *screen;

    Collection(SDL_Surface *s);

    void loop();
};

#endif //Collection_H
