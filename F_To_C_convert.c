#include <stdio.h>

int main()
{

    float F, CalculatedC;

    printf("Enter the F to convert into C =>> \n ");

    scanf("%f", &F);

    CalculatedC = (5.0 / 9.0) * (F - 32);

    printf("Your Calculated C is => %.2f \n ", CalculatedC);

    return 0;
}