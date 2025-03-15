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


FONCTION factoriel (n : ENTIER) : ENTIER
    i, fact : ENTIER
    ---
DEBUT 
    POUR(i<-0, i <= n, i<-i+1)
        SI (i = 0) ALORS
            fact <- 1
        FINSI
        TANTQUE (n - i >= 0)
            fact <- fact * i
            i <- i+1 
        FINTQ
    FINPOUR
    RETOURNE fact
FINFCT

/* Algorithme / Logique */

ALGORITHME CALCUL_COS
    degre_precision, i, signe, num, denom : ENTIER
    cos : REEL
    ---
DEBUT
    /* Initier les variables necessaires au calcul */
    AFFICHER("Donner un entier qui définira le degré de precision : ")
    LIRE(degre_precision)

    cos <- 0

    /* Calcul du cosinus */
    POUR (i<-0, i < n div 2, i<-i+1) 
        signe <- (-1)^i
        num <- puissance(x, 2*i)
        denom <- factoriel(2*i)
        cos <- cos + (signe * num) / denom
    FINPOUR

    RETOURNER cos
FIN 
````