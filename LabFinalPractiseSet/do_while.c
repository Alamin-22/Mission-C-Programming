#include <stdio.h>

int main()
{
    // Q6: Write a program using do-while that takes input until the user enters 0.

    int number;

    do
    {

        printf("Enter a Number =>  ");
        scanf("%d", &number);

        if (number != 0)
        {
            printf("You have entred ( %d )", number);
        }

    } while (number != 0);

    printf("You have entered 0 so function stops");

    return 0;
}