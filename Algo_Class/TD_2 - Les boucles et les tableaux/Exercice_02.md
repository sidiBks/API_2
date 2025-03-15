# LES BOUCLES ET LES LISTES - EXERCICE 2

## 🌟 ENONCE :
```
    Ecrire un algorithme qui affiche les 9 tables de multiplication pour les entiers de 1 à 9. Chaque table comporte 9 éléments, sous la forme suivant :
    1   2   3   4   5   6    7    8    9 
    2   4   6   8   10  12   14   16   18
    .
    .
    .
    9   18   27   36   . . .
```

## ✅ REPONSE :

````
ALGORITHME_TABLE_MULTIPLICATION
    i, j : ENTIER
    ---
DEBUT
    POUR(i<-1, i<=9, i<-i+1)
        POUR(j<-1, j<=9, j<-j+1)
            AFFICHER(i*j, "   ")
        FINPOUR
        AFFICHERLN()
    FINPOUR
FIN 
````

--- 

> Always remember to express gratitude to God, folks!