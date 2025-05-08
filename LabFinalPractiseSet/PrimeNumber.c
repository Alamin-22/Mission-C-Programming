#include <stdio.h>

int main()
{

    int number;
    int isPrime = 1;

    printf("Enter a Number => ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = 0; // means 0 and 1 is not a prime number
    }
    else
    {

        for (int i = 2; i < number; i++)
        {
            if (number % 2 == 0)
            {
                isPrime = 0;
                break;
            };
        };
    }

    if (isPrime)
    {
        printf("%d is a prime number \n", number);
    }
    else
    {
        printf("%d is not a prime number \n", number);
    }

    return 0;
}