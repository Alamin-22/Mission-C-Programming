#include <stdio.h>

int main()
{
    int n, not_prime = 0;
    printf("Enter a number to check Prime or not : \n");
    scanf("%d", &n);

    if (n <= 1)
    {
        not_prime = 1; // 0 and 1 are not prime
    }
    else if (n == 2)
    {
        not_prime = 0; // 2 is prime
    }
    else
    {
        // Check divisibility from 2 to sqrt(n)
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not a prime number.\n", n);
    }
    else
    {
        printf("%d is a prime number.\n", n);
    }

    return 0;
}
