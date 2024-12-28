import nombreMystere
import pendu
import pfc




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
    
