# LES BOUCLES ET LES LISTES - EXERCICE 7

## 🌟 ENONCER :
```
    Ecrire un algorithme qui demande successivement 20 nombres à l'utilisateur, et qui lui dise ensuite quel était le plus grand parmi ces 20 nombres. Exemple d'exécution :
        Entrer le nombre numéro 1 : 12
        Entrer le nombre numéro 2 : 14
        ...
        Entrer le nombre numéro 20 : 6
        Le plus grand de ces nombre est : 14
```

## ✅ REPONSE :

````
ALGORITHME_CALCUL_INTERET
    i, n, max : Entier
    ---
DEBUT
    POUR (i<-1, i<=20, i<-i+1)
        AFFICHER("Entrer le nombre numéro ",i, " : ")
        LIRE(n)
        SI ( i=0 OU n > max) ALORS
            max <- i
        FINSI
    FINPOUR
    AFFICHER("Le plus grand de ces nombres est : ", max)
FIN 
````
