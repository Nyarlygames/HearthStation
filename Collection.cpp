#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "SDL/SDL_ttf.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/Collection.h"
#include "include/Card.h"


Collection::Collection(SDL_Surface *s){
    screen = s;
    col = (Card **) malloc (sizeof(Card) * 689);
    int id = 0;
    col[id] = (Card *) malloc (sizeof(Card));
    col[id] = new Card(id, 2, "img/cards/1.png", "Fiery Armor", "+4 attack this turn", s);
    id++;
    col[id] = (Card *) malloc (sizeof(Card));
    col[id] = new Card(id, 0, "img/cards/2.png", "Valeera", "test", s);
    id++;
}

void Collection::loop()
{
}
