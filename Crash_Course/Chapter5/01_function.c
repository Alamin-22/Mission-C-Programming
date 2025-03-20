#include <stdio.h>

/*
There are two types of Functions are available in C programming Language

1. Library Functions => (printf, scanf etc)
2. User Defined Functions => (Function Created by users Like I did in this code; SumCalculator)

-------------

( void ) => is used to avoid the retrun type of the function




*/

// function Prototype
int SumCalculator(int, int);

int SumCalculator(int number1, int number2) /// here num 1 and 2 are known as (parameters)
{
    printf("This Code Run on the Function SumCalculator \n Sum Of %d and %d is %d \n", number1, number2, number1 + number2);
    return number1 + number2;
}

int main()
{

    int a = 10, b = 20;

    int result = SumCalculator(a, b); /// here a and b are known as ( Arguments )

    printf("The value of Result is => ( %d )  \n ", result);

    return 0;
}