#include <stdio.h>

int main()
{
    // // we have to use For Loop when we know how many times we have to repeat this code .
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The numer is => ( %d ) \n", (i + 1));
    // }

    /*
    While Loop =>
    We have to use While loop when we dont know how many times to run this code,  it will keep checking until the condition is satisfied. But we can provide a Default value too as a fall back

    While Loop is working like a If else Condition , It will go further only when the condition is true.
    */

    // int number;

    // printf("Enter Number as you want => ");
    // scanf("%d", &number);

    // while (number != 0)
    // {

    //     printf("You have Provide  ( %d ) which is not 0  So Provide the Next Number \n", number);
    //     scanf("%d", &number);
    // }
    // // once the While loop is started it will always keep checking for the truthy value untile it will running and dont go further. This is the reason We dont need to check on the If condition to show User has entered the value 0
    // printf("You Have Entered 0 so Function stops");

    // *************** I am solving the same Previous problem using Do While Loop***********

    int number;

    do
    {
        printf("Enter Number as you want  =>  ");
        scanf("%d", &number);

        if (number != 0)
        {
            printf("You Have Entered ( %d ) Try Again. ", number);
        }
    } while (number != 0);

    printf("You Have Entered 0 so Function stops");

    return 0;
}