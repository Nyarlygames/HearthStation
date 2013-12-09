#ifndef Card_H
#define Card_H

class Card
{
    public:
        SDL_Surface *onscreen;
        SDL_Surface *img;
        char        *text;
        char        *name;
        int         mana;
        char        *type;

    Card();

    void loop(SDL_Surface *screen);

    void show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event);
};

#endif
