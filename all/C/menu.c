#include "menu.h"






/*Accueil Pendu*/
void AccueilPendu(){
    char choix;
    printf("1 : 3 lettres\n");
    printf("2 : 4 lettres\n");
    printf("3 : 5 lettres\n");
    printf("4 : 6 lettres\n");
    printf("5 : 7 lettres\n");
    printf("6 : 8 lettres\n");
    printf("7 : 9 lettres\n");
    printf("8 : 10 lettres\n");
    printf("9 : plus de 10 lettres\n");
    printf("0 : retour\n");
    printf("q : quitter\n");
    
    scanf("%c",&choix);
    switch(choix){
        case '1':
            pendu(3);
            break;
        case '2':
            pendu(4);
            break;
        case '3':
            pendu(5);
            break;
        case '4':
            pendu(6);
            break;
        case '5':
            pendu(7);
            break;
        case '6':
            pendu(8);
            break;
        case '7':
            pendu(9);
            break;
        case '8':
            pendu(10);
            break;
        case '9':
            pendu(11);
            break;
        case '0':
            printf("retour\n");
            debut();
            break;
            
        case 'q':
            printf("au revoir, a bientôt\n");
            break;
            
        default:
            printf("Vous pouvez utilisé soit q, 0, 1, 2, 3, 4, 5, 6, 7, 8\n");
            AccueilPendu();
    }
    int c = 0;
    while (c == 0){
        char choix1;
        printf("voulez vous recommencer (o/n)\n");
        scanf(" %c", &choix1);
        
        if ( choix1 == 'o'){
            AccueilPendu();
            c = 1;
        }
        if (choix1 == 'n'){
            printf("a bientot\n");
            debut();
            c = 1;
            }
    }
}

// **********************************************************

// finir la fonction AccueilPFC

/*accueil Pierre Feuille Ciseau*/
void AccueilPFC(){
    char choix;
    
    printf("1 : humain contre humain\n");
    printf("2 : humain contre ordinateur\n");
    printf("3 : ordinateur contre humain\n");
    printf("4 : ordinateur contre ordinateur\n");
    printf("0 : retour\n");
    printf("q : quitter\n");
    scanf("%c",&choix);
    
    switch(choix){
        case '1':
            pfc('h','h');
            break;
        case '2':
            pfc('h','o');
            break;
        case '3':
            pfc('o','h');
            break;
        case '4':
            pfc('o','o');
            break;
        case '0':
            debut();
            break;
            
        case 'q':
            printf("au revoir, a bientôt\n");
            break;
            
        default:
            printf("Vous pouvez utilisé soit q, 0, 1, 2, 3, 4\n");
            AccueilPFC();
    }
    int c = 0;
    while (c == 0){
        char choix1;
        printf("voulez vous recommencer (o/n)\n");
        scanf(" %c", &choix1);
        
        if ( choix1 == 'o'){
            AccueilPFC();
            c = 1;
        }
        if (choix1 == 'n'){
            printf("a bientot\n");
            debut();
            c = 1;
            }
    }
}


/*accueil du Nombre Mystere*/
void AccueilNombreMystere(){
    char choix;
    printf("1 : humain contre humain\n");
    printf("2 : humain contre ordinateur\n");
    printf("3 : humain contre ordinateur heuristique\n");
    printf("4 : ordinateur contre humain\n");
    printf("5 : ordinateur contre ordinateur\n");
    printf("6 : ordinateur contre ordinateur heuristique\n");
    printf("0 : retour\n");
    printf("q : quitter\n");
   
    scanf("%c",&choix);
    
    switch(choix){
        case '1':
            
            NombreSecret('h', 'h');
            break;
        case '2':
            
            NombreSecret('h', 'r');
            break;
        case '3':
            
            NombreSecret('h', 'o');
            break;
        case '4':
            
            NombreSecret('o', 'h');
            break;
        case '5':
           
            NombreSecret('o', 'r');
            break;
        case '6':
            
            NombreSecret('o', 'o');
            break;
        case '0':
            printf("retour\n");
            debut();
            break;
        case 'q':
            printf("au revoir, a bientôt\n");
            break;
            
        default:
            printf("Vous pouvez utilisé soit q, 0, 1, 2, 3, 4, 5, 6\n");
            AccueilNombreMystere();
    }
    int c = 0;
    while (c == 0){
        char choix1;
        printf("voulez vous recommencer (o/n)\n");
        scanf(" %c", &choix1);
        
        if ( choix1 == 'o'){
            AccueilNombreMystere();
            c = 1;
        }
        if (choix1 == 'n'){
            printf("a bientot\n");
            debut();
            c = 1;
            }
    }
}

/*debut du menu*/
void debut(){
    char choix;
    printf("1 : Nombre Mystere\n");
    printf("2 : Pierre Feuille Ciseau\n");
    printf("3 : Le Pendu\n");
    printf("q : quitter\n");
    
    scanf("%c", &choix);
    switch(choix){
        case '1':
            printf("Nombre Mystere\n");
            AccueilNombreMystere();
            break;
        case '2':
            printf("Pierre Feuille Ciseau\n");
            AccueilPFC();
            break;
            
        case '3':
            printf("Le Pendu\n");
            AccueilPendu();
            break;
            
        case 'q':
            printf("au revoir, a bientôt\n");
            break;
            
        default:
            printf("Vous pouvez utilisé soit q, 1, 2 ou 3\n");
            debut();
    }
    
}

/*affichage du menu complet*/
void menu(){
    debut();
}
    
