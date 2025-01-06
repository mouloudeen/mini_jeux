#include "pfc.h"

/* ordinateur joue aléatoirement*/
int randomPlayer(){
    
    srand(time(NULL));
    
    int i;
    
    printf("donner le chiffre entre 1 et 3 1:pierre 2: feuille 3:ciseau\n");
    
    /* chiffre entre 1 et 3 pris aléatoirement*/
    
    i = rand()%3+1;
    printf("%d\n",i);
    return i;
}

/* jeu avec l'humain*/
int humanPlayer(){
    int choix;
    printf("donner le chiffre entre 1 et 3 1:pierre 2: feuille 3:ciseau\n");
    scanf("%d",&choix);
    
    
    
    if ((choix  != 1) && (choix != 2) && (choix != 3)){
        humanPlayer();
    }
    
    return choix;
}


/* on choisit si c'est un humain ou l'ordinateur */
/*char choixjoueur(char player){
    switch{(player):
        
    case 'o':
        return randomPlayer
        break;
    case 'h':
        return humanPlayer
        break;
    }
}
*/

/* choisir le joueur soit humain ou random*/
int choix_joueur(char player){
    int jeuPlayer = 0;
    switch(player){
        case 'o':
            jeuPlayer = randomPlayer();
            break;
        case 'h':
            jeuPlayer = humanPlayer();
            break;
    }
    return jeuPlayer;
    
}

/* Pierre Feuille Ciseau*/
void pfc(char player1, char player2){
    /*char player1, player2;
    
    player1 = choixjoueur("Premier");
    player2 = choixjoueur("Deuxieme");*/
    
    
    int pointPlayer1 = 0;
    int pointPlayer2 = 0;
    
    char * liste[3] = {"la Pierre", "la Feuille", "le Ciseau"};
    
    int jeuPlayer1, jeuPlayer2, differencePlayer;
   
    
    while ((pointPlayer1 < 3) && (pointPlayer2 < 3)){
        jeuPlayer1 = choix_joueur(player1);
        printf("Le joueur 1 a joué %s\n", liste[jeuPlayer1 -1]);
        
        jeuPlayer2 = choix_joueur(player2);
        printf("Le joueur 2 a joué %s\n", liste[jeuPlayer2 -1]);
        
        
        differencePlayer = jeuPlayer1 - jeuPlayer2;
       
        switch(differencePlayer){
            case -2 :
                
                printf("%s a gagné contre %s\n", liste[jeuPlayer1 -1], liste[jeuPlayer2 -1]);
                pointPlayer1 += 1;
                break;
                
            case -1:
                
                printf("%s a perdu contre %s\n", liste[jeuPlayer1 -1], liste[jeuPlayer2 -1]);
                pointPlayer2 += 1;
                break;
                
            case 0:
               
                printf("Les 2 joueurs ont joués %s\n", liste[jeuPlayer1 -1]);
               
                break;
            
            case 1:
                
                printf("%s a gagné contre %s\n", liste[jeuPlayer1 -1], liste[jeuPlayer2 -1]);
                pointPlayer1 += 1;
                break;
            
            case 2:
                
                printf("%s a perdu contre %s\n", liste[jeuPlayer1 -1], liste[jeuPlayer2 -1]);
                pointPlayer2 += 1;
                break;
        }
        
        printf("Player1 : %d player2 : %d\n", pointPlayer1, pointPlayer2);
        
    }
           if (pointPlayer1 > pointPlayer2){
        printf("joueur 1 a gagné\n");
    }
           else{
        printf("joueur 2 a gagné\n");
    }
}

