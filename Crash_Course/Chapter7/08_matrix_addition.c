#include <stdio.h>

int main()
{
    int TableA[2][2] = {{1, 2},
                        {3, 4}};
    int TableB[2][2] = {{5, 6},
                        {7, 8}};

    int SumOFTableAB[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            SumOFTableAB[i][j] = TableA[i][j] + TableB[i][j];
        }
    }

    printf("The Sum of Table A and B is :=> \n");
    for (size_t i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", SumOFTableAB[i][j]);
        }
        printf("\n");
    }

    return 0;
}