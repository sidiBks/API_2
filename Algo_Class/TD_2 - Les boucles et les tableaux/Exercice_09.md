# LES BOUCLES ET LES LISTES - EXERCICE 9

## 🌟 ENONCE :
```
    Ecrire les algorithmes qui calculent et affichent la valeur de chacune de ces séries pour une certaine valeur de « n » et « m » introduite par l’utilisateur.
```

## ✅ REPONSE :

1. 

```math

\sum_{i=1}^{n} i^{2}

```

````
ALGORITHME_SOMME_CARRE
    S, n, i : ENTIER
    ---
DEBUT
    AFFICHER("Donner une valeur de n")
    LIRE(n)
    S <- 0
    POUR (i<-1, i<=n, i<-i+1)
        S <- S + i*i
    FINPOUR
    AFFICHER("La valeur de la somme S est : ", S)
FIN 
````

2. 

```math

\sum_{i=1}^{n} \sum_{j=0}^{m} \frac{1}{i+j}

```

````
ALGORITHME_SOMME_HARMONIQUE_DOUBLE
    n, m, i, j : ENTIER
    S : REEL
    ---
DEBUT
    AFFICHER("Donner une valeur de n et m")
    LIRE(n, m)
    S <- 0
    POUR (i<-1, i<=n, i<-i+1)
        POUR (j<-0, j<=m, j<-j+1)
            S <- S + 1/(i+j)
        FINPOUR
    FINPOUR
    AFFICHER("La valeur de la somme S est : ", S)
FIN 
````

3. 

```math

\sum_{i=1}^{n} (\sum_{j=0}^{i} (\sum_{k=j}^{i} ( i+j-k ) + 4) \times 2)

```

````
ALGORITHME_SOMME_TRIANGULAIRE_TRIPLE
    S, Si, n, i, j, k : ENTIER
    ---
DEBUT
    AFFICHER("Donner une valeur de n")
    LIRE(n)
    Si <- 0
    S <- 0
    POUR (i<-1, i<=n, i<-i+1)
        POUR (j<-0, j<=i, j<-j+1)
            POUR (k<-j, k<=i, k<-k+1)
                Si <- S + i + j - k
            FINPOUR
            Si <- S + 4 
        FINPOUR
        S <- S + Si
    FINPOUR
    S <- 2*S
    AFFICHER("La valeur de la somme S est : ", S)
FIN 
````

4. 

```math

\prod_{i=1}^{n} \sum_{j=1}^{m} \frac{i+j}{i \times j}

```

````
ALGORITHME_PRODUIT_DE_SOMME
    S, P : REEL
    n, m : ENTIER
    ---
DEBUT
    AFFICHER("Donner la valeur de m et n")
    LIRE(m,n)
    S <- 0
    P <- 1
    POUR (i<-1, i<=n, i<-i+1)
        POUR (j<-1, j<=m, j<-j+1)
            S <- S + (i+j)/(i*j)
        FINPOUR
        P <- P * S
    FINRPOUR
    AFFICHER("La valeur du produit est : ", P)
FIN 
````

--- 

> Always remember to express gratitude to God, folks!