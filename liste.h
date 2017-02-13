//
// Created by kevin on 13/02/17.
//

#ifndef TP_LISTE1_LISTE_H
#define TP_LISTE1_LISTE_H

#include <string.h>

#define NB_JOUEURS 10


typedef struct Joueur {
	char nom[20];
	int precedent;
	int suivant;
} Joueur;



void init_joueurs(Joueur joueurs[]);


#endif //TP_LISTE1_LISTE_H
