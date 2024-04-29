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
    Pfc(int maxPoint);
    
    /* ordinateur joue aléatoirement*/
    int randomPlayer();
    
    /* jeu avec l'humain*/
    int humanPlayer();
    
    /* on choisit si c'est un humain ou l'ordinateur */
    char choixjoueur(char nomplayer[10]);
    
    /* choisir le joueur soit humain ou random*/
    int choix_joueur(char player);
    
    /* Pierre Feuille Ciseau*/
    void pfc();
    
    /* Destructeur*/
    ~Pfc();
    
private:
    
    int m_maxPoint;
    
    
    
};

#endif // PFC_HPP
