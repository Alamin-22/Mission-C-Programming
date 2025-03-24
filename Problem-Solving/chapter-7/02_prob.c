#include <stdio.h>

int main()
{
    int MultiplicationNumber;
    int array[10];

    printf("Enter the number You want to multiply with \n");
    scanf("%d", &MultiplicationNumber);
    for (int i = 0; i < 10; i++)
    {
        array[i] = MultiplicationNumber * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("The value of %d X %d = %d \n", MultiplicationNumber, i + 1, array[i]);
    }

    return 0;
}