#include <stdio.h>

float SumCalculator(float, float);

float SumCalculator(float num1, float num2)
{
    return (num1 + num2);
}

float differenceCalculator(float, float);

float differenceCalculator(float num1, float num2)
{
    return (num1 - num2);
}

float divisionCalculator(float, float);

float divisionCalculator(float num1, float num2)
{
    return (num1 / num2);
}

float multiplicationCalculator(float, float);

float multiplicationCalculator(float num1, float num2)
{
    return (num1 * num2);
}

int main()
{
    // Q1: Write a program to take two integers from the user and print their sum, difference, product, and quotient.
    float num1, num2;
    float sum, division, multiplication, difference;

    printf("Enter Number 1 =>> ");
    scanf("%f", &num1);

    printf("Enter Number 2 =>> ");
    scanf("%f", &num2);

    sum = SumCalculator(num1, num2); // <<< here num1 and num2 are known as arguments
    difference = differenceCalculator(num1, num2);
    multiplication = multiplicationCalculator(num1, num2);
    division = divisionCalculator(num1, num2);

    printf("The Result of Sum is => %.2lf \n", sum);
    printf("The Result of difference is => %.2lf \n", difference);
    printf("The Result of multiplication is => %.2lf \n", multiplication);
    printf("The Result of division is => %.2lf \n", division);

    return 0;
}