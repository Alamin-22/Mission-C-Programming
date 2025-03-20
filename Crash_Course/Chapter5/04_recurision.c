#include <stdio.h>

int Factorial(int);
/*

Factorial(5) => 5*4*3*2*1;
Factorial(4) => 4*3*2*1;
Factorial(3) => 3*2*1;
Factorial(n) => 1 x 2 x 3 ..... x (n-1) x n;
*/

int Factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1; // we know that factorial of 0 and 1 is always 1
    };

    return Factorial(n - 1) * n;
};

int main()
{
    int a = 7;
    printf("The Factorial of %d is => ( %d )  \n", a, Factorial(a));
    return 0;
}