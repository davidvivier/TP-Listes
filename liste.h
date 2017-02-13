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

/*
	Initialise le tableau de joueurs

	entrée-sortie : joueurs
*/
void init_joueurs(Joueur joueurs[]);

/*
	supprime un joueur
		-> remplace le joueur courant par le joueur suivant pour le joueur précédent, 
		et remplace le joueur courant par le joueur précédent pour le joueur suivant.

	entrée-sortie : joueurs
	entrée : indice, l'indice du joueur à supprimer
*/
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


/*
	Affiche un menu pour choisir le mode de jeu
	sortie : le Mode (enum : CLASSIQUE ou CHAMPIONNAT) choisi par l'utilisateur 
*/
Mode menuMode();

/*
	Joue une partie avec le mode de jeu choisi.

	entrée joueurs : le tableau de joueurs
	entrée nb_parties : le nombre de parties à jouer (pour le mode CHAMPIONNAT)
	entrée mode : le mode de jeu choisi (enum : CLASSIQUE ou CHAMPIONNAT)
*/
void jouer_partie(Joueur joueurs[] , int nb_parties, Mode mode);

#endif //TP_LISTE1_LISTE_H
