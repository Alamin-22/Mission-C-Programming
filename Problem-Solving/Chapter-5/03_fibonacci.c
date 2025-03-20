#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 10;

    printf("The Fibonacci Series is => ");

    for (int i = 0; i < n; i++) // Start from 0 for correct sequence
    {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
