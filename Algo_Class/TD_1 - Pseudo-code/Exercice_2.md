# PSEUDO CODE - EXERCICE 2

## 🌟 ENONCER :
```
    1. Simuler l'exécution de l'algorithme ci-dessous en utilisant comme valeurs pour A, B et C : (5, 8, 9), (2, 6, 3) et (3, 2, 1).
    2. En déduire l'utilité de cet algorithme et donner lui un nom plus significatif.
    3. Déterminer le nombre d'affectations et de comparaisons engendrées par l'algorithme.
```

## 🚀 ALGORITHME :

````
Algorithme_Mystere
    A, B, C, p, d, t : Entier
    ---
DEBUT
    /* Lecture des variables */
    LIRE(A, B, C)
    SI (A < B) ALORS
        SI (C > B) ALORS
            p <- A  
            d <- B  
            t <- C 
        SINON
            SI (A < C) ALORS
                p <- A
                d <- C  
                t <- B
            SINON
                p <- C
                d <- A  
                t <- B
    SINON
        SI (C > A) ALORS
            p <- B
            d <- A  
            t <- C
        SINON
            SI (B < C) ALORS
                p <- B
                d <- C
                t <- A
            SINON
                p <- C
                d <- B  
                t <- A
            FINSI
        FINSI
    FINSI
    /* Affichage du résultat */ 
    AFFICHER(p, d, t)
FIN 
````

## ✅ REPONSE :

1.
```
    Schéma de réponse : Entrée: (A, B, C) => Sortie: (p, d, t)
```
```
    Premier   couple : Entrée: (5, 8, 9) => Sortie: (5, 8 ,9)
    Deuxième  couple : Entrée: (2, 6, 3) => Sortie: (2, 3, 6)
    Troisième couple : Entrée: (3, 2, 1) => Sortie: (1, 2, 3)
```

2. 
```
    L'utilité de cet algorithme n'est autre que réaranger l'entrée en ordre croissant. 
    Un nom plus significatif sera : Algorithme de tri
```

3.  
```
    Nombre d'affectations : 3.
    Nombre de comparaisons : entre 2 et 4
```

--- 

> Always remember to express gratitude to God, folks!