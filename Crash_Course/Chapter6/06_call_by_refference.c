#include <stdio.h>

// Function that takes pointers to integers, meaning it modifies the actual values in memory
int SumCalculator(int *a, int *b)
{
    *a = 6;         // Changing the value of a. Since we are using pointers, this change will reflect in main().
    return *a + *b; // Returning the sum of modified 'a' and 'b'
}

int main()
{
    int a = 10;
    int b = 20;

    // Passing the address of variables 'a' and 'b' to the function.
    // This is known as "Call by Reference" because we are passing references (addresses).
    int result = SumCalculator(&a, &b);

    printf("The sum of %d and %d is %d \n", a, b, result);

    // Since 'a' was modified inside the function, its value has changed in main()
    printf("The value of changed a is %d \n", a);

    return 0;
}
