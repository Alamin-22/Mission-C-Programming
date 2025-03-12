#include <stdio.h>
// Check if a number is positive, negative, or zero
int main()
{
    int number;

    printf("Enter a number to check positive negative or Zero  ||| \n    ");

    scanf("%d", &number);

    // if (number == 0)
    // {
    //     printf("The Number %d is Zero", number);
    // }
    // else if (number > 0)
    // {
    //     printf("The Number %d is a positive Number", number);
    // }
    // else
    // {
    //     printf("The Number %d is a Negative Number", number);
    // }

    if (number > 0)
    {
        printf("The Number %d is Positive", number);
    }
    else
    {
        if (number < 0)
        {
            printf("The Number %d is a Negative Number", number);
        }
        else
        {
            printf("The Number %d is Zero", number);
        }
    }

    return 0;
}