import random

# Choix du nombre au hasard entre mini et maxi
def chooseRandomNumber(mini,maxi):
    print("l'ordinateur a choisi son nombre mystère")
    return random.randint(mini,maxi)

# choix par un humain entre mini et maxi
def chooseHumanNumber(mini,maxi):
    print(f"choisir un nombre entre {mini} et {maxi}")
    
    n = input()
    
    if int(n) < mini or int(n) > maxi:
        n = chooseHumanNumber(mini,maxi)
    for i in range(random.randint(1,10)):
        print(random.randint(mini,maxi))
    
    return n

# l'humain cherche le nombre secret
def searchNumberHuman(mini,maxi):
    #print(f"le nombre à chercher est entre {mini} et {maxi}")
    n = input()
    if int(n) < mini or int(n) > maxi:
        n = searchNumberHuman(mini,maxi)
    return n

#choix du premier joueur
def ChoixJoueur1(mini,maxi):
    print("Choisir entre l'ordinateur' et le joueur humain pour donner le nombre mystère (o/h)")
    n = input()
    if n!= 'o' and n != 'h':
        ChoixJoueur1(mini,maxi)
    
    match(n):
        case 'o':
            return chooseRandomNumber(mini,maxi)
        
        case 'h':
            return int(chooseHumanNumber(mini,maxi))
        

# le jeu du nombre secret
def nombreSecret():
    print("choisir le minimum")
    n= input()
    mini = int(n)
    
    print("choisir le maximum")
    n = input()
    maxi = int(n)
    
    NombreMystere = ChoixJoueur1(mini,maxi)
    
    cpt = 0
    Nombre = int(searchNumberHuman(mini,maxi))
    
    while NombreMystere != Nombre and cpt != 10:
        
        if NombreMystere > Nombre:
            print("Plus grand")
            cpt += 1
        else:
            print("Pus petit")
            cpt += 1
        Nombre = int(searchNumberHuman(mini,maxi))
    if NombreMystere != Nombre:
        print(f"le nombre qu'il fallait trouver {NombreMystere}")
    
    else :
        print(f"Bravo vous avez trouvé le bon nombre {NombreMystere} avec {cpt} essaie(s)")







 
    
