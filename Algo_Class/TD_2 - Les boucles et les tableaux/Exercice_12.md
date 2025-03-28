# LES BOUCLES ET LES LISTES - EXERCICE 12

## 🌟 ENONCE :
```
    Ecrire un algorithme qui permet d'inverser l'ordre des éléments d'un tableau d'entiers.
```

## ✅ REPONSE :

````
ALGORITHME_LIST_REVERSE
    T[50], i, a, n : ENTIER
    ---
DEBUT
    /* Lecture de la liste */

    AFFICHER('Donner la longueur de la liste')
    LIRE(n)
    POUR (i<-0, i<n, i<-i+1)
        AFFICHER('Donner le ', (i+1), ' ème nombre de la liste.')
        Lire(T[i])
    FINPOUR

    /* Inverser la liste */

    SI (n%2 = 0) ALORS
        POUR (i<-0, i < (n+1) div 2, i<-i+1)
            a <- T[i]
            T[i] <- T[n-i-1]
            T[n-i] <- a
        FINPOUR
    SINON
        POUR (i<-0, i < n div 2, i<-i+1)
            a <- T[i]
            T[i] <- T[n-1]
            T[n-1] <- a
        FINPOUR
    FINSI

FIN 
````

--- 

> Always remember to express gratitude to God, folks!