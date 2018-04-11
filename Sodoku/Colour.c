#include <windows.h>
#include "header.h"
#include <stdio.h>

//Quelle http://www.cplusplus.com/forum/beginner/54360/
/*
The different colour codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY/Standard
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/


int setColour(int colour)
{

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colour);

return 0;
}
int getColour()
{
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    return GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo);


    //GetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE));

}

