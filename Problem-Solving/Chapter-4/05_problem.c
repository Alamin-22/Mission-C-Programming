#include <stdio.h>

int main()
{
    // Calculating the factorial of a number
    int product = 1;
    int n = 4; // Change this value to compute factorial of other numbers
    int i = 1;
    while (i <= n)
    {
        product *= i;
        i++;
    }

    printf("The factorial of %d is => ( %d )\n", n, product);

    return 0;
}
