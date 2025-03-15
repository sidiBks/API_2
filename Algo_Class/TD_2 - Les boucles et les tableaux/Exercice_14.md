# LES BOUCLES ET LES LISTES - EXERCICE 14

## 🌟 ENONCE :
```
    Etant donnée un tableau T de 40 entiers, écrire un algorithme permettant de :
        > Saisir le tableau T
        > Calculer la somme et la moyenne de T
        > Chercher une valeur donnée dans le tableau et afficher sa position dans le tableau
        > Calculer le nombre d'occurrence d'une valeur donnée
        > Afficher tous éléments pairs de T
```

## ✅ REPONSE :

````
ALGORITHME_LIST_REVERSE
    T[40], i, j, k, S, M, n, m, l, occur : ENTIER
    FIND : BOOLEENNE
    ---
DEBUT
    /* Saisir le tableau T. */

    POUR (i<-0, i<40, i<-i+1)
        AFFICHER('Donner la ', (i+1), ' ème valeur.')
        LIRE(T[i])
    FINPOUR

    /* Calculer la somme et la moyenne de T. */

    S <- 0
    POUR (i<-0, i<40, i<-i+1)
        S <- T[i] + S
    FINPOUR
    M <- S / 40

    AFFICHER('La somme de T : ', S, 'et la moyenne de T est : ', M)

    /* Chercher une valeur donnée dans le tableau et afficher sa position dans le tableau. */
    AFFICHER('Donner la valeur que vous cherchez dans T')
    LIRE(n)
    FIND <- FAUX
    k <- 0
    TANTQUE(NON FIND OU k<40)
        SI(T[k] = n) ALORS
            FIND <- VRAI
        FINSI
    FINTANTQUE

    SI(FIND) ALORS
        AFFICHER('La valeur a pour indice : ', k)
    SINON
        AFFICHER("La valeur n'existe pas dans le tableau.")
    FINSI

    /* Calculer le nombre d'occurrence d'une valeur donnée. */

    AFFICHER('Donner la valeur répetée')
    LIRE(m)
    occur <- 0
    TANTQUE(k<40)
        SI(T[k] = m) ALORS
            occur <- occur + 1
        FINSI
    FINTANTQUE

    /* Afficher tous éléments pairs de T. */

    POUR (l<-0, l<40, l<-l+1)
        SI(T[l]%2 = 0) ALORS
            AFFICHER('Ceci est un élément pair : ', T[l])
        FINSI
    FINPOUR
FIN 
````
    

--- 

> Always remember to express gratitude to God, folks!