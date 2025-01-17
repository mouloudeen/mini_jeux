#ifndef NOMBREMYSTERE_HPP
#define NOMBREMYSTERE_HPP


#include <iostream>
#include <cstdbool>
#include <cstring>
#include <ctime>

using namespace std;

class Mystery
{
public:
    Mystery();
    
    /* Choix du nombre au hasard entre mini et maxi*/
    static int chooseRandomNumber(int mini, int maxi);
    
    /* choix par un humain entre mini et maxi*/
    static int chooseHumanNumber(int mini, int maxi);
    
    /* l'humain cherche le nombre secret*/
    static int searchNumberHuman(int mini,int maxi);
    
    /* random cherche le nombre secret*/
    static int searchNumberRandom(int mini,int maxi);
    
    /* ordi cherche le nombre secret*/
    static int searchNumberPC(int mini,int maxi);
    
    /* choix du premier joueur*/
    static int Playerchoose(char choix);
    
    /* le jeu du nombre secret*/
    void NombreSecret(char choix, char choose);
    
    
private:
    
};
#endif // NOMBREMYSTERE_HPP
