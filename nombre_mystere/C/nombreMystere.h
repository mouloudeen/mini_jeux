#ifndef nombreMystere_h
#define nombreMystere_h

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

/* Choix du nombre au hasard entre mini et maxi*/
int chooseRandomNumber(int, int);

/* choix par un humain entre mini et maxi*/
int chooseHumanNumber(int mini, int maxi);

/* l'humain cherche le nombre secret*/
int searchNumberHuman(int mini,int maxi);

/* random cherche le nombre secret*/
int searchNumberRandom(int mini,int maxi);

/* ordi cherche le nombre secret*/
int searchNumberPC(int mini,int maxi);

/* choix du premier joueur*/
int Playerchoose(int mini, int maxi);

/* le jeu du nombre secret*/
void NombreSecret();

#endif /* nombreMystere */


