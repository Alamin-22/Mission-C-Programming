#include <stdio.h>

float c2f(float c);

float c2f(float c)
{

    return ((c * 9) / 5) + 32;
}

int main()
{

    float c;

    printf("Enter the temperature in Celsius to convert to Fahrenheit =>> \n");

    scanf("%f", &c);

    float result = c2f(c);

    printf("The temperature in Fahrenheit is => ( %.2f )  \n", result);

    return 0;
}