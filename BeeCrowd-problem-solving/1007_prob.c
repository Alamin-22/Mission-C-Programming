#include <stdio.h>

/*

problem --- 1007


Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.


*/

int main()
{
    int A, B, C, D, DIFERENCA;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DIFERENCA = ((A * B) - (C * D));

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}