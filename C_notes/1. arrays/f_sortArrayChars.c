#include <stdio.h>  // this is used to import printf() and scanf()


// --------------- 8.2. Sorting array of characters ---------------


void sort_greater(char array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void sort_less(char array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            // the only logic difference resides in '<' / '>'
            if(array[j] < array[j+1])
            {
                char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(char array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c\t", array[i]);
    }
}

int main()
{
    char array[] = {'F', 'A', 'D', 'C', 'B'};
    int size    = sizeof(array)/sizeof(array[0]);

    sort_greater (array, size);
    printArray   (array, size);
    printf       ("\n");
    sort_less    (array, size);
    printArray   (array, size);

    return 0;
}