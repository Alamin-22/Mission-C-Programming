#include <stdio.h>

int main()
{

    // Q2: Take a number as input and check whether it's positive, negative, or zero.
    int num1;
    printf("Enter Number 1 =>> ");
    scanf("%f", &num1);

    if (num1 == 0)
    {
        printf("The given number is ZERO \n");
    }
    else if (num1 > 0)
    {
        printf("The given number is Positive \n");
    }
    else
    {
        printf("The given number is negative \n");
    }

    return 0;
}