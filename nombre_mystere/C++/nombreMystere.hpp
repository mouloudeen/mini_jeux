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
    int chooseRandomNumber(int mini, int maxi);
    
    /* choix par un humain entre mini et maxi*/
    int chooseHumanNumber(int mini, int maxi);
    
    /* l'humain cherche le nombre secret*/
    int searchNumberHuman(int mini,int maxi,int minis, int maxis);
    
    /* random cherche le nombre secret*/
    int searchNumberRandom(int mini,int maxi,int minis, int maxis);
    
    
private:
    
};
#endif // NOMBREMYSTERE_HPP
