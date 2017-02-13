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
    int nbJoueursRestants = NB_JOUEURS;
    int tete = 0;
    int nbSauts = 0;
    int indicePerdant =  -1 ;


    srand(time(NULL)); // Graine aléatoire pour les fonctions rand

    init_joueurs(joueurs) ; // on initialise la liste de joueurs

    while (nbJoueursRestants > 1) // tant qu'il reste plusieurs joueurs
    {
        tete = rand()%(NB_JOUEURS); // on définit une tete pour commencer le tour
        nbSauts = (rand()%(15-5))+5;  //nombre aléatoire en 5 et 15
        indicePerdant = jouer_tour(joueurs , nbSauts , tete); // renvoi le gagnant du tour
        nbJoueursRestants--;
    }

    printf("Le gagnant est %s" ,joueurs[joueurs[indicePerdant].suivant].nom );


    return  0  ;
}