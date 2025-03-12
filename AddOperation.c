#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("provide the num1 to perfrom Add Operation \n");
    scanf("%d", &num1);

    printf("provide the num2 to perfrom Add Operation \n");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("This is  %d the Result of Sum", sum);

    return 0;
}