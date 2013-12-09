#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "SDL/SDL_ttf.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "include/sdlglutils.h"
#include "include/Set.h"
#include "include/Card.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using namespace std;

Set::Set(char *filename, SDL_Surface *s){
    string line;
    ifstream myfile (filename);
  ofstream myfile2 (filename);
    screen = s;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
            char *myline;
            myline = (char *) line.c_str();
            addcard(myline);
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

void Set::addcard(char *line)
{
    char *id;
    char *cost;
    char *name;
    char *text;
    int i = 0;
    int j = 0;

    while (line[i] != ' ') {
        id[i] = line [i];
        i++;
    }
    i++;
    while (line[i] != ' ') {
        cost[j] = line[i];
        j++;
        i++;
    }
    i += 2;
    j = 0;
    while (line[i] != '"') {
        name[j] = line[i];
        j++;
        i++;
    }
    name[j] = '\0';
    j = 0;
    i += 3;;
    while (line[i] != '"') {
        text[j] = line[i];
        j++;
        i++;
    }
    text[j] = '\0';


    //c = new Card(atoi(id), atoi(cost), name, text);
   // c = new Card (1, 2, "test", "test", screen);
}

