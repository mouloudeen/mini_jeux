#include "pendu.hpp"

Pendu::Pendu(char * mot): m_mot(mot){
    m_taille = strlen(m_mot);
    m_motCherche = new char[m_taille];
    for (int i = 0; i < m_taille; i++){
        m_motCherche[i] = '_';
    }
}




/* Les images du pendu*/
void  Pendu::hommePendu(int essaies){
    /* nombre d'essaies qui reste*/
    switch(essaies){
            
        case 10:
            cout <<"         ";
            cout <<"         ";
            cout <<"         ";
            cout <<"         ";
            cout <<"         ";
            cout <<"         ";
            cout <<"         ";
            cout <<"         " << endl;
            break;
        case 9:
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"_________       " << endl;
            break;
            
        case 8:
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"                " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 7:
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 6:
            cout <<"    _________   " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 5:
            cout <<"    _________   " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 4:
            cout <<"    _________   " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        O  " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 3:
            cout <<"    _________   " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        O  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 2:
            cout <<"    _________   " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        O  " << endl;
            cout <<"    |       /|\\ " << endl;
            cout <<"    |           " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
        case 1:
            cout <<"    _________   " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        O  " << endl;
            cout <<"    |       /|\\ " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |           " << endl;
            cout <<"____|____       " << endl;
            break;
            
            
        case 0:
            cout <<"    _________   " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |        O  " << endl;
            cout <<"    |       /|\\ " << endl;
            cout <<"    |        |  " << endl;
            cout <<"    |       / \\ " << endl;
            cout <<"____|____       " << endl;
            break;
            
    }
}




/* Il donne un mot à chercher*/
void Pendu::cherche_mot(int essaies){
    
    char saisie_utilisateur[m_taille+1];
    
    cout <<"le mot cherché est composé de "<< m_taille<<" lettres "<<endl;
    
    while (( essaies > 0) && (strcmp(m_motCherche, m_mot) != 0) && strcmp(saisie_utilisateur, m_mot)!= 0){
        
        /* We use the pointer for change the world by letters found*/
        char *ptr2 = NULL;
        
        ptr2 =  m_motCherche;
        
        /* counter cpt initialized to 0*/
        int cpt = 0;
        
        cout << "donner une lettre ou le mot exacte , il vous reste "<< essaies<< " erreurs possibles"<<endl;
        fgets(saisie_utilisateur, m_taille, stdin);
        
        for (char *ptr =m_mot; ptr < m_mot + m_taille; ptr++){
            
            if (strlen(saisie_utilisateur) != 2){
                if(strcmp(saisie_utilisateur, m_mot)!=0){
                    /*if saisie_utilisateur n'est pas un   char et saisie_utilisateur est different du m_mot*/
                    cpt = 0;
                }
                else{
                    cpt = 1;
                    break;
                }
            }
            else if (toupper(*ptr) == toupper(*saisie_utilisateur)){
                
                /*si les lettres sont dans le mot on ajoute à cpt 1*/
                *ptr2 = toupper(*saisie_utilisateur);
                cpt+=1;
                }
            
            ptr2++;
        }
        if (cpt ==0){
            /*si cpt = 0, nous n'avons aucune lettre de ce mot, on perd 1 essaie*/
            essaies -= 1;
            
        }
        hommePendu(essaies);
        cout << m_motCherche << endl;
          
        
        }
    if (strcmp(m_mot, m_motCherche) == 0 || strcmp(saisie_utilisateur, m_mot) ==0){
        /* si le mot_trouve ou le saisie_utilisateur est égale au mot, on a gagné*/
       cout << "vous avez gagné en ayant vos " << essaies <<" vie(s)"<< endl;
    }
    
    else
    {
        cout << "Vous avez perdu, le mot qui fallait trouver :  " <<m_mot <<endl;
    }
        
        
    
    
    
}


/* destructeur*/
Pendu::~Pendu(){
    delete[] m_motCherche;
}
