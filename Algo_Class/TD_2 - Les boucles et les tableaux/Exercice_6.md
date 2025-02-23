# LES BOUCLES ET LES LISTES - EXERCICE 6

## 🌟 ENONCER :
```
    Pour sa naissance, la grand-mère de Karim place une somme de 10000dh sur son compte épargne rémunéré au taux de 2.25% (chaque année le compte est augmenté de 2.25%).
    Développer un algorithme permettant d’afficher le montant de son compte lorsque Karim va atteindre un certain âge.
```

## ✅ REPONSE :

````
ALGORITHME_CALCUL_INTERET
    i, age : Entier
    M : Réel
    ---
DEBUT
    AFFICHER("Donner l'age de Karim")
    LIRE(age)
    M <- 10000
    POUR (i <- 1, i <= age, i<-i+1)
        M <- M*1.0225
    FINPOUR
    AFFICHER("à l'age de ", age, "karim aura : ", M)
FIN 
````

--- 

> Always remember to express gratitude to God, folks!