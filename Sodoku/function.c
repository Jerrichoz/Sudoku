int SetField(int xCoordinate, int yCoordinate, int Array[9][9],int Number)
{
    Array[xCoordinate][yCoordinate] = Number;
    return 0;
}

int GetField(int xCoordinate, int yCoordinate, int Array[9][9])
{
    return Array[xCoordinate][yCoordinate];
}

int GenerateField(int Array[9][9])
{
    printf("Test5\n");
    int i = 0;
    int j = 0;
    //Gitterkonstrukt - Anfang
    printf("+-------+-------+-------+\n");
    for(i = 0; i <= 8; i++)
    {
        printf("|");
        for(j = 0; j <= 8; j++)
        {
            if (Array[j][i] == 0)
            {
                printf(" *");
            }
            else
            {
              printf(" %i",Array[j][i]);
            }
            if((j==2)||(j==5))
            {
                printf(" |");
            }
        }
        printf(" |\n");
        if((i==2)||(i==5))
        {
            //Gitterkonstrukt - Ende
            printf("+-------+-------+-------+\n");
        }
    }
    printf("+-------+-------+-------+\n");
    return 0;
}
