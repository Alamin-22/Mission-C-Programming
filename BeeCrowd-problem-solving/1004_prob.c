#include <stdio.h>

/*

Problem -- 1004


Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.

Input
The input file contains 2 integer numbers.

Output
Print the message "PROD" and PROD according to the following example, with a blank space before and after the equal signal.

*/

int main()
{
    int value1, value2, PROD;

    scanf("%d %d", &value1, &value2);

    PROD = (value1 * value2);

    printf("PROD = %d\n", PROD);

    return 0;
}