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
    int nbJoueursRestants = NB_JOUEURS ;
    int tete = 0 ;
    int nbSauts = 0 ;
    int nbSautsRestant = 0 ;
    int i = 0 ;

    //on défini le nombre de tours
    srand(time(NULL));
    tete = rand()%(NB_JOUEURS) ;
    nbSauts = (rand()%(15-5))+5 ;  //nombre aléatoire en 5 et 15
    nbSautsRestant = nbSauts ;

    printf("Tete : %d\n" , tete);
    printf("Nombre de sauts : %d\n" , nbSauts);

    init_joueurs(joueurs) ;

    jouer_tour(joueurs , nbSauts , tete);
    nbJoueursRestants-- ;


    return  0  ;
}