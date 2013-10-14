//Les fichiers d'entête
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/player.h"
#include "include/md2.h"

extern int xp;
extern int yp;
extern int zp;

extern int mapy;
extern int mapx;
CMD2Model		Soldier;
CMD2Model		Head;
CMD2Model		Weapon;
CMD2Model		Fx;
bool			bAnimated	= true;


Player::Player(int index)
{
    id = index;

    /*
    //Initialisation des variables de mouvement
    offSet = 0;
    velocity = 0;

    //Initialisation des variables d'animation
    frame = 0;
    status = Player_RIGHT;

    //Départ du timer
    anim.start();*/
}/*

void Player::handle_events()
{
    //Si une touche est préssée
    if( event.tye == SDL_KEYDOWN )
    {
        //mise à jour de la velocité
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity += (Player_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity -= (Player_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
    //si une touche est relachée
    else if( event.tye == SDL_KEYUP )
    {
        //Mise à jour de la velocité
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity -= (Player_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity += (Player_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
}
*/
void Player::show()
{
	float timesec = SDL_GetTicks() / 1000.0;
    //Mouvement
    /*offSet += velocity;

    //On garde le personnage dans les limites de la fenêtre SDL
    if( ( offSet < 0 ) || ( offSet + Player_WIDTH > SCREEN_WIDTH ) )
    {
        offSet -= velocity;
    }

    //Si Player bouge à gauche
    if( velocity < 0 )
    {
        //On prend le personnage de profil gauche
        status = Player_LEFT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Player_DELAI_FRAME ) {

			// On remet le timer à 0
			anim.start();

			// On passe à la frame suivante
			frame++;
		}
    }
    //Si Player bouge à droite
    else if( velocity > 0 )
    {
        //On prend le personnage de profil droit
        status = Player_RIGHT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Player_DELAI_FRAME ) {

			// On remet le timer à 0
			anim.start();

			// On passe à la frame suivante
			frame++;
		}
    }
    //Si Player ne bouge plus
    else
    {
        //Restart the animation
        frame = 1;
    }

    //Boucle l'animation
    if( frame >= Player_NB_ANIM )
    {
        frame = 0;
    }

    //Affichage
    if( status == Player_RIGHT )
    {
        apply_surface( offSet, SCREEN_HEIGHT - Player_HEIGHT, Player, screen, &clipsRight[ frame ] );
    }
    else if( status == Player_LEFT )
    {
        apply_surface( offSet, SCREEN_HEIGHT - Player_HEIGHT, Player, screen, &clipsLeft[ frame ] );
    }*/
}
