#include <stdio.h>  // this is used to import printf() and scanf()

int main()
{
    // --------------- 3. Print an array with loop ---------------

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 35.0, 112.0, 1.0};

    // printf("%d bytes\t", sizeof(prices));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("%.2lf\t", prices[i]);
    }

    return 0;   
}