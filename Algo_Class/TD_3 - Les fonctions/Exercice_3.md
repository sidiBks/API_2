# LES SOUS ALGORITHMES (LES FONCTIONS) - EXERCICE 3

## 🌟 ENONCER :
Écrire une fonction qui permet de calculer le cosinus : 
```math
cos(x) = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + \dots , \quad x \in \left[ 0, \frac{\pi}{2} \right]
```

## ✅ REPONSE :

````

/* Definition des fonctions */

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


FONCTION factoriel () : 

    ---
DEBUT
    #
FINFCT

/* Algorithme / Logique */

ALGORITHME CALCUL_COS

    ---
DEBUT
   #
FIN 
````