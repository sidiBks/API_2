# LES BOUCLES ET LES LISTES - EXERCICE 1

## 🌟 ENONCE :
```
    Ecrire un algorithme qui demande deux entiers à l'utilisateur et qui calcul la somme des entiers compris entre ces deux valeurs. Par exemple, si l'on rentre 5 et 12, le programme doit afficher 68 :
    5+6+7+8+9+10+11+12 = 68
```

## ✅ REPONSE :

````
ALGORITHME_SOMME
    i, j, k, S, p : ENTIER
    ---
DEBUT
    AFFICHER("Donner deux nombres")
    LIRE(i,j)
    SI (i > j) ALORS
        p <- i
        i <- j
        j <- p
    FINSI
    S <- 0
    POUR(k<-i, k<=j, k<-k+1)
        S <- S+k
    FINPOUR
    AFFICHER("La valeur de la somme S: ", S)
FIN 
````

--- 

> Always remember to express gratitude to God, folks!