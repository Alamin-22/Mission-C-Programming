#include <stdio.h>

int main()
{
    // while loop first check the condition and then executes the code
    // Do While loop first executes the code and then checks the condition
    int i = 0;
    do
    {
        printf("The value of I is %d \n", i);
        i++;
    } while (i < 4);

    return 0;
}