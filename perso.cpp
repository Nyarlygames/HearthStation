//Les fichiers d'ent�te
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "sdlglutils.h"
#include <string>

//Notre personnage
class Player
{
    private:
    GLuint texture[9];
    int offSet;

    //sa vitesse de deplacement
    int velocity;

    //sa frame courante
    int frame;

    //Son statut d'animation
    int status;

    public:
    //Le constructeur permettant l'initialisation des variables
    Player(int a, int b, int c);

    void handle_events();

    //montrer le personnage
    void show(int a, int b, int c);
};

Player::Player(int a,int b,int c)
{
    texture[8] = loadTexture("img/ens.png");
    /*
    //Initialisation des variables de mouvement
    offSet = 0;
    velocity = 0;

    //Initialisation des variables d'animation
    frame = 0;
    status = Player_RIGHT;

    //D�part du timer
    anim.start();*/
}/*

void Player::handle_events()
{/*
    //Si une touche est pr�ss�e
    if( event.type == SDL_KEYDOWN )
    {
        //mise � jour de la velocit�
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity += (Player_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity -= (Player_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
    //si une touche est relach�e
    else if( event.type == SDL_KEYUP )
    {
        //Mise � jour de la velocit�
        switch( event.key.keysym.sym )
        {
            case SDLK_RIGHT: velocity -= (Player_VITESSE / FRAMES_PER_SECOND); break;
            case SDLK_LEFT: velocity += (Player_VITESSE / FRAMES_PER_SECOND); break;
            default: break;
        }
    }
}*/

void Player::show(int a, int b, int c)
{
    glBindTexture(GL_TEXTURE_2D, texture[8]);
    glBegin(GL_QUADS);
    glTexCoord2i(0,1);
    glVertex3d(a,b,40); // HAUT DROIT
    glTexCoord2i(1,1);
    glVertex3d(a,-b,40); // HAUT GAUCHE
    glTexCoord2i(1,0);
    glVertex3d(a,-b,0); // BAS GAUCHE
    glTexCoord2i(0,0);
    glVertex3d(a,b,0); // BAS DROIT
    glEnd();

    /*
    //Mouvement
    offSet += velocity;

    //On garde le personnage dans les limites de la fen�tre SDL
    if( ( offSet < 0 ) || ( offSet + Player_WIDTH > SCREEN_WIDTH ) )
    {
        offSet -= velocity;
    }

    //Si Player bouge � gauche
    if( velocity < 0 )
    {
        //On prend le personnage de profil gauche
        status = Player_LEFT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Player_DELAI_FRAME ) {

			// On remet le timer � 0
			anim.start();

			// On passe � la frame suivante
			frame++;
		}
    }
    //Si Player bouge � droite
    else if( velocity > 0 )
    {
        //On prend le personnage de profil droit
        status = Player_RIGHT;

		//S'il est l'heure, on change l'animation
		if( this->anim.get_ticks() >= Player_DELAI_FRAME ) {

			// On remet le timer � 0
			anim.start();

			// On passe � la frame suivante
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
