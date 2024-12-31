import nombreMystere
import pendu
import pfc

#Accueil Pendu
def AccueilPendu():
    print("1 : moins de 5 lettres")
    print("2 : 5 lettres")
    print("3 : 6 lettres")
    print("4 : 7 lettres")
    print("5 : 8 lettres")
    print("6 : 9 lettres")
    print("7 : 10 lettres")
    print("8 : plus de 10 lettres")
    print("0 : retour")
    print("q : quitter")
    
    n = input()
    match(n):
        case '1':
            pendu.pendu('4')
        case '2':
            pendu.pendu('5')
        case '3':
            pendu.pendu('6')
        case '4':
            pendu.pendu('7')
        case '5':
            pendu.pendu('8')
        case '6':
            pendu.pendu('9')
        case '7':
            pendu.pendu('10')
        case '8':
            pendu.pendu('11')
     
    c = 0
    while (c == 0):
    
        print("voulez vous recommencer (o/n)")
        n = input()
    
        if ( n == 'o'):
            AccueilPendu()
            c = 1
        
        if (n == 'n'):
            print('a bientot')
            debut()
            c = 1
            
    
    
        

#accueil Pierre Feuille Ciseau
def AccueilPFC():
    print("1 : humain contre humain")
    print("2 : humain contre ordinateur")
    print("3 : ordinateur contre humain")
    print("4 : ordinateur contre ordinateur")
    print("0 : retour")
    print("q : quitter")
    n = input()
    match n:
        case '1':
            print("humain contre humain")
            
        case '2':
            print("humain contre ordinateur")
            
        case '3':
            print("ordinateur contre humain")
            
        case '4':
            print("ordinateur contre ordinateur")
            
        case '0':
            print("retour")
            debut()
            
        case 'q':
            print("au revoir, a bientôt")
            
        case other:
            print("Vous pouvez utilisé soit q, 0, 1, 2, 3, 4")
            AccueilPFC()
    


#accueil du Nombre Mystere
def AccueilNombreMystere():
    print("1 : humain contre humain")
    print("2 : humain contre ordinateur")
    print("3 : humain contre ordinateur heuristique")
    print("4 : ordinateur contre humain")
    print("5 : ordinateur contre ordinateur")
    print("6 : ordinateur contre ordinateur heuristique")
    print("0 : retour")
    print("q : quitter")
    n = input()
    match n:
        case '1':
            print("humain contre humain")
            
        case '2':
            print("humain contre ordinateur")
            
        case '3':
            print("humain contre ordinateur heuristique")
            
        case '4':
            print("ordinateur contre humain")
            
        case '5':
            print("ordinateur contre ordinateur")
            
        case '6':
            print("ordinateur contre ordinateur heuristique")
        
        case '0':
            print("retour")
            debut()
        case 'q':
            print("au revoir, a bientôt")
            
        case other:
            print("Vous pouvez utilisé soit q, 0, 1, 2, 3, 4, 5, 6")
            AccueilNombreMystere()
    

# debut du menu
def debut():
    print("1 : Nombre Mystere")
    print("2 : Pierre Feuille Ciseau")
    print("3 : Le Pendu")
    print("q : quitter")
    n = input()
    match n:
        case '1':
            print("Nombre Mystere")
            AccueilNombreMystere()
        case '2':
            print("Pierre Feuille Ciseau")
            AccueilPFC()
            
        case '3':
            print("Le Pendu")
            AccueilPendu()
            
        case 'q':
            print("au revoir, a bientôt")
            
        case other:
            print("Vous pouvez utilisé soit q, 1, 2 ou 3")
            debut()
    



#affichage du menu complet
def menu():
    debut()
    
