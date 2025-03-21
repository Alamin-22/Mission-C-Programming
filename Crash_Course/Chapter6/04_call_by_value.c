#include <stdio.h>

int SumCalculator(int a, int b);

int SumCalculator(int a, int b)
{
    a = 6; // we are trying to change the value of a but it will not change the actual value of a
    return a + b;
}

int main()
{

    int a = 10;
    int b = 20;

    //  this function call is known as call by value. because we are just passing the value of variable. but from the given function we can not change the actual value of any predefined variable like a and b
    int result = SumCalculator(a, b);

    printf("The sum of %d and %d is %d \n", a, b, result);

    printf("The value of changed a is %d \n", a);

    return 0;
}