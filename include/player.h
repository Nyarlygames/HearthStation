#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    private:
    GLuint texture[9];

    public:
    int id;
    SDL_Rect lookat;
    //Le constructeur permettant l'initialisation des variables
    Player(int index);

  //  void handle_events();

    //montrer le personnage
    void show();
};


#endif //PLAYER_H
