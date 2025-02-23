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
    compt, n : Entier
    ---
DEBUT
    AFFICHER("Introduire un nombre:")
    LIRE(n)

    SI (n = 0) ALORS
        compt <- 1
    FINSI

    SI (n < 0) ALORS
        n <- (-1)*n
    FINSI

    compt <- 0
    TANTQUE (n != 0)
        compt <- compt + 1
        n <- n div 10
    FINTQ
    AFFICHER("Le nombre", n, "a", compt, "chiffres")
FIN 
````

--- 

> Always remember to express gratitude to God, folks!