#ifndef Card_H
#define Card_H

class Card
{
    public:
        SDL_Surface *onscreen;
        SDL_Surface *img;
        char        *text;
        char        *name;
        char        *url;
        int         cost;
        int         id;
        char        *type;

    Card(int id, int cost, char*url, char *name, char *text, SDL_Surface *screen);

    void loop();

    void show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event);
};

#endif
