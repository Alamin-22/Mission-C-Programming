#include <stdio.h>
#include <math.h>

int main()
{

    double x, y, result;

    printf("Enter the base Value As X  \n ");
    scanf("%lf", &x);
    printf("Enter the exponent => \n");
    scanf("%lf", &y);

    result = pow(x, y);

    printf("The result of the value is =>> %.2lf \n", result);

    return 0;
}