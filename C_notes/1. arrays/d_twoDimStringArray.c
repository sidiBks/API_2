#include <stdio.h>  // this is used to import printf() and scanf()
#include <string.h> // this is used to import the strcpy()

int main()
{
    // --------------- 7. Array of strings ---------------

    char cars[][10] = {"Mustang","Corvette","Camaro"};

    //  /!\ error :=: cars[0] = "Tesla";
    // we should use strcpy() method

    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\t", cars[i]);
    }

    return 0;
}