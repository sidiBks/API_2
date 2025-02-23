# LES BOUCLES ET LES LISTES - EXERCICE 4

## 🌟 ENONCER :
```
    Ecrire un algorithme qui demande à l'utilisateur de fournir deux nombres entiers n et p, tel que n >= p. Puis, il calcul le nombre de combinaisons de p par n : C_{n}^{p}
```

## ✅ REPONSE :

````
ALGORITHME_CALCUL_COMBINAISON
    C, P1, P2, P3, i, k : Entier
    ---
DEBUT
    SI (p > n) ALORS
        k <- p
        p <- n
        n <- k
    FINSI

    /* P1 = n! */
    P1 = 1

    /* P2 = p! */
    P2 = 1

    /* P3 = (n-p)! */
    P3 = 1

    POUR(i<-1, i<=n, i<-i+1)
        TANTQUE(i <= n)
            P1 <- P1 * i
        FINTQ
        TANTQUE(i <= p)
            P2 <- P2 * i
        FINTQ
        TANTQUE(i <= (n-p))
            P3 <- P3 * i
        FINTQ
    FINPOUR

    C <- P1 / (P2*P3)

    AFFICHER("La valeur de la combinaison est C: ", C)
FIN 
````
