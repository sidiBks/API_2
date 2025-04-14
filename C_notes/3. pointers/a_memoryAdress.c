#include <stdio.h>

int main()
{
    // --------------- 1. Introduction to memory ---------------

    // memory = an array of bytes within RAM
    // memory block = a single unit (byte) within memory, used to hold some value
    // memory address = the adress of where a memory block is located

    char a;
    char b[2];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    // printf("%p\n", &c);

    return 0;
}