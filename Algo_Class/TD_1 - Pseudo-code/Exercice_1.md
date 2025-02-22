# PSEUDO-CODE - EXERCICE_1

## 🌟 ENONCER
Quelles seront les valeurs des variables A,B et C après exécution des instructions des algorithmes suivants ?

### 🚀 ALGORITHME_1

````
Algorithme_1
    A, B, C : Entier
    ---
DEBUT
    A <- 5
    B <- 3
    C <- A + B
    A <- 2 
    C <- B - A
FIN 
````

### ✅ REPONSE

| | A | B | C |
|---|---|---|---|
| A <- 5 | 5 | X | X |
| B <- 3 | 5 | 3 | X | 
| C <- A + B | 5 | 3 | 8 |
| A <- 2 | 2 | 3 | 8 |
| C <- B - A | 2 | 3 | 1 |

### 🚀 ALGORITHME_2

````
Algorithme_2
    A, B, C : Entier
    ---
DEBUT
    A <- 3
    B <- 10
    C <- A + B
    B <- A + B
    A <- C
FIN 
````

### ✅ REPONSE

| | A | B | C |
|---|---|---|---|
| A <- 3 | 3 | X | X |
| B <- 10 | 3 | 10 | X | 
| C <- A + B | 3 | 10 | 13 |
| B <- A + B | 3 | 13 | 13 |
| A <- C | 13 | 13 | 13 |

### 🚀 ALGORITHME_3

````
Algorithme_3
    A, B, C : Entier
    ---
DEBUT
    A <- 2
    B <- 1
    C <- (5*(A+2)*3)*(B+4)
    B <- C+8/2
    A <- C%2
FIN 
````

### ✅ REPONSE

| | A | B | C |
|---|---|---|---|
| A <- 2 | 2 | X | X |
| B <- 1 | 2 | 1 | X | 
| C <- (5*(A+2)\*3)*(B+4) | 2 | 1 | 300 |
| B <- C+8/2 | 2 | 304 | 300 |
| A <- C%2 | 0 | 304 | 300 |
