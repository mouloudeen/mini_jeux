import random
import listPendu
import listeMot
 

# il donne un mot à chercher
def cherche_mot(mot,taille,essaies):
    mot_trouve = taille * '_'
    cpt = 0
    print(f"le mot cherché est composé de {taille} lettres")
    while mot_trouve.upper() != mot.upper() and cpt < essaies:
        
        listPendu.hommePendu(cpt)
        print(f"donner une lettre ou le mot exacte , il vous reste {essaies-cpt} erreurs possibles")
        

        n = input()
        if (len(n) > 1):
            if n.upper() != mot.upper():
                cpt += 1
            else:
                break
        else :
            cpt1 = 0
            listmot_trouve = list(mot_trouve.upper())
            for i in range(taille):
                if mot[i].upper() == n.upper():
                    cpt1 += 1
                    listmot_trouve[i] = n.upper()
            if cpt1 ==0:
                cpt += 1
            mot_trouve = "".join(listmot_trouve)
        print(f"{mot_trouve}")
    if (cpt < essaies):
         print(f"vous avez gagné en faisant que {cpt} erreur(s)")
    else:
          print(f"vous avez perdu, le mot qui fallait trouver :{mot}")


def pendu(n):
    
   
    i = random.randint(0,100)
    
    match(n):
        case '4':
            cherche_mot(listeMot.L1[i],len(listeMot.L1[i]),10)
        case '5':
            cherche_mot(listeMot.L5[i],len(listeMot.L5[i]),10)
        case '6':
            cherche_mot(listeMot.L6[i],len(listeMot.L6[i]),10)
        case '7':
            cherche_mot(listeMot.L7[i],len(listeMot.L7[i]),10)
        case '8':
            cherche_mot(listeMot.L8[i],len(listeMot.L8[i]),10)
        case '9':
            cherche_mot(listeMot.L9[i],len(listeMot.L9[i]),10)
        case '10':
            cherche_mot(listeMot.L10[i],len(listeMot.L10[i]),10)
        case other:
            cherche_mot(listeMot.L20[i],len(listeMot.L20[i]),10)
