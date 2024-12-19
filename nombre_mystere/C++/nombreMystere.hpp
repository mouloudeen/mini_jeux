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
    static int searchNumberHuman(int mini,int maxi,int minis, int maxis);
    
    /* random cherche le nombre secret*/
    static int searchNumberRandom(int mini,int maxi,int minis, int maxis);
    
    /* ordi cherche le nombre secret*/
    static int searchNumberPC(int mini,int maxi,int minis, int maxis);
    
    /* choix du premier joueur*/
    static int Playerchoose(int mini, int maxi);
    
    /* le jeu du nombre secret*/
    void NombreSecret();
    
    
private:
    
};
#endif // NOMBREMYSTERE_HPP
