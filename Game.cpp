//Les fichiers d'ent�te
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/Game.h"
#include "include/player.h"

extern int xp;
extern int yp;
extern int zp;

extern int mapy;
extern int mapx;

Game::Game(int pcount)
{
    nbplayers = pcount;
    players = (Player **) malloc(sizeof(Player) * nbplayers);
    for (int i = 0; i < nbplayers; i++) {
        players[i] = new Player(i);
    }
    players;
    /*
    //Initialisation des variables de mouvement
    offSet = 0;
    velocity = 0;

    //Initialisation des variables d'animation
    frame = 0;
    status = Game_RIGHT;

    //D�part du timer
    anim.start();*/
}/*

void Game::handle_events()
{/*
    //Si une touche est pr�ss�e
    if( event.type == SDL_KEYDOWN )
    {
        //mise � jour de la velocit�
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity += (Game_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity -= (Game_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
    //si une touche est relach�e
    else if( event.type == SDL_KEYUP )
    {
        //Mise � jour de la velocit�
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity -= (Game_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity += (Game_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
}*/

void Game::show(int a, int b, int c)
{
    /*
    //Mouvement
    offSet += velocity;

    //On garde le personnage dans les limites de la fen�tre SDL
    if( ( offSet < 0 ) || ( offSet + Game_WIDTH > SCREEN_WIDTH ) )
    {
        offSet -= velocity;
    }

    //Si Game bouge � gauche
    if( velocity < 0 )
    {
        //On prend le personnage de profil gauche
        status = Game_LEFT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Game_DELAI_FRAME ) {

			// On remet le timer � 0
			anim.start();

			// On passe � la frame suivante
			frame++;
		}
    }
    //Si Game bouge � droite
    else if( velocity > 0 )
    {
        //On prend le personnage de profil droit
        status = Game_RIGHT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Game_DELAI_FRAME ) {

			// On remet le timer � 0
			anim.start();

			// On passe � la frame suivante
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
