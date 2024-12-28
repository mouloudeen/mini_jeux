import nombreMystere
import pendu
import pfc




#accueil du Nombre Mystere
def AccueilNombreMystere():
    print("1 : ordinateur contre ordinateur")
    print("2 : ordinateur contre ordinateur heuristique")
    print("3 : ordinateur contre humain")
    print("4 : humain contre ordinateur")
    print("5 : humain contre ordinateur heuristique")
    print("6 : humain contre humain")
    print("0 : retour")
    print("q : quitter")
    n = input()
    match n:
        case '1':
            print("ordinateur contre ordinateur")
            
        case '2':
            print("ordinateur contre ordinateur heuristique")
            
        case '3':
            print("3 : ordinateur contre humain")
            
        case '4':
            print("4 : humain contre ordinateur")
            
        case '5':
            print("5 : humain contre ordinateur heuristique")
            
        case '6':
            print("6 : humain contre humain")
        
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
    
