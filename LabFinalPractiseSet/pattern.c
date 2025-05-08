#include <stdio.h>

int main()
{

    // Q7: Print the following pattern using nested for loops:F
    int number;

    printf("Enter the Number =>  ");
    scanf("%d", &number);

    // for (int i = 0; i < number; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         printf("*");
    //     }

    //     printf(" \n");
    // }

    for (int i = 0; i < number; i++)
    {
        for (int j = number; j > i; j--)
        {
            printf("*");
        }

        printf(" \n");
    }

    return 0;
}
