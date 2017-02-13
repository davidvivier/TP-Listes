//
// Created by kevin on 13/02/17.
//

#ifndef TP_LISTE1_LISTE_H
#define TP_LISTE1_LISTE_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_JOUEURS 5

typedef struct Joueur {
	char nom[20];
	int precedent;
	int suivant;
} Joueur;


typedef enum Sens {AVANT = 1, ARRIERE = 0} Sens;

typedef enum Mode {CLASSIQUE = 1, CHAMPIONNAT = 2} Mode;

void init_joueurs(Joueur joueurs[]);

void supprimer_joueur(Joueur joueurs[], int indice);


/*	
	exécute un tour de patate chaude, à partir d'un joueur et d'un nombre de sauts.
	Supprime le joueur ayant perdu, puis renvoie l'indice de celui-ci.

	entrée/sortie : joueurs, tableau de Joueur
	entrée : nbSauts, nombre de sauts à effectuer
	entrée : joueurDepart, le premier joueur qui reçoit la patate

	sortie : l'indice du joueur perdant

*/
int jouer_tour(Joueur joueurs[], int nbSauts, int joueurDepart , Mode mode);


Mode menuMode();

void jouer_partie(Joueur joueurs[] , int nb_parties, Mode mode);

#endif //TP_LISTE1_LISTE_H
