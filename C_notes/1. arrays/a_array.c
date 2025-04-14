#include <stdio.h>  // this is used to import printf() and scanf()

int main()
{
    // --------------- 1. Introduction ---------------

    // array = a data structure that can store many values of the same data type.

    double price[] = {5, 10, 15, 25, 20};
    char name[] = "Ahmed";

    printf("%.2lf %c", price[0], name[0]);

    // --------------- 2.1. Another way to start an array ---------------

    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 20.0;

    // --------------- 2.2. We can also use for loop to initiates an array ---------------

    return 0;
}