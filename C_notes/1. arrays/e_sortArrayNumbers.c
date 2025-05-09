#include <stdio.h>  // this is used to import printf() and scanf()


// --------------- 8.1. Sorting array of numbers ---------------

void sort_greater(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void sort_less(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            // the only logic difference resides in '<' / '>'
            if(array[j] < array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}

int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size    = sizeof(array)/sizeof(array[0]);

    sort_greater (array, size);
    printArray   (array, size);
    printf       ("\n");
    sort_less    (array, size);
    printArray   (array, size);

    return 0;
}