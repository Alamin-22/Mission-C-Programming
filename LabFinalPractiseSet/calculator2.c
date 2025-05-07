#include <stdio.h>

int main()
{

    int num1, num2;
    char operator;

    printf("Enter number 1 =>  ");
    scanf("%d", &num1);
    printf("Enter number 2 =>  ");
    scanf("%d", &num2);

    printf("Enter Operator ( +, -, *, / ) =>  ");
    scanf(" %c", &operator);

    int result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid Operator \n");
    }

    // if (operator == '+')
    // {
    //     result = (num1 + num2);
    // }
    // else if (operator == '-')
    // {
    //     result = (num1 - num2);
    // }
    // else if (operator == '*')
    // {
    //     result = (num1 * num2);
    // }
    // else if (operator == '/')
    // {
    //     result = (num1 / num2);
    // }
    // else
    // {
    //     printf("Invalid operator! \n");
    //     return 1;
    // }

    printf("You have provided Numer1 is ( %d ) and Number 2 is ( %d ) and the operator is ( %c ) and here is the result =>> (%d)", num1, num2, operator, result);

    return 0;
}