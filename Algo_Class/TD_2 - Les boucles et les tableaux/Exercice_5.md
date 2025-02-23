# LES BOUCLES ET LES LISTES - EXERCICE 5

## 🌟 ENONCER :
```
    Ecrire un algorithme qui affiche le nombre de chiffre dans un nombre entier N (positive ou négative) introduit par l'utilisateur. Exemple d'exécution:
        > Introduire un nombre: 123
        > Le nombre 123 a 3 chiffres
```

## ✅ REPONSE :

````
ALGORITHME_NOMBRES_DANS_UN_CHIFFRE
    i, n : Entier
    ---
DEBUT
    AFFICHER("Introduire un nombre:")
    LIRE(n)
    i <- 0
    TANTQUE (n != 0)
        i <- i + 1
        n <- n div 10
    FINTQ
    AFFICHER("Le nombre", n, "a", i, "chiffres")
FIN 
````
