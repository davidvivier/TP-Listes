//
// Created by kevin on 13/02/17.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "liste.h"


int main(void)
{
    //Création d'un tableau qui va contenir la liste
    Joueur joueurs[NB_JOUEURS] ;
    int tete = 0 ;
    int nbTours = 0 ;

    //on défini le nombre de tours
    srand(time(NULL));
    nbTours = (int)rand()/RAND_MAX ;

    init_joueurs(joueurs) ;

    return  0  ;
}