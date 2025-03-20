#include <stdio.h>

/*
There are two types of Functions are available in C programming Language

1. Library Functions => (printf, scanf etc)
2. User Defined Functions => (Function Created by users Like I did in this code; SumCalculator)

-------------

( void ) => is used to avoid the retrun type of the function




*/

// function Prototype
int change(int);

int change(int number1)
{
    number1 = 100;

    printf("The value of number1 is => ( %d )  \n", number1);

    return number1;
}

int main()
{

    int a = 22;

    int result = change(a);

    printf("The value of Result is => ( %d )  \n ", result);

    return 0;
}