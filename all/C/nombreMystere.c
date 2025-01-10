#include "nombreMystere.h"

/* Choix du nombre au hasard entre mini et maxi*/
int chooseRandomNumber(int mini, int maxi){
    srand(time(NULL));
    
    int secret = rand()%(maxi-mini)+mini;
    /*printf("secret = %d\n", secret);*/
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
    
   /* printf("secret = %d\n", secret);*/
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
    /*printf("le nombre de recherche = %d\n",nombre);*/
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
int Playerchoose(char choix){
   
    
    switch (choix){
        case 'o':
            return chooseRandomNumber(1,100);
            break;
        
        case 'h':
            return chooseHumanNumber(1,100);
            break;
    }
}


/* le jeu du nombre secret*/
void NombreSecret(char choix, char choose){
    
    int NombreMystere = Playerchoose(choix);
    
    
    
    
    int (*psearch)(int,int);
    
    
    switch(choose){
        case 'r':
            psearch = &searchNumberRandom;
            break;
            
        case 'o':
            psearch = &searchNumberPC;
            break;
            
        case 'h':
            psearch = &searchNumberHuman;
            break;
            
    }
    int search = 0;
    
    int cpt =0;
    
    int mini = 1;
    int maxi = 100;
    while (( search != NombreMystere) && (cpt < 9)){
         search = (*psearch)(mini,maxi);
        if (search > NombreMystere){
            printf("plus petit\n");
            maxi = search;
            cpt += 1;
        }
        if (search < NombreMystere){
            printf("plus grand\n");
            mini = search;
            cpt += 1;
        }
    }
    
              if (cpt == 9){
                printf("Vous avez perdu, le nombre mystere est : %d\n",NombreMystere);
            }
            
              else{
                printf("Vous avez gagné en %d essaie(s)\n",cpt+1);
            }
        
   
    
    }


