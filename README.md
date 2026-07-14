# mini_jeux

Trois jeux classiques (Nombre Mystère, Pierre-Feuille-Ciseaux, Pendu) implémentés en **C**, **C++** et **Python**, avec un menu unifié pour les lancer tous depuis un seul programme.

## Structure du dépôt

```
mini_jeux/
├── all/                      # Menu unifié : les 3 jeux dans un seul exécutable
│   ├── C/
│   ├── C++/
│   └── python/
├── nombre_mystere/           # Version autonome du jeu Nombre Mystère
│   ├── C/
│   ├── C++/
│   └── python/
├── pendu/                    # Version autonome du jeu Pendu
│   ├── C/
│   ├── C++/
│   └── python/
└── pierre_feuille_ciseaux/   # Version autonome de Pierre-Feuille-Ciseaux
    ├── C/
    ├── C++/
    └── python/
```

Chaque jeu existe donc en deux formes : isolé (dossier du jeu) ou intégré au menu (`all/`).

## Prérequis

- **C** : `gcc`
- **C++** : `g++`
- **Python** : `python3` (aucune dépendance externe)
- `make` pour les versions C/C++

## Compilation et exécution

### Menu unifié (les 3 jeux)

```bash
# C
cd all/C && make && ./minijeux

# C++
cd all/C++ && make && ./minijeu

# Python (aucune compilation nécessaire)
cd all/python && python3 main.py
```

### Jeu individuel

Même logique dans chaque dossier de jeu, par exemple pour le Pendu :

```bash
cd pendu/C && make && ./<executable>
cd pendu/C++ && make && ./<executable>
cd pendu/python && python3 main.py
```

(Vérifiez le nom de l'exécutable généré dans chaque `makefile`, il diffère selon le dossier.)

## Description des jeux

### Nombre Mystère
Un nombre secret est choisi entre un minimum et un maximum définis par l'utilisateur. Le nombre est deviné soit par un humain, soit par l'ordinateur (aléatoire), soit par un "ordinateur heuristique" (recherche par dichotomie). Modes disponibles : humain/humain, humain/ordinateur, humain/heuristique, ordinateur/humain, ordinateur/ordinateur, ordinateur/heuristique.

### Pierre-Feuille-Ciseaux
Jeu classique à 3 choix (1=Pierre, 2=Feuille, 3=Ciseaux), jouable en humain vs humain, humain vs ordinateur, ou ordinateur vs ordinateur.

### Pendu
Choix de la longueur du mot à deviner (de 3 à plus de 10 lettres), puis recherche lettre par lettre avec un nombre d'essais limité.
