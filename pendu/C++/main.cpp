
#include "pendu_jeux.hpp"

using namespace std;

int main()
{
    /*char * test = "ECOLE";
    Pendu *p1 = new Pendu(test);
    p1->cherche_mot(10);
    
    delete p1;*/
    
    Pendu_jeux * p1= new Pendu_jeux();
    p1->pendu();
    return 0;
}
