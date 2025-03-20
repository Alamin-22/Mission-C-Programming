#include <stdio.h>

float CalculatedAvarage(int a, int b, int c); // Fixed return type

float CalculatedAvarage(int a, int b, int c)
{
    return (a + b + c) / 3.0; // Floating-point division
}

int main()
{
    int a = 10, b = 20, c = 30;

    float result = CalculatedAvarage(a, b, c); // Fixed function call

    printf("The Calculated Average is =>> ( %f )  \n", result);

    return 0;
}
