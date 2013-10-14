//Les fichiers d'ent�te
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include <string>
#include "include/ens.h"

Ennemy::Ennemy(int a,int b,int c)
{
    x = a;
    y = b;
    z = c;

    // load and initialize the Ogros model
	Ogro.LoadModel( "models/Ogros.md2", x, y , z, -180);
	Ogro.LoadSkin( "models/igdosh.pcx" );
	Ogro.SetAnim( 0 );
	Ogro.ScaleModel( 0.5);

	// load and initialize Ogros' weapon model
	Weapon.LoadModel( "models/Weapon.md2", x, y , z, -180);
	Weapon.LoadSkin( "models/Weapon.pcx" );
	Weapon.SetAnim( STAND );
	Weapon.ScaleModel( 0.5 );
    /*
    //Initialisation des variables de mouvement
    offSet = 0;
    velocity = 0;

    //Initialisation des variables d'animation
    frame = 0;
    status = Ennemy_RIGHT;

    //D�part du timer
    anim.start();*/
}/*

void Ennemy::handle_events()
{/*
    //Si une touche est pr�ss�e
    if( event.type == SDL_KEYDOWN )
    {
        //mise � jour de la velocit�
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity += (Ennemy_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity -= (Ennemy_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
    //si une touche est relach�e
    else if( event.type == SDL_KEYUP )
    {
        //Mise � jour de la velocit�
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity -= (Ennemy_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity += (Ennemy_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
}*/

void Ennemy::show()
{
	float timesec = SDL_GetTicks() / 1000.0;
	Ogro.DrawModel( bAnimated ? timesec : 0.0, x, y, z, -180);
	Weapon.DrawModel( bAnimated ? timesec : 0.0, x, y, z, -180);


    /*
    //Mouvement
    offSet += velocity;

    //On garde le personnage dans les limites de la fen�tre SDL
    if( ( offSet < 0 ) || ( offSet + Ennemy_WIDTH > SCREEN_WIDTH ) )
    {
        offSet -= velocity;
    }

    //Si Ennemy bouge � gauche
    if( velocity < 0 )
    {
        //On prend le personnage de profil gauche
        status = Ennemy_LEFT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Ennemy_DELAI_FRAME ) {

			// On remet le timer � 0
			anim.start();

			// On passe � la frame suivante
			frame++;
		}
    }
    //Si Ennemy bouge � droite
    else if( velocity > 0 )
    {
        //On prend le personnage de profil droit
        status = Ennemy_RIGHT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Ennemy_DELAI_FRAME ) {

			// On remet le timer � 0
			anim.start();

			// On passe � la frame suivante
			frame++;
		}
    }
    //Si Ennemy ne bouge plus
    else
    {
        //Restart the animation
        frame = 1;
    }

    //Boucle l'animation
    if( frame >= Ennemy_NB_ANIM )
    {
        frame = 0;
    }

    //Affichage
    if( status == Ennemy_RIGHT )
    {
        apply_surface( offSet, SCREEN_HEIGHT - Ennemy_HEIGHT, Ennemy, screen, &clipsRight[ frame ] );
    }
    else if( status == Ennemy_LEFT )
    {
        apply_surface( offSet, SCREEN_HEIGHT - Ennemy_HEIGHT, Ennemy, screen, &clipsLeft[ frame ] );
    }*/
}
