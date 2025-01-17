#ifndef PENDU_HPP
#define PENDU_HPP


#include <iostream>
#include <cstdbool>
#include <cstring>
#include <ctime>

using namespace std;


class Pendu
{
public:
    /* Constructeur*/
    Pendu(char * mot);
    
    /* Les images du pendu*/
    void  hommePendu(int essaies);
    
    /* Il donne un mot à chercher*/
    void cherche_mot(int essaies);
    
    /* Destructeur*/
    ~Pendu();
private:
    char * m_mot;
    int m_taille;
    char * m_motCherche;
    
    
};

#endif // PENDU_HPP
