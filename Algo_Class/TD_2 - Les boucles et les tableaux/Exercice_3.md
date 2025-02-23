# LES BOUCLES ET LES LISTES - EXERCICE 3

## 🌟 ENONCER :
```
    Ecrire un algorithme qui saisit un entier et qui l'affiche à l'envers. Par exemple, l'utilisateur saisit 123456 et le prograrmme affiche 654321.
```

## ✅ REPONSE :

````
ALGORITHME_REVERSED_INTEGER
    I, r, n : Entier
    ---
DEBUT
    AFFICHER("Donner un entier à inverser")
    LIRE(n)
    I <- 0 
    TANTQUE(n != 0)
        r <- n % 10
        I <- 10*I + r
        n <- n div 10
    FINTQ
FIN 
````

--- 

> Always remember to express gratitude to God, folks!