#include <stdio.h>

int main()
{
    // variable is a name of memory location;

    int i = 10;
    int j = i;
    // %d ==> is called format specifier
    // %d ==> is for integer
    // %f ==> is for float
    // %c ==> is for character

    int a = 2, b = 3, c = 4, d = 5; // we can also declare multiple same type variable in a single line

    printf("The value of I is %d and the value of j is %d \n", i, j);

    printf("The value of a is ( %d ), \n  the value of b is ( %d ), \n The value of c is ( %d ) , \n the value of d is ( %d ), \n  ", a, b, c, d);

    return 0;
}