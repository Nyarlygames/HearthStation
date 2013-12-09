//Les fichiers d'entête
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "SDL/SDL_ttf.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/Deck.h"
#include "include/Set.h"
#include "include/Card.h"
#include "include/player.h"

#define FPS 50
#define LARGEUR_FENETRE 1600
#define HAUTEUR_FENETRE 800

const int SCREEN_BMP = 32;

SDL_Rect optos;
SDL_Rect launchos;
SDL_Rect lanos;
SDL_Rect bg;
SDL_Rect cursorl;

SDL_Surface *launchd = NULL;
SDL_Surface *land = NULL;
SDL_Surface *optd = NULL;


SDL_Color textColord = { 200, 0, 0 };
Deck::Deck(SDL_Surface *window){
    bool quit = false;
    //screen = window;
    SDL_Init( SDL_INIT_EVERYTHING );
    screen = SDL_SetVideoMode( LARGEUR_FENETRE, HAUTEUR_FENETRE, SCREEN_BMP, SDL_SWSURFACE );
    TTF_Init();
    SDL_WM_SetCaption( "Deck", NULL );
    launchos.x = 50;
    launchos.y = HAUTEUR_FENETRE/4;
    lanos.x = 50;
    lanos.y = HAUTEUR_FENETRE*2/4;
    optos.x = 50;
    optos.y = HAUTEUR_FENETRE*3/4;
    allset = new Collection(screen);
   // base = new Set("BaseSet.col", screen);
    bg.x = 0;
    bg.y = 0;
    cursorl.x = 20;
    cursorl.y = HAUTEUR_FENETRE/4;
    TTF_Font *font;
    font = TTF_OpenFont( "CaslonBold.ttf", 30 );
    bgd = IMG_Load("img/deck.png");
    launchd = TTF_RenderText_Solid( font, "mlolVS", textColord );
    land= TTF_RenderText_Solid( font, "testDeck", textColord );
    optd= TTF_RenderText_Solid( font, "Options", textColord );
    cursord = TTF_RenderText_Solid( font, "+", textColord );
}

void Deck::loop()
{
      SDL_Flip( screen );

        SDL_BlitSurface( bgd, NULL, screen, &bg );
        SDL_BlitSurface( launchd, NULL, screen, &launchos );
        SDL_BlitSurface( land, NULL, screen, &lanos );
        SDL_BlitSurface( optd, NULL, screen, &optos );
        SDL_BlitSurface( cursord, NULL, screen, &cursorl );
        allset->col[0]->loop();
        allset->col[1]->loop();
       // if (base != NULL)
      //      if (base->c != NULL)
       //     base->c->loop();
}

void Deck::show(SDL_Surface *screen, SDL_Surface *background,SDL_Event event)
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
