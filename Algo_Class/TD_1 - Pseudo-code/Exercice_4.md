# PSEUDO CODE - EXERCICE 4 

## 🌟 ENONCER :
```
    Ecrire un algorithme qui affiche la résistance équivalente à trois résistances R_{1}, R_{2} et R_{3} (type Réel).
    Les données sont introduites par l'utilisateur et l'algorithme doit proposer un choix à l'utilisateur en fonction du branchement des résistances:
        - Si les résistances sont branchées en série :
            R_{sér} = R_{1} + R_{2} + R_{3}
        - Si les résistances sont branchées en parallèle : 
            R_{par} = (R_{1}*R_{2}*R{3})/( R_{1}*R_{2} + R_{1}*R{3} + R_{2}*R{3})
```

## ✅ REPONSE :

````
Calcul_de_resistance
    T, Req, R1, R2, R3 : ENTIER
    ---
DEBUT
    AFFICHER("Donner les valeur de R1 R2 et R3")
    LIRE(R1, R2, R3)
    AFFICHER("CHOIX DU TYPE")
    AFFICHER("0 : série")
    AFFICHER("1 : parallèle")
    LIRE(T)
    SI ( T = 0 ) ALORS
        Req <- R1 + R2 + R3
        AFFICHER("La valeur de Req: ", Req)
    SINON
        SI ( T = 1 ) ALORS
            Req <- (R1 * R2 * R3) / (R1*R2 + R1*R3 + R2*R3)
            AFFICHER("La valeur de Req: ", Req)
        SINON 
            AFFICHER("Entrée invalide")
        FINSI
    FINSI
FIN 