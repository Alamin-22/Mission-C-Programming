#include <stdio.h>

/*
an arithmetical operations and is result


int *int =>>> int;
int * float  =>>> float;
float * float =>>> float;

*/

int main()
{

    int a = 4;
    int b = 3;
    int c = (a + b);

    printf("The value of sum is =>> %d \n", c);

    // % means modules. modules means the remainder

    printf("The remainder when a is divided by b is :  => %d \n", (a % b));

    return 0;
}