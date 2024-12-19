#include "nombreMystere.hpp"

Mystery::Mystery(){};

/* Choix du nombre au hasard entre mini et maxi*/
int Mystery::chooseRandomNumber(int mini,int maxi){
    srand(time(NULL));
    
    int secret = rand()%(maxi-mini)+mini;
   cout <<"secret = "<< secret << endl;
    return secret;
};


/* choix par un humain entre mini et maxi*/
int Mystery::chooseHumanNumber(int mini, int maxi){
    bool rep = false;
    int secret;
    
    
    while (rep == false){
        
        cout<<"Choisir un nombre entre "<<mini<< " et "<< maxi<<endl;
        scanf("%d",&secret);
        if ((secret >= mini) && (secret <= maxi)){
            rep = true;
        }
    }
    
    cout <<"secret = "<< secret << endl;
    return secret;
    
}
