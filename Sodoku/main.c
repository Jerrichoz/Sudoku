#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    printf("hallo");
    //Testarray erstellen

//    int TestGame[9][9];
    struct arrayconstruct arraystruct;

    int i = 0;
    int j = 0;
    int Number1;
    int Number2;


    printf("Test1");

    //Füllen des Arrays
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            SetField(i,j,arraystruct.testarray,0);
        }
    }
    printf("Test2");
    SetField(1,2,arraystruct.testarray,8);
//    SetField(6,0,TestGame,2);
//    SetField(1,1,TestGame,1);
//    SetField(3,1,TestGame,3);
//    SetField(5,1,TestGame,7);
//    SetField(7,1,TestGame,5);
//    SetField(0,2,TestGame,5);
//    SetField(1,2,TestGame,4);
//    SetField(7,2,TestGame,7);
//    SetField(8,2,TestGame,6);
    printf("Test3");

//    scanf("%i", &Number1);
//    scanf("%i", &Number2);

//    printf("%i\n",GetField(Number1,Number2,TestGame));
    GenerateField(arraystruct.testarray);

    printf("Test4");

    return 0;
}
