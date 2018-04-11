#include <windows.h>
#include "header.h"

int SetSodokuField(int xCoordinate, int yCoordinate, SF GameFields[9][9],int Number)
{
    (GameFields[xCoordinate][yCoordinate]).Number = Number;
    return 0;
}

int GetSodokuField(int xCoordinate, int yCoordinate, SF GameFields[9][9])
{
    return GameFields[xCoordinate][yCoordinate].Number;
}

int GenerateField(SF GameFields[9][9])
{
    int i = 0;
    int j = 0;
    //Top border of the Grid
    printf("+-------+-------+-------+\n");
    //2 Loops, for generating the Field based of the Array GameFields.

    //Loop for the columns
    for(i = 0; i <= 8; i++)
    {
        printf("|");
        //Loop for the rows
        for(j = 0; j <= 8; j++)
        {
            //"." Should be displayed instead of 0
//            if (GameFields[j][i].Number == 0)
//            {
//                printf(" .");
//            }
//            else
//            {
                //Farbe per Funktion setzen NOT FINISHED YET

                if(1 == 1)
                {

                    GameFields[j][i].Color = 2;

                    printf(" %i",GameFields[j][i]);

                    GameFields[j][i].Color = 7;
                }
//            }
            //Formating for Layout
            if((j==2)||(j==5))
            {
                printf(" |");
            }
        }
        printf(" |\n");
        if((i==2)||(i==5))
        {
            //
            printf("+-------+-------+-------+\n");
        }
    }
    printf("+-------+-------+-------+\n");
    return 0;
}


