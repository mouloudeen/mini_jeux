#include "nombreMystere.h"

/* Choix du nombre au hasard entre mini et maxi*/
int chooseRandomNumber(int mini, int maxi){
    srand(time(NULL));
    
    int secret = rand()%(maxi-mini)+mini;
    printf("secret = %d\n", secret);
    return secret;
}
