# LES BOUCLES ET LES LISTES - EXERCICE 8

## 🌟 ENONCER :
```
    Ecrire des algorithmes qui calculent et affichent la valeur de chacune de ces suites pour une certaine valeur de << n >> Introduite par l'utilisateur
```


## ✅ REPONSE :

1. 

```math

\begin{cases} 
\quad U_0 = 1 \\
\quad U_{n} = 6U_{n-1} + 4, & \text{si} \quad n > 1
\end{cases}

```

````
ALGORITHME_CALCUL_INTERET
    U, n, i : Entier
    ---
DEBUT
    AFFICHER("Insérer un nombre")
    LIRE(n)
    POUR (i<-0, i<=n, i<-i+1)
        SI (i = 0) ALORS
            U <- 1
        SINON
            U <- 6*U + 4
        FINSI
    FINPOUR
    AFFICHER("Le", n, "ème terme de U: ", U)
FIN 
````


2. 

```math

\begin{cases} 
\quad U_0 = 0, \quad U_1 = 1 \\
\quad U_{n} = 6U_{n-1} - 9U_{n-2}, & \text{si } n > 1
\end{cases}

```

````
ALGORITHME_CALCUL_INTERET
    U, U0, U1, n, i : Entier
    ---
DEBUT
    AFFICHER("Insérer un nombre")
    LIRE(n)
    U0 <- 0
    U1 <- 1
    POUR (i<-0, i<=n, i<-i+1)
        SI (i = 0) ALORS
            U <- U0
        SINONSI (i = 1) ALORS
            U <- U1
        SINON 
            U <- 6*U1 - 9*U0
            U0 <- U1 
            U1 <- U
        FINSI
    FINPOUR
    AFFICHER("Le", n, "ème terme de U: ", U)
FIN 
````


3. 

```math

\begin{cases} 
\quad U_0 = 4 \\
\quad \forall n \in \mathbb{N^{*}} & 
\begin{cases} 
\quad U_{n} = \frac{U_{n-1}}{2}, \quad \text{si n est pair} \\
\quad U_{n} = \frac{U_{n-1} + 1}{2}, \quad \text{si n est impair}
\end{cases}
\end{cases}


```

````
ALGORITHME_CALCUL_INTERET
    i, n : Entier
    U : Réel
    ---
DEBUT
    AFFICHER("Insérer un nombre")
    LIRE(n)
    POUR (i<-0, i<=n, i<-i+1)
        SI (i = 0) ALORS
            U <- 4
        SINON
            SI (n%2 = 0) ALORS
                U <- U/2
            SINON
                U <- (U+1)/2
            FINSI
        FINSI
    FINPOUR
    AFFICHER("Le", n, "ème terme de U: ", U)
FIN 
````

--- 

> Always remember to express gratitude to God, folks!