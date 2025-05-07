#include <stdio.h>

int main()
{

    // Q9: Take 5 integers in an array and print the sum and average of all elements.

    int numbers[5];
    int sum = 0, average = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for idx no %d  =>> ", i);
        scanf("%d", &numbers[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        sum += numbers[j];
    }

    average = sum / 5;

    printf("Sum is => ( %d ) and average is =>  ( %d ) ", sum, average);

    return 0;
}