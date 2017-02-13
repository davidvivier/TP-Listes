/********************************************************************/
/*** VIVIER David													*/
/*** VARAGNAT Kévin													*/
/*** 13/02/2017											            */
/*** Programme qui représente le jeu de "La patate chaude"      	*/
/*** Exécuter ./liste pour utiliser le programme 					*/
/*** Exécuter "make clean" pour nettoyer							*/
/********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "liste.h"


int main(void)
{
    //Création d'un tableau qui va contenir la liste

    Joueur joueurs[NB_JOUEURS];


    srand(time(NULL)); // Graine aléatoire pour les fonctions rand

    jouer_partie(joueurs , 15);


    return  0;
}