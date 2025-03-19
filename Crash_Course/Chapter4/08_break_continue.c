#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
        {
            // break;    // exit the Loop now
            continue; // skip the current iteration
        }
        printf("The value of I is %d \n", i);
    }
    printf("For Loop is Done here \n");

    return 0;
}