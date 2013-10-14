//Les fichiers d'entête
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "SDL/SDL_ttf.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/Deck.h"
#include "include/player.h"

#define FPS 50
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600



SDL_Event event2;

Deck::Deck(SDL_Event event)
{

    event2 = event;
}

void Deck::loop(SDL_Surface *screen, SDL_Surface *background)
{

    TTF_Font *font;
    TTF_Font *font2;
    bool quit = false;
    SDL_Rect bg;
    SDL_Surface *pcount = NULL;
    SDL_Rect cursorl;

while( quit == false )
    {

    SDL_Color textColor = { 100, 0, 0 };
   // SDL_event event2;
    cursorl.x = 20;
    cursorl.y = HAUTEUR_FENETRE/4;
    cursorl.x = 20;
    cursorl.y = HAUTEUR_FENETRE/4;
    pcount = TTF_RenderText_Solid( font, "HEARTHSTATION DECK", textColor );

    font = TTF_OpenFont( "Gore Font II.ttf", 28 );
    font2 = TTF_OpenFont( "brutal-tooth.ttf", 28 );
        bg.x = 0;
        bg.y = 0;
        SDL_Flip(screen);
        SDL_BlitSurface( background, NULL, screen, &bg );
        SDL_BlitSurface( pcount, NULL, screen, &cursorl );
        while( SDL_PollEvent( &event2 ) )
        {
              switch(event2.type)
            {
                case SDL_QUIT:
                    quit = true;
                break;
                case SDL_KEYDOWN:
                switch (event2.key.keysym.sym)
                {
                    case SDLK_KP1:
                        pcount = TTF_RenderText_Solid( font2, "1", textColor );
                        break;
                    case SDLK_KP2:
                        pcount = TTF_RenderText_Solid( font, "2", textColor );
                        break;
                    case SDLK_ESCAPE:
                        quit=true;
                        break;
                    case SDLK_UP:
                    if (cursorl.y > HAUTEUR_FENETRE/4)
                        cursorl.y -= (HAUTEUR_FENETRE/4);
                    else
                        cursorl.y = (HAUTEUR_FENETRE/4);
                    break;
                    case SDLK_DOWN:
                    if (cursorl.y < HAUTEUR_FENETRE*3/4)
                        cursorl.y += (HAUTEUR_FENETRE/4);
                    else
                        cursorl.y = (HAUTEUR_FENETRE*3/4);
                    break;
                    case SDLK_RETURN:
                    break;
                }
            }
        }
    }
}

void Deck::show(int a, int b, int c)
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
