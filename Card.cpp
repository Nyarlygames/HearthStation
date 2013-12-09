#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "SDL/SDL_ttf.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/Card.h"
#include "include/player.h"
#include <sstream>

#define FPS 50
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600

SDL_Rect textr;

SDL_Color textColort = { 200, 0, 0 };
Card::Card(int i, int c, char *u, char *n, char *t, SDL_Surface *screen){
    onscreen = screen;
    textr.x = 20;
    textr.y = HAUTEUR_FENETRE/4;
    id = i;
    cost = c;
    name = n;
    url = u;
    text = t;
    TTF_Font *font;
  //  font = TTF_OpenFont( "CaslonBold.ttf", 30 );
    //text = TTF_RenderText_Solid( font, "LOLOL", textColort );
    img = IMG_Load(url);
}

void Card::loop()
{
        SDL_BlitSurface( img, NULL, onscreen, &textr );
}

void Card::show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event)
{
}
