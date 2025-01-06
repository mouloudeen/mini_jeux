#ifndef pfc_h
#define pfc_h

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <string.h>
#include <time.h>

/* ordinateur joue aléatoirement*/
int randomPlayer();

/* jeu de l'humain*/
int humanPlayer();

/* on choisit si c'est un humain ou l'ordinateur */
/*char choixjoueur(char nomplayer[10]);*/

/* choisir le joueur soit humain ou random*/
int choix_joueur(char);

/* Pierre Feuille Ciseau*/
void pfc(char, char);

#endif /* pfc */
