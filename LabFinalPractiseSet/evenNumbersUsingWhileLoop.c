#include <stdio.h>

// Q5: Print all even numbers from 1 to n using a while loop.
int main()
{
    // as we know while loop first check the condition then execute.
    int n;
    int initialVale = 0;

    printf("Enter the Value of how many time you want to check  =>> ");
    scanf("%d", &n);

    while (!(initialVale <= n) && !(initialVale % 2 == 0))
    {
        printf("This is the Even Number => %d  \n", initialVale);
        initialVale++;
    }

    return 0;
}