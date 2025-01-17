#ifndef PFC_HPP
#define PFC_HPP


#include <iostream>
#include <cstdbool>
#include <cstring>
#include <ctime>

using namespace std;


class Pfc
{
public:
    /* Constructeur*/
    Pfc();
    
    /* ordinateur joue aléatoirement*/
    int randomPlayer();
    
    /* jeu avec l'humain*/
    int humanPlayer();
    
    /* choisir le joueur soit humain ou random*/
    int choix_joueur(char player);
    
    /* Pierre Feuille Ciseau*/
    void pfc(char player1, char player2);
    
    /* Destructeur*/
    ~Pfc();
    
private:
    
    
    
    
    
};

#endif // PFC_HPP
