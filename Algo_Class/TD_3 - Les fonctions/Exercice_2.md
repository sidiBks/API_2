# LES SOUS ALGORITHMES (LES FONCTIONS) - EXERCICE 2

## 🌟 ENONCE 1:
```
    Ecrire une fonction qui calcule et retourne la puissance n (entier positif) d'un nombre réel x.
```

## ✅ REPONSE 1:

````
FONCTION puissance (x : REEL, n : ENTIER) : REEL
    x_power_n, i : ENTIER
    ---
DEBUT
    x_power_n <- 1
    POUR (i<-1, i<=n, i<-i+1)
        x_power_n <- x_power_n * x
    FINPOUR

    RETOURNE x_power_n
FINFCT
````

## 🌟 ENONCE 2:
```
    Ecrire un algorithme qui permet d'évaluer la valeur d'un polynôme P(x) dont le degré, les coefficients et la valeur de x sont introduits par l'utilisateur.
```

## ✅ REPONSE 2:

````
ALGORITHME_LIST_REVERSE
    coef_table[100], x, P : REEL
    coef_length, i : ENTIER
    ---
DEBUT

    /* Initier le degré du polynôme */
    AFFICHER("Donner le degré du polynome : ")
    LIRE(coef_length) /* le degré du polynôme sera coef_length - 1 */

    /* Initier le coefficient de chaque puissance */
    POUR (i<-0, i < coef_length , i<-i+1)
        AFFICHER("Donner le coefficient de la puissance : ", i)
        LIRE(coef_table[i])
    FINPOUR

    /* Initier le polynôme & la valeur à evaluer */
    AFFICHER("Donner x : ")
    LIRE(x)
    P <- 0

    /* Calcul du polynôme */
    POUR (i<-0, i < coef_length, i<-i+1)
        P <- P + coef_table[i]*puissance(x,i)
    FINPOUR

    /* Affichage du résultat */
    AFFICHER(P)

FIN 
````


--- 

> Always remember to express gratitude to God, folks!