#include <stdio.h>
#include <math.h>

int main()
{
    int a = 10;
    double CalculatedArea;

    CalculatedArea = pow(a, 2); /// => Keep it in mind that pow function always return the value in double. SO if you are using %d it will return garbage value.

    /*
    %f  =>> is used for float
    %lf =>> is used for double
    */

    printf("The Area of Square is => ( %f) \n", CalculatedArea);

    return 0;
}