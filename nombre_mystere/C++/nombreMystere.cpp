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

/* ordi cherche le nombre secret*/
int Mystery::searchNumberPC(int mini,int maxi,int minis, int maxis){
    int nombre = (maxi+mini)/2;
    cout <<"le nombre de recherche = "<<nombre << endl;
    return nombre;
}

/* choix du premier joueur*/
int Mystery::Playerchoose(int mini, int maxi){
    char choix;
    bool rep = false;
    
    while(rep == false){
       cout<<"Choisir entre l'ordinateur' et le joueur humain pour donner le nombre mystère (o/h)"<<endl;
        scanf("%c",&choix);
        
        if ((choix == 'o') || (choix == 'h') ){
            rep = true;
        }
    }
    switch (choix){
        case 'o':
            return chooseRandomNumber(mini,maxi);
            break;
        
        case 'h':
            return chooseHumanNumber(mini,maxi);
            break;
    }
}

/* le jeu du nombre secret*/
void Mystery::NombreSecret(){
    int mini, maxi, minis, maxis;
    
    
   cout <<"choisir le minimum"<<endl;
    scanf("%d",&mini);
    minis = mini;
    
    cout <<"choisir le maximum"<<endl;
    scanf("%d",&maxi);
    maxis = maxi;
    
    int NombreMystere = Playerchoose(mini,maxi);
    
    bool rep = false;
    char choose;
    while (rep == false){
        
        cout<<"choisir le random, ordinateur et le joueur humain pour rechercher le nombre mystere(r/o/h)"<<endl;
        scanf(" %c",&choose);
        cout<<"choose = "<<choose <<endl;
        
        if ((choose == 'r') || (choose == 'o') || (choose == 'h')){
            rep = true;
        }
        
    }
    
    
    int cpt = 0;
    
    
    int (*psearch)(int,int,int,int);
    
    
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
    
    while (( search != NombreMystere) && (cpt < 9)){
         search = (*psearch)(mini,maxi,minis,maxis);
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
