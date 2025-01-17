#include "nombreMystere.hpp"

Mystery::Mystery(){};

/* Choix du nombre au hasard entre mini et maxi*/
int Mystery::chooseRandomNumber(int mini,int maxi){
    srand(time(NULL));
    
    int secret = rand()%(maxi-mini)+mini;
   /*cout <<"secret = "<< secret << endl;*/
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
    
    /*cout <<"secret = "<< secret << endl;*/
    return secret;
    
}

/* l'humain cherche le nombre secret*/
int Mystery::searchNumberHuman(int mini,int maxi){
    
    bool rep = false;
    int nombre;
    
    while (rep == false){
        
        cout <<"le nombre à chercher est entre " << mini <<" et "<< maxi <<endl;
        scanf("%d",&nombre);
        if ((nombre >= mini) && (nombre <= maxi)){
            rep = true;
        }
       
    }
   /* cout <<"le nombre de recherche = "<<nombre << endl;*/
    return nombre;
}

/* random cherche le nombre secret*/
int Mystery::searchNumberRandom(int mini,int maxi){
    
    srand(time(NULL));
    
    int nombre = rand()%(maxi-mini)+mini;
    cout <<"le nombre de recherche = "<<nombre << endl;
    return nombre;
}

/* ordi cherche le nombre secret*/
int Mystery::searchNumberPC(int mini,int maxi){
    int nombre = (maxi+mini)/2;
    cout <<"le nombre de recherche = "<<nombre << endl;
    return nombre;
}

/* choix du premier joueur*/
int Mystery::Playerchoose(char choix){
    
    switch (choix){
        case 'o':
            return chooseRandomNumber(1,100);
            break;
        
        case 'h':
            return chooseHumanNumber(1,100);
            break;
    }
}

/* le jeu du nombre secret*/
void Mystery::NombreSecret(char choix, char choose){
   
    
    int NombreMystere = Playerchoose(choix);
    
    
    
    
    
    
    int (*psearch)(int,int);
    
    
    switch(choose){
        case 'r':
            psearch = &searchNumberRandom;
            break;
            
        case 'o':
            psearch = &searchNumberPC;
            break;
            
        case 'h':
            psearch = &searchNumberHuman;
            break;
            
    }
    int search = 0;
    
    int cpt = 0;
    int mini = 1;
    int maxi = 100;
    while (( search != NombreMystere) && (cpt < 9)){
         search = (*psearch)(mini,maxi);
        if (search > NombreMystere){
            cout<<"plus petit" <<endl;
            maxi = search;
            cpt += 1;
        }
        if (search < NombreMystere){
            cout<<"plus grand" <<endl;
            mini = search;
            cpt += 1;
        }
    }
    
              if (cpt == 9){
                  cout<<"Vous avez perdu, le nombre mystere est : "<<NombreMystere <<endl;
            }
            
              else{
                  cout<<"Vous avez gagné en " << (cpt+1) <<" essaie(s)" <<endl;
            }
        
   
    
    }
