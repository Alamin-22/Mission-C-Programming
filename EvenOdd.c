#include <stdio.h>

// checking the number even or odd
int main()
{

    int number;

    printf("Please provide a Number to Check Even or Odd \n");

    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The provided Number %d is an Even Number", number);
    }
    else
    {
        printf("The provided Number %d is an Odd Number", number);
    };

    return 0;
};