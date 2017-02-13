//
// Created by kevin on 13/02/17.
//

#include "liste.h"


void init_joueurs(Joueur joueurs[]) {

	strcpy(joueurs[0].nom, "X");
	joueurs[0].precedent = 4;
	joueurs[0].suivant = 2;

	strcpy(joueurs[0].nom, "A");
	joueurs[0].precedent = 2;
	joueurs[0].suivant = 3;
	
	strcpy(joueurs[0].nom, "M");
	joueurs[0].precedent = 0;
	joueurs[0].suivant = 1;
	
	strcpy(joueurs[0].nom, "R");
	joueurs[0].precedent = 1;
	joueurs[0].suivant = 4;

	strcpy(joueurs[0].nom, "C");
	joueurs[0].precedent = 3;
	joueurs[0].suivant = 0;

}