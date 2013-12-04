#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "SDL/SDL_ttf.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/Card.h"
#include "include/player.h"

#define FPS 50
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600

SDL_Rect cursorc;

SDL_Surface *cursorsc = NULL;

SDL_Color textColorc = { 200, 0, 0 };
Card::Card(){
    cursorc.x = 20;
    cursorc.y = HAUTEUR_FENETRE/4;
    TTF_Font *font;
    font = TTF_OpenFont( "CaslonBold.ttf", 30 );
    cursorsc = TTF_RenderText_Solid( font, "LOLOL", textColorc );
}

void Card::loop(SDL_Surface *screen)
{
        SDL_BlitSurface( cursorsc, NULL, screen, &cursorc );
}

void Card::show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event)
{
}
