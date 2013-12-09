#ifndef Set_H
#define Set_H

#include <string>
#include "Card.h"

class Set
{
    public:
        SDL_Surface *screen;
        Card *c;

    Set(char *filename, SDL_Surface *s);

    void addcard(char * line);
};

#endif //Set_H
