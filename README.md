<h1> <ins> $${\color{blue}Projet \space sur \space trois \space jeux \space en \space trois \space langages \space informatique}$$ </ins> </h1>
Le but de ce projet est d'implémenter le jeu du nombre Mystère, le Jeux du Pendu et le Jeux Pierre Feuille Ciseaux 
en programmation C/C++ et Python. <br>
A la fin de ses 3 jeux seront assemblés dans un menu pour choisir le jeu avec ses options.<br>
<h2> <ins> $${\color{green} Nombre \space Mystere}$$  </ins></h2>
Le but du jeu est de rechercher un nombre secret avec un nombre d'essaies limités choisi (qui est 10 pour ce programme).<br>
<h3> <ins>  $${\color{green}Le Nombre Secret}$$ </ins></h3>
Le premier joueur qui est le joueur qui donne le nombre secret peut-être soit L'ordinateur ou soit la personne qui utilise ce jeu.

<h3> <ins>  $${\color{purple}Le nombre Chercheur}$$ </ins></h3>
Le deuxième joueur est le joueur qui cherche le nombre secret peut être soit l'ordinateur, l'ordinateur heuristique ou soit la personne qui utilise ce jeu.

<h3> <ins>  $${\color{green}Le déroulement du jeu}$$ </h3>
- On commence à choisir le <b>minimum</b><br>.
- puis le <b>maximum</b> <br>
- On choisit le 1<sup>er</sup> joueur entre l'ordinateur ou l'être humain. <b>o</b> l'ordinateur et <b>h</b> pour l'être humain).


