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
    bool rep = false;
    int secret;
    
    
    while (rep == false){
        
        printf("Choisir un nombre entre %d et %d\n", mini, maxi);
        scanf("%d",&secret);
        if ((secret >= mini) && (secret <= maxi)){
            rep = true;
        }
    }
    
    printf("secret = %d\n", secret);
    return secret;
    
}

/* l'humain cherche le nombre secret*/
int searchNumberHuman(int mini,int maxi){
    
    bool rep = false;
    int nombre;
    
    while (rep == false){
        
        printf("le nombre à chercher est entre %d et %d\n",mini, maxi);
        scanf("%d",&nombre);
        if ((nombre >= mini) && (nombre <= maxi)){
            rep = true;
        }
       
    }
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

/* choix du premier joueur*/
int Playerchoose(int mini, int maxi){
    char choix;
    bool rep = false;
    
    while(rep == false){
        printf("Choisir entre l'ordinateur' et le joueur humain pour donner le nombre mystère (o/h)\n");
        scanf("%c",&choix);
        
        if ((choix == 'o') || (choix == 'h') ){
            rep = true;
        }
    }
    switch (choix){
        case 'o':
            return chooseRandomNumber(mini,maxi);
            break;
        
        case 'h':
            return chooseHumanNumber(mini,maxi);
            break;
    }
}
