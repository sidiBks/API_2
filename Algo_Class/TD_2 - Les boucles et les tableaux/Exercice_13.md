# LES BOUCLES ET LES LISTES - EXERCICE 13

## 🌟 ENONCER :
```
    Soit un tableau T à deux dimensions (22, 18) que vous devrez remplir de valeurs numériques réels.
    Ecrire un algorithme :
        > Recherche et affiche la plus grande valeur de chaque ligne
        > Recherche et affiche la plus petite valeur de chaque colonne
        > Recherche la plus grande valeur et la plus petite entre toutes les valeurs de ce tableau
```

## ✅ REPONSE :

````
ALGORITHME_LIST_REVERSE
    T[22][18], Mi[22], Mj[18], un_max, max_i, max_i, max_global : REEL
    i, j :ENTIER
    ---
DEBUT
    /* Lecture de la liste. */
    POUR (i<-0, i<22, i<-i+1)
        POUR (j<-0, j<18, j<-j+1)
            AFFICHER('Valeur de ', i ' ème ligne ', j, ' ème colonne.')
            LiRE(T[i][j])
        FINPOUR
    FINPOUR


    /* Boucler sur les lignes pour récupérer le tableau Mi[22] contenant les maximums en ligne. */
    POUR (i<-0, i<22, i<-i+1)
        POUR (j<-0, j<18, j<-j+1)
            SI(j=0 OU un_max < T[i][j]) ALORS
                un_max <- T[i][j]
            FINSI
        FINPOUR
        Mi[i] <- un_max
    FINPOUR


    /* On refait la même chose mais cette fois suivant les colonnes sur Mj[18]. */
    POUR (j<-0, j<18, j<-j+1)
        POUR (i<-0, i<22, i<-i+1)
            SI(i=0 OU un_max < T[i][j]) ALORS
                un_max <- T[i][j]
            FINSI
        FINPOUR
        Mj[j] <- un_max
    FINPOUR


    /* Il suffit de boucler sur Mi[22] pour récupérer max_i. */
    POUR (i<-0, i<22, i<-i+1)
        SI(i=0 OU max_i < Mi[i]) ALORS
            max_i <- Mi[i]
        FINSI
    FINPOUR

    AFFICHER('Le maximum en ligne est : ', max_i)

    /* Il suffit de boucler sur Mj[18] pour récupérer max_j. */
    POUR (j<-0, j<18, j<-j+1)
        SI(j=0 OU max_j < Mj[j]) ALORS
            max_j <- Mj[j]
        FINSI
    FINPOUR

    AFFICHER('Le maximum en colonne est : ', max_j)

    /* Le maximum global n'est autres que max{max_i,max_j}*/
    SI(max_i >= max_j) ALORS
        max_global <- max_i
    SINON
        max_global <- max_j
    FINSI 

    AFFICHER('Le maximum global est : ', max_global)
FIN 
````

--- 

> Always remember to express gratitude to God, folks!