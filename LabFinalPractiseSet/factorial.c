#include <stdio.h>

int factorialCalculator(int);

int factorialCalculator(int number)
{

    int result = 1;

    // factorial means 7! => 7*6*5*4*3*2*1

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    return result;
};

int main()
{

    int number;

    printf("Enter the Number to calculate Factorial   =>>  ");
    scanf("%d", &number);

    int resultOfFactorial = factorialCalculator(number);

    printf("Here is the Result of Factorial =>   %d ", resultOfFactorial);

    return 0;
}