#include <stdio.h>

int main()
{

    float C, CalculatedF;

    printf("Enter the celsius to convert into F \n =>>>    ");

    scanf("%f", &C);

    CalculatedF = (C * (9.0 / 5.0)) + 32;

    printf("Your Calculated F is =>> %f  ", CalculatedF);

    return 0;
}