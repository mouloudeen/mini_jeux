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
