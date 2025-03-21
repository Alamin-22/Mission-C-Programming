#include <stdio.h>

// Function now has void return type since it's only printing
void SumAndAvarageCalculatorOF2numbers(int a, int b)
{
    int sum = a + b;
    printf("The sum of %d and %d is %d \n", a, b, sum);

    printf("The address of sum  is %p \n", &sum);
    printf("The value of address of sum  is %d \n", *(&sum));

    float average = (a + b) / 2.0;                      // Ensure floating-point division
    printf("The value of average is %.2f \n", average); // Corrected format specifier

    printf("The address of average  is %p \n", &average);
    printf("The value of address of average  is %f \n", *(&average)); /// keep it in mind we are getting the value of a float so we have to use %f
}

int main()
{
    int a = 10, b = 20;

    SumAndAvarageCalculatorOF2numbers(a, b);

    return 0;
}
