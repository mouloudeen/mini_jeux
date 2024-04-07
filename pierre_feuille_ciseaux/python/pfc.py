import random

# ordinateur joue aléatoirement
def randomPlayer():
    print("donner le chiffre entre 1 et 3 1:pierre 2: feuille 3:ciseau")
    return random.randint(1,3)

# jeu de l'humain
def humanPlayer():
    print("donner le chiffre entre 1 et 3 1:pierre 2: feuille 3:ciseau")
    n = input()
    if (n  != '1') and (n != '2') and (n != '3'):
        humanPlayer()
    return int(n)

# on choisit si c'est un humain ou l'ordinateur
def choixjoueur(joueur):
    
    print(f"{joueur} : ordinateur ou humain (o/h)")
    n = input()
    
    # si n est different de o et h
    if (n != 'o') and (n != 'h'):
        n = choixjoueur(joueur)
        
    match(n):
    
        case 'o':
            player = randomPlayer
        case 'h':
            player = humanPlayer
        
    return player

# on choisit les 2 joueurs
def choix_joueur():
    player1 = choixjoueur("premier joueur")
    player2 = choixjoueur("deuxieme joueur")
    return player1,player2
    

# pierre-feuille-ciseau
def pfc(maxPoint):
    player1,player2 = choix_joueur()
    
    pointPlayer1 = 0
    pointPlayer2 = 0

    liste = ("la pierre", "la feuille", "le ciseau")
    while pointPlayer1 < maxPoint and pointPlayer2 < maxPoint:
        cpt1 = player1()
        print(f" joueur 1 a joué {liste[cpt1-1]}\n")
        cpt2 = player2()
        print(f" joueur 2 a joué {liste[cpt2-1]}\n")
        
        cpt = cpt1 - cpt2
        
        match(cpt):
            case -2:
                print(f"{liste[cpt1-1]} a gagné contre {liste[cpt2-1]}\n")
                pointPlayer1 += 1
            case -1:
                print(f"{liste[cpt1-1]} a perdu contre {liste[cpt2-1]}\n")
                pointPlayer2 += 1
            case 0:
                print(f"les 2 joueurs ont joués {liste[cpt1-1]}\n")
                print(f"player1 : { pointPlayer1}  player2 : { pointPlayer2}\n")
                continue
            case 1:
                print(f"{liste[cpt1-1]} a gagné contre {liste[cpt2-1]}\n")
                pointPlayer1 += 1
            case 2:
                print(f"{liste[cpt1-1]} a perdu contre {liste[cpt2-1]}\n")
                pointPlayer2 += 1
        
        
        print(f"player1 : { pointPlayer1}  player2 : { pointPlayer2}\n")
    if pointPlayer1 > pointPlayer2:
        print("joueur 1 a gagné")

    else:
         print("joueur 2 a gagné")




