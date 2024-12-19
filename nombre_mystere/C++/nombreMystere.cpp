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

/* l'humain cherche le nombre secret*/
int Mystery::searchNumberHuman(int mini,int maxi,int minis, int maxis){
    
    bool rep = false;
    int nombre;
    
    while (rep == false){
        
        cout <<"le nombre à chercher est entre " << minis <<" et "<< maxis <<endl;
        scanf("%d",&nombre);
        if ((nombre >= minis) && (nombre <= maxis)){
            rep = true;
        }
       
    }
    cout <<"le nombre de recherche = "<<nombre << endl;
    return nombre;
}

/* random cherche le nombre secret*/
int Mystery::searchNumberRandom(int mini,int maxi,int minis, int maxis){
    
    srand(time(NULL));
    
    int nombre = rand()%(maxi-mini)+mini;
    cout <<"le nombre de recherche = "<<nombre << endl;
    return nombre;
}
