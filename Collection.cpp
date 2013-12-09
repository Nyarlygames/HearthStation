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
    c = new Card(1, 2, "img/cards/1.png", "Fiery Armor", "+4 attack this turn", s);
}

void Collection::loop()
{
}
