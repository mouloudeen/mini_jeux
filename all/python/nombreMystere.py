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
    return int(n)

# random cherche le nombre secret
def searchNumberRandom(mini,maxi):
    n = random.randint(mini,maxi)
    print(f"{n}")
    return n
    
#ordi cherche le nombre secret:
def searchNumberPC(mini,maxi):
    n = int((mini+maxi)/2)
    print(f"{n}")
    return n
    
#choix du premier joueur
def ChoixJoueur1(n):
    
    match(n):
        
        case 'o':
            return chooseRandomNumber(1,100)
        
        case 'h':
            return int(chooseHumanNumber(1,100))
        

#choix du deuxieme joueur
def ChoixJoueur2(n):
    
    
    match(n):
        case 'r':
            return searchNumberRandom
            
        case 'o':
            return searchNumberPC
        
        case 'h':
            return searchNumberHuman
            
# le jeu du nombre secret
def nombreSecret(n1, n2):
    
    
    NombreMystere = ChoixJoueur1(n1)
    
    cpt = 0
    
    Joueur2 = ChoixJoueur2(n2)
    mini = 1
    maxi = 100
    Nombre = Joueur2(mini,maxi)
   
    while NombreMystere != Nombre and cpt != 10:
        
        if NombreMystere > Nombre:
            
            print("Plus grand")
            mini = Nombre
            cpt += 1
        else:
            
            print("Pus petit")
            maxi = Nombre
            cpt += 1
        Nombre = Joueur2(mini,maxi)
    
    if NombreMystere != Nombre:
        
        print(f"le nombre qu'il fallait trouver {NombreMystere}")
    
    else :
        
        print(f"Bravo vous avez trouvé le bon nombre {NombreMystere} avec {cpt+1} essaie(s)")