![Capture d’écran 2025-01-19 à 16 08 50](https://github.com/user-attachments/assets/601a035c-27be-427d-bed7-7f2b7bbd15c8)


- Si on choisit **h**, on nous demande de choisir un nombre entre le minimum et le maximum choisit précédemment.
![Capture d’écran 2025-01-19 à 16 11 52](https://github.com/user-attachments/assets/5908dbec-70f5-460e-970f-8e484cb508ca)

- Si on choisit **o** on passe directement à l'étape du choix du 2<sup>ème</sup> joueur.<br>
- On choisit le 2<sup>ème </sup> joueur entre l'ordinateur(**r**) , l'ordinateur heuristique (**o**) et l'être humain (**h**).

![Capture d’écran 2025-01-19 à 16 44 10](https://github.com/user-attachments/assets/2ce3fcbb-c4e4-48d6-83b0-c9025da4f68e)

- Si on choisit **h**, on commence à chercher le nombre secret et on a 10 essaies.

![Capture d’écran 2025-01-19 à 17 35 02](https://github.com/user-attachments/assets/0b4d7430-2a0c-45ed-b601-da9644d96dc0)

- si on a choisit un nombre inferieur au nombre secret:

![Capture d’écran 2025-01-19 à 17 39 31](https://github.com/user-attachments/assets/d90c792e-2367-4560-8c03-8d5989bc1073)

- si on a choisit un nombre superieur au nombre secret:
  
![Capture d’écran 2025-01-19 à 17 43 29](https://github.com/user-attachments/assets/cd792168-18ac-49d2-9971-2f5954c2202d)

- Si on a trouvé le nombre secret, on a gagné:

![Capture d’écran 2025-01-19 à 17 45 09](https://github.com/user-attachments/assets/56e4d106-1e8d-45f3-834f-f2982078de78)

- si on choisit **r** :

![Capture d’écran 2025-01-19 à 18 18 12](https://github.com/user-attachments/assets/4dee688b-a1df-4627-bca1-6491c15efbc2)

- si on choisit **o** :

![Capture d’écran 2025-01-19 à 18 20 15](https://github.com/user-attachments/assets/ad5dbed7-70db-446a-963d-902b0b3dda00)






<h2> <ins>  $${\color{green}Pierre, Feuille et Ciseaux}$$ </ins></h2>
Le but de ce jeu est d'utiliser les régles de Pierre : <b>1</b> Feuille : <b>2</b> Ciseau <b>3</b> avec leur id.<br>
<h3> $${\color{purple}les points}$$</h3>
Dans ce jeu, nous avons que:

- Le Ciseaux bat La Feuille.
+ La Feuille bat La Pierre.
* La pierre bat Le Ciseaux.

<h3> Déroulement du Jeu</h3>
- On commence à choisir le 1<sup>er</sup> joueur, soit l'ordinateur: <b>o</b> ou soit l'humain: <b> h</b>.

![Capture d’écran 2025-01-20 à 19 32 23](https://github.com/user-attachments/assets/45a2083c-b532-482a-8e38-4d949d508824)


- On fait de même pour le 2<sup>ème</sup> joueur:
  
![Capture d’écran 2025-01-20 à 19 33 45](https://github.com/user-attachments/assets/0f632903-bbc6-4703-b9ae-615d316e5af8)

- On a 4 possibilités de jeux:
  - 1<sup>er</sup> possibilité: L'<b>Ordinateur</b> contre l'<b>Ordinateur</b>. Le jeu se déroule jusqu'a qu'il y'a un vainqueur.
  - 2<sup>ème</sup> possibilité: L'<b>Ordinateur</b> contre l'<b>Humain</b>. Le joueur contre l'ordinateur.
  - 3<sup>ème</sup> possibilité: L'<b>Humain</b> contre l'<b>Ordinateur</b>. Le joueur contre l'ordinateur.
  - 4<sup>ème</sup> possibilité: L'<b>Humain</b> contre l'<b>Humain</b>. 2 joueurs jouent l'un contre l'autre.
    
- Chaque joueur a 3 possibilités de jeu:
  - <b>1 </b> représente la <b> Pierre </b>
  - <b>2 </b> représente la <b> Feuille </b>
  - <b>3 </b> représente les <b> Ciseaux </b>

![j11](https://github.com/user-attachments/assets/1a4c9a1f-6003-446c-98fd-cace5f9e8efe)

![j12](https://github.com/user-attachments/assets/db495439-1a4d-46a8-b318-14755e7223ff)

![j13](https://github.com/user-attachments/assets/07dc063e-d8e2-4ec8-9855-95cad9552aef)

![j21](https://github.com/user-attachments/assets/9a900a94-03ac-4dee-8ba2-5d0d9a379742)

![j22](https://github.com/user-attachments/assets/a03f91b0-86d1-4367-a5bb-ea21f8f03dda)

![j23](https://github.com/user-attachments/assets/7dd067ea-a2b9-46c2-a44d-73545be2c4b6)

- On a 9 possibilités de messages:
  
  - ![Capture d’écran 2025-01-24 à 19 00 59](https://github.com/user-attachments/assets/fb881a30-9550-41eb-b200-0dcc63dcb693)
  - ![Capture d’écran 2025-01-24 à 19 08 02](https://github.com/user-attachments/assets/926f5c39-b0e8-43db-bab2-f89a7447bc3d)
  - ![Capture d’écran 2025-01-24 à 19 08 42](https://github.com/user-attachments/assets/c1faa499-c4ed-4361-9c71-3fa5dd4de0db)
  - ![Capture d’écran 2025-01-24 à 19 11 08](https://github.com/user-attachments/assets/5925d9f5-1926-4b3c-817f-b98536d6eb89)
  - ![Capture d’écran 2025-01-24 à 19 11 56](https://github.com/user-attachments/assets/716198c0-2a79-46ee-a255-c891b7129431)
  - ![Capture d’écran 2025-01-24 à 19 26 19](https://github.com/user-attachments/assets/99af65e0-c882-49e0-ae42-a004cf639e98)
  - ![Capture d’écran 2025-01-24 à 19 27 16](https://github.com/user-attachments/assets/3182a5d5-7ea7-4919-8ad1-0a858a37d91e)
  - ![Capture d’écran 2025-01-24 à 19 27 52](https://github.com/user-attachments/assets/a687eb54-96ca-4a3f-99c2-7e0948b50dfc)
  - ![Capture d’écran 2025-01-24 à 19 28 35](https://github.com/user-attachments/assets/ba355dbd-7459-4398-9142-82a3b75fda8a)
    
Exemple d'une partie jeu entier:

![Capture d’écran 2025-01-24 à 19 31 18](https://github.com/user-attachments/assets/5f68ced1-a0a2-4f51-bb12-e821b8159329)








 










<h2> <ins>  $${\color{green}Le Pendu}$$  </ins></h2>
Le but du jeu est de deviner un mot secret, lettre par lettre, avant d'épuiser le nombre d'erreurs autorisées (10 erreurs possibles).<br>

<h3> <ins>  $${\color{green}Choix de la longueur du mot}$$ </ins></h3>
Le joueur choisit une longueur de mot (de 3 à 10 lettres, ou plus de 10 lettres). Chaque longueur correspond à une liste de mots prédéfinie intégrée dans le code (une centaine de mots par liste). Un mot est ensuite tiré au hasard dans la liste correspondante.

<h3> <ins>  $${\color{green}Le déroulement du jeu}$$ </ins></h3>

- Le mot à deviner s'affiche sous forme de tirets (`_ _ _`), un par lettre.
- À chaque tour, on saisit soit une lettre, soit le mot entier.
- Si la lettre est présente dans le mot, elle est révélée à la bonne position.
- Si elle est absente, un essai est perdu et le dessin du pendu se complète progressivement (11 étapes, de 10 à 0 essais restants).
- La partie se termine par une victoire (mot trouvé avant d'épuiser les essais) ou une défaite (le mot est révélé).

Exemple de déroulement réel (partie testée en compilant et exécutant le code) :

```
le mot cherché est composé de 3 lettres 
donner une lettre ou le mot exacte , il vous reste 10 erreurs possibles
donner une lettre ou le mot exacte , il vous reste 9 erreurs possibles
E__
donner une lettre ou le mot exacte , il vous reste 7 erreurs possibles
EC_
...
Vous avez perdu, le mot qui fallait trouver :  MAC
```

<h3> <ins>  $${\color{purple}Deux versions du jeu}$$ </ins></h3>

- Le dossier `pendu/` contient une version autonome où la longueur du mot est demandée directement au clavier.
- Le dossier `all/` contient la version intégrée au menu unifié, où la longueur est passée en paramètre depuis le menu.

<h2> <ins>  $${\color{green}Le Mini-Jeux}$$ </ins></h2>
Le dossier `all/` regroupe les trois jeux (Nombre Mystère, Pierre-Feuille-Ciseaux, Pendu) derrière un seul menu textuel, comme annoncé en introduction de ce README.

<h3> <ins>  $${\color{green}Architecture}$$ </ins></h3>
Chaque jeu garde sa propre classe (`Mystery`, `Pfc`, `Pendu_jeux`), reprise telle quelle depuis son dossier d'origine. Une classe `Menu` orchestre l'affichage des écrans et redirige vers le bon jeu selon le choix de l'utilisateur.

<h3> <ins>  $${\color{green}Le déroulement du menu}$$ </ins></h3>

- L'écran d'accueil propose les 3 jeux, plus l'option quitter (`q`).
- Chaque jeu a son propre sous-menu de configuration (mode de jeu pour le Nombre Mystère et Pierre-Feuille-Ciseaux, longueur du mot pour le Pendu).
- À la fin d'une partie, le programme demande de rejouer au même jeu (`o`/`n`) avant de revenir à l'écran d'accueil.

Exemple de déroulement réel (partie testée en compilant et exécutant le code) :

```
1 : Nombre Mystere
2 : Pierre Feuille Ciseau
3 : Le Pendu
q : quitter
Le Pendu
1 : 3 lettres 
2 : 4 lettres
...
9 : plus de 10 lettres
0 : retour
q : quitter
```

<h3> <ins>  $${\color{purple}Limite connue}$$ </ins></h3>
La saisie clavier utilise `scanf("%c", ...)` sans consommer les retours à la ligne restants dans le flux d'entrée. En usage interactif normal (au clavier), cela ne pose pas de problème. En revanche, si l'entrée standard est redirigée depuis un fichier ou un script (par exemple pour des tests automatisés) et que le flux se termine avant que le programme ne demande une nouvelle saisie, le programme reste bloqué à redemander indéfiniment "voulez vous recommencer (o/n)". Ce comportement a été constaté en testant le programme avec une entrée scriptée ; il n'affecte pas une utilisation normale au clavier.
