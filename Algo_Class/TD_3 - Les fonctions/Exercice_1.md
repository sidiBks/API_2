# LES SOUS ALGORITHMES (LES FONCTIONS) - EXERCICE 1 

## 🌟 ENONCER 1:
```
    Faites la fonction KmMiles qui prend en paramètre un nombre de kilomètres et qui renvoi la valeur correspendante en miles.
```

## ✅ REPONSE 1:

````
FONCTION kmMiles (kms : ENTIER) : REEL
DEBUT
    RETOURNER kms / 1.6
FINFCT
````

## 🌟 ENONCER 2:
```
    Faites la fonction MilesKm qui fait l'opération inverse (elle calcule le nombre de kilomètres à partir de miles).
```

## ✅ REPONSE 2:

````
FONCTION milesKm (miles : ENTIER) : REEL
DEBUT
    RETOURNER miles * 1.6
FINFCT
````

## 🌟 ENONCER 3:
```
    Faites la fonction cmKm qui prend une valeur entière de centimètres et qui renvoie le nombre de mètres équivalents.
```

## ✅ REPONSE 3:

````
FONCTION cmKm (cms : entier) : REEL
DEBUT
    RETOURNER cms / 100000
FINFCT
````

## 🌟 ENONCER 4:
```
    Faites ensuite un algorithme qui demande à l'utilisateur un nombre puis qui lui demande quelle conversion à effectuer (1 pour km->Miles, 2 pour miles->Km, 3 pour cm->Km et 4 pour cm->Miles) pour qu'ensuite afficher le résultat de cette conversion.
```

## ✅ REPONSE 4:

````
ALGORITHME_LIST_REVERSE
    choix : ENTIER
    n : REEL
    ---
DEBUT
    AFFICHER
    (" 
        Faire un choix de conversion :\n
        1 : km->Miles\n
        2 : miles->Km\n
        3 : cm->Km\n
        4 : cm->Miles
    ")
    LIRE(choix)

    AFFICHER("La valeur à convertir : ")
    LIRE(n)

    SELON choix : 
        CAS 1 : 
            AFFICHER( kmMiles(n), "Miles" )
        CAS 2 :
            AFFICHER( mileKm(n), "Km" )
        CAS 3 : 
            AFFICHER( cmKm(n), "Km" )
        CAS 4 :
            AFFICHER ( cmKm(kmMiles(n)), "Miles" ) 
        SINON : 
            AFFICHER ("ENTRE INVALIDE")
    FINSELON
FIN 
````
    
    

--- 

> Always remember to express gratitude to God, folks!