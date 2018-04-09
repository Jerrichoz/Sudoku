int SetField(int xCoordinate, int yCoordinate, int Array[9][9],int Number)
{
    Array[xCoordinate][yCoordinate] = Number;
    return 0;
}

int GetField(int xCoordinate, int yCoordinate, int Array[9][9])
{
    return Array[xCoordinate][yCoordinate];
}

int GenerateField(int Array[8][8])
{
    int i = 0;
    int j = 0;
    printf("+---+---+---+\n");
    for(i = 1; i <= 9; i++)
    {
        printf("|");
        for(j = 1; j <= 9; j++)
        {
            printf("%i",Array[j][i]);
            if((j%3) == 0)
            {
                printf("|");
            }
        }
        printf("\n");
        if((i%3) == 0)
        {
            printf("+---+---+---+\n");
        }
    }
    return 0;
}
