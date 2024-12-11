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
int searchNumberHuman(int mini,int maxi,int minis, int maxis){
    
    bool rep = false;
    int nombre;
    
    while (rep == false){
        
        printf("le nombre à chercher est entre %d et %d\n",mini, maxi);
        scanf("%d",&nombre);
        if ((nombre >= minis) && (nombre <= maxis)){
            rep = true;
        }
       
    }
    printf("le nombre de recherche = %d\n",nombre);
    return nombre;
}

/* random cherche le nombre secret*/
int searchNumberRandom(int mini,int maxi,int minis, int maxis){
    
    srand(time(NULL));
    
    int nombre = rand()%(maxi-mini)+mini;
    printf("nombre = %d\n", nombre);
    return nombre;
}

/* ordi cherche le nombre secret*/
int searchNumberPC(int mini,int maxi,int minis, int maxis){
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

/* le jeu du nombre secret*/
void NombreSecret(){
    int mini, maxi, minis, maxis;
    
    
    printf("choisir le minimum\n");
    scanf("%d",&mini);
    minis = mini;
    
    printf("choisir le maximum\n");
    scanf("%d",&maxi);
    maxis = maxi;
    
    int NombreMystere = Playerchoose(mini,maxi);
    
    bool rep = false;
    char choose;
    while (rep == false){
        
        printf("choisir le random, ordinateur et le joueur humain pour rechercher le nombre mystere(r/o/h)\n");
        scanf(" %c",&choose);
        printf("choose = %c\n",choose);
        
        if ((choose == 'r') || (choose == 'o') || (choose == 'h')){
            rep = true;
        }
        
    }
    
    
    int cpt = 0;
    /*
    int search = 0;
    switch(choose){
        case 'r':
            
            while(( NombreMystere != search) && (cpt < 10)){
                search = searchNumberRandom(mini,maxi);
                if (search > NombreMystere){
                    maxi = search;
                    cpt += 1;
                }
                if (search < NombreMystere){
                    mini = search;
                    cpt += 1;
                }
            }
                  break;
                  
      case 'o':
          
          while(( NombreMystere != search) && (cpt < 10)){
              search = searchNumberPC(mini,maxi);
              if (search > NombreMystere){
                  maxi = search;
                  cpt += 1;
              }
              if (search < NombreMystere){
                  mini = search;
                  cpt += 1;
              }
          }
                break;
                
    case 'h':
        
        while(( NombreMystere != search) && (cpt  < 10)){
            search = searchNumberHuman(mini,maxi);
            if (search > NombreMystere){
                printf("plus petit\n");
                cpt += 1;
            }
            if (search < NombreMystere){
                printf("plus grand\n");
                cpt += 1;
            }
        }
              break;

            
    }*/
    
    int (*psearch)(int,int,int,int);
    
    
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
    
    while (( search != NombreMystere) && (cpt < 9)){
         search = (*psearch)(mini,maxi,minis,maxis);
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


