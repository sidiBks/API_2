#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    // --------------- 1. Introduction ---------------


    // struct = collection of related members ("variables")
    //          they can be off different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Ahmed");
    player1.score = 4;

    strcpy(player2.name, "Mouhcine");
    player2.score = 15;

    printf("%s %d\t", player1.name, player1.score);
    printf("\n");
    printf("%s %d\t", player2.name, player2.score);


    return 0;
}