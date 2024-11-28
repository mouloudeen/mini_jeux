#include "nombreMystere.h"

/* Choix du nombre au hasard entre mini et maxi*/
int chooseRandomNumber(int mini, int maxi){
    srand(time(NULL));
    
    int secret = rand()%(maxi-mini)+mini;
    printf("secret = %d\n", secret);
    return secret;
}

/* choix par un humain entre mini et maxi*/
int chooseHumanNumber(int mini, int maxi){
    
    int secret;
    printf("Choisir un nombre entre %d et %d\n", mini, maxi);
    scanf("%d",&secret);
    printf("secret = %d\n", secret);
    return secret;
    
}

/* l'humain cherche le nombre secret*/
int searchNumberHuman(int mini,int maxi){
    
    int nombre;
    printf("le nombre à chercher est entre %d et %d\n",mini, maxi);
    scanf("%d",&nombre);
    printf("le nombre de recherche = %d\n",nombre);
    return nombre;
}

/* random cherche le nombre secret*/
int searchNumberRandom(int mini,int maxi){
    
    srand(time(NULL));
    
    int nombre = rand()%(maxi-mini)+mini;
    printf("nombre = %d\n", nombre);
    return nombre;
}

/* ordi cherche le nombre secret*/
int searchNumberPC(int mini,int maxi){
    int nombre = (maxi+mini)/2;
    printf("nombre = %d\n", nombre);
    return nombre;
}
/* on va essayer de faire le programme avec les conditions sur mini et maxi pour les 5 fonctions*/
