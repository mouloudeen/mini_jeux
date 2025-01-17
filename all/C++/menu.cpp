#include "menu.hpp"

using namespace std;

/* Constructeur*/
Menu::Menu(){};

/*Accueil Pendu*/
void Menu::AccueilPendu(){
    char choix;
    cout << "1 : 3 lettres " << endl;
    cout <<"2 : 4 lettres" << endl;
    cout <<"3 : 5 lettres" << endl;
    cout <<"4 : 6 lettres" << endl;
    cout <<"5 : 7 lettres" << endl;
    cout <<"6 : 8 lettres" << endl;
    cout <<"7 : 9 lettres" << endl;
    cout <<"8 : 10 lettres" << endl;
    cout <<"9 : plus de 10 lettres" << endl;
    cout <<"0 : retour" << endl;
    cout <<"q : quitter" << endl;
    
    scanf("%c",&choix);
    
    Pendu_jeux *p1 = new Pendu_jeux();
        
    switch(choix){
        case '1':
            p1->pendu(3);
            break;
        case '2':
            p1->pendu(4);
            break;
        case '3':
            p1->pendu(5);
            break;
        case '4':
            p1->pendu(6);
            break;
        case '5':
            p1->pendu(7);
            break;
        case '6':
            p1->pendu(8);
            break;
        case '7':
            p1->pendu(9);
            break;
        case '8':
            p1->pendu(10);
            break;
        case '9':
            p1->pendu(11);
            break;
        case '0':
            cout << "retour " << endl;
            debut();
            break;
            
        case 'q':
            cout <<"au revoir, a bientôt" << endl;
            exit( EXIT_SUCCESS);
            break;
            
        default:
            cout <<"Vous pouvez utilisé soit q, 0, 1, 2, 3, 4, 5, 6, 7, 8" << endl;
            AccueilPendu();
    }
    int c = 0;
    while (c == 0){
        char choix1;
        cout <<"voulez vous recommencer (o/n)" << endl;
        scanf(" %c", &choix1);
        
        if ( choix1 == 'o'){
            AccueilPendu();
            c = 1;
        }
        if (choix1 == 'n'){
            cout <<"a bientot" << endl;
            debut();
            c = 1;
            }
    }
}


/*debut du menu*/
void Menu::debut(){
    char choix;
    cout <<"1 : Nombre Mystere" << endl;
    cout <<"2 : Pierre Feuille Ciseau" << endl;
    cout <<"3 : Le Pendu" << endl;
    cout <<"q : quitter" << endl;
    
    scanf("%c", &choix);
    switch(choix){
        case '1':
            cout <<"Nombre Mystere" << endl;
            /*AccueilNombreMystere();*/
            break;
        case '2':
            cout <<"Pierre Feuille Ciseau" << endl;
            /*AccueilPFC();*/
            break;
            
        case '3':
            cout <<"Le Pendu" << endl;
            AccueilPendu();
            break;
            
        case 'q':
            cout <<"au revoir, a bientôt" << endl;
            exit( EXIT_SUCCESS);
            break;
            
        default:
            cout <<"Vous pouvez utilisé soit q, 1, 2 ou 3" << endl;
            debut();
    }
    
}


/*affichage du menu complet*/
void Menu::menu(){
    debut();
}


/* Destructeur*/
Menu::~Menu(){};
