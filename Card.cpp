//Les fichiers d'entête
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
    /*
    //Mouvement
    offSet += velocity;

    //On garde le personnage dans les limites de la fenêtre SDL
    if( ( offSet < 0 ) || ( offSet + Game_WIDTH > SCREEN_WIDTH ) )
    {
        offSet -= velocity;
    }

    //Si Game bouge à gauche
    if( velocity < 0 )
    {
        //On prend le personnage de profil gauche
        status = Game_LEFT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Game_DELAI_FRAME ) {

			// On remet le timer à 0
			anim.start();

			// On passe à la frame suivante
			frame++;
		}
    }
    //Si Game bouge à droite
    else if( velocity > 0 )
    {
        //On prend le personnage de profil droit
        status = Game_RIGHT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Game_DELAI_FRAME ) {

			// On remet le timer à 0
			anim.start();

			// On passe à la frame suivante
			frame++;
		}
    }
    //Si Game ne bouge plus
    else
    {
        //Restart the animation
        frame = 1;
    }

    //Boucle l'animation
    if( frame >= Game_NB_ANIM )
    {
        frame = 0;
    }

    //Affichage
    if( status == Game_RIGHT )
    {
        apply_surface( offSet, SCREEN_HEIGHT - Game_HEIGHT, Game, screen, &clipsRight[ frame ] );
    }
    else if( status == Game_LEFT )
    {
        apply_surface( offSet, SCREEN_HEIGHT - Game_HEIGHT, Game, screen, &clipsLeft[ frame ] );
    }*/
}
