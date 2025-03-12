#include <stdio.h>
// check the number if it is positive or negative

int main()
{
    int number;

    printf("please provide a number\n ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("This number is Positive ");
    }
    else
    {
        printf("this number is negative ");
    }

    return 0;
}