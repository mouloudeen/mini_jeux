#ifndef MENU_HPP
#define MENU_HPP

#include "pfc.hpp"
#include "pendu_jeux.hpp"
#include "nombreMystere.hpp"

class Menu{
public:
    /* Constructeur*/
    Menu();
    
    /*Accueil Pendu*/
    void AccueilPendu();
    
    /*accueil Pierre Feuille Ciseau*/
    void AccueilPFC();
    
    /*debut du menu*/
    void debut();

    /*affichage du menu complet*/
    void menu();
    
    /* Destructeur*/
    ~Menu();
};

#endif // MENU_HPP
