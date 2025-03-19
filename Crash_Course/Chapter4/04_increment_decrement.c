#include <stdio.h>

int main()
{

    int i = 5;
    printf("The value of I is %d \n", i);
    i = i + 5;
    printf("The value of I is %d \n", i);

    printf("The value of I is %d \n", i++);

    printf("The value of I is %d \n", ++i);

    /*
    keep it in mind that
    i++ print I first then increments I (known as post increment Operator)
    ++i increment I first then prints I (known as post increment Operator)
    */

    i += 2; // i = i+2
    printf("The value of I is %d \n", i);

    return 0;
}