//
// Created by kevin on 13/02/17.
//

#include "liste.h"


void init_joueurs(Joueur joueurs[]) {

	strcpy(joueurs[0].nom, "X");
	joueurs[0].precedent = 4;
	joueurs[0].suivant = 2;

	strcpy(joueurs[1].nom, "A");
	joueurs[1].precedent = 2;
	joueurs[1].suivant = 3;
	
	strcpy(joueurs[2].nom, "M");
	joueurs[2].precedent = 0;
	joueurs[2].suivant = 1;
	
	strcpy(joueurs[3].nom, "R");
	joueurs[3].precedent = 1;
	joueurs[3].suivant = 4;

	strcpy(joueurs[4].nom, "C");
	joueurs[4].precedent = 3;
	joueurs[4].suivant = 0;

}


void supprimer_joueur(Joueur joueurs[], int indice) {
	 joueurs[ joueurs[indice].precedent ].suivant = joueurs[indice].suivant;
	 joueurs[ joueurs[indice].suivant ].precedent = joueurs[indice].precedent; 
}

int jouer_tour(Joueur joueurs[], int nbSauts, int joueurDepart, Mode mode) {

	//printf("-in supprimer_joueur(nbSauts=%d, joueurDepart=%d)\n", nbSauts, joueurDepart);

	int nbSautsRestants = nbSauts;

	// l'indice du joueur qui a la patate 
	int joueurCourant = joueurDepart;

	while (nbSautsRestants > 0) {
		
		Sens sensDeplacement = rand()%2;

		// le joueur courant reçoit la patate
		if (ARRIERE == sensDeplacement) {
			joueurCourant = joueurs[joueurCourant].precedent;
			//printf("ARRIERE\n");
		} else if (AVANT == sensDeplacement) {
			joueurCourant = joueurs[joueurCourant].suivant;
			//printf("AVANT\n");
		}

		nbSautsRestants--;
		
		//printf("joueurCourant = %d, nbSautsRestants = %d, sens = %d \n", joueurCourant, nbSautsRestants, sensDeplacement);
	}

	// le compteur est arrivé à zéro, le joueur courant a perdu
	if (mode == CLASSIQUE) {
		supprimer_joueur(joueurs, joueurCourant);
	}

	return joueurCourant;
}


Mode menu() {
	Mode mode = CLASSIQUE;

	do {
		printf("Choisir un mode de jeu :\n");
		printf("  1 - Mode classique\n");
		printf("  2 - Mode Championnat\n");
		printf(" Choix (1/2) = ");

		scanf("%d", &mode);
	} while (mode != CLASSIQUE && mode != CHAMPIONNAT);

	return mode;
}
