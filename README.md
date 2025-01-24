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

<h2> <ins>  $${\color{green}Le Mini-Jeux}$$ </ins></h2>
