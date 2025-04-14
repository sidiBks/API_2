#include <stdio.h>  // this is used to import printf() and scanf()

int main()
{
    // --------------- 4. Introduction to 2D arrays ---------------

    // 2D array = an array, where each element is an entire array
    // use cases : matrix, grid, table of data

    // int numbers[][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };

    // --------------- 5.1. Asign values to 2D array ---------------

    int numbers[2][3];
    // int numbers[3][3];

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;

    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    // numbers[2][0] = 7;
    // numbers[2][1] = 8;
    // numbers[2][2] = 9;

    // --------------- 5.2. We can also use for loops to asign values to a 2D array ---------------

    // --------------- 6. Print 2D array ---------------


    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}