
#include <windows.h>
#include "header.h"
#include <stdio.h>
 int cursorloop(SF GameFields[9][9]){

    //Arraycoordinates to navigate
    int arrayx = 0;
    int arrayy = 0;

    int boolexit = 0;
    while(boolexit != 1)
    {
        if(kbhit()) // Nur wenn auch eine Taste gedrückt ist
        {
            //Quelle für Cursor https://www.computerbase.de/forum/showthread.php?t=202425
            //                  https://docs.microsoft.com/en-us/windows/console/using-the-high-level-input-and-output-functions
            char c = getch(); // Muss auf keine Eingabe warten, Taste ist bereits gedrückt
            //printf("%i",c);
            switch(c)
            {
                //Uparrow
                case(72):
                arrayy -= 1;
                break;

                //Downarrow
                case(80):
                arrayy += 1;
                break;

                //Leftarrow
                case(75):
                arrayx -= 1;
                break;

                //Rightarrow
                case(77):
                arrayx += 1;
                break;
            }
                //Marking the place where the cursor
                setColour(4);
                GameFields[arrayy][arrayx].Number = GameFields[arrayy][arrayx].Number;
                setColour(7);
                system("cls");
                GenerateField(GameFields);
        }
    }
 }
