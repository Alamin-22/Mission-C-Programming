#include <stdio.h>

int main()
{
    // let table[i][j]
    int table[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    printf("Matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}