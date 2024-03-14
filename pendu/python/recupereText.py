import os
import random

if  not (os.path.exists("liste_francais.txt")):
    print("le fichier n'existe pas")
else:
    L1 = []
    L5 = []
    L6 = []
    L7 = []
    L8 = []
    L9 = []
    L10 = []
    L20 = []
    fichier = open("liste_francais.txt", "r")
    lignes = fichier.readlines()

    for ligne in lignes:
        
        match(ligne):
            case ligne if len(ligne) < 6 :
                L1.append(ligne)
        
            case ligne if len(ligne) == 6 :
                L5.append(ligne)
            case ligne if len(ligne) == 7:
                L6.append(ligne)
            case ligne if len(ligne) == 8:
                L7.append(ligne)
            case ligne if len(ligne) == 9:
                L8.append(ligne)
            case ligne if len(ligne) == 10:
                L9.append(ligne)
            case ligne if len(ligne) == 11:
                L10.append(ligne)
            case other:
                L20.append(ligne)
            
    fichier.close()
