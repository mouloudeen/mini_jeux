import nombreMystere
import pendu
import pfc



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
            
        case 'q':
            print("au revoir, a bientôt")
            
        case other:
            print("Vous pouvez utilisé soit q, 1, 2 ou 3")
            debut()
    



#affichage du menu complet
def menu():
    debut()
    
