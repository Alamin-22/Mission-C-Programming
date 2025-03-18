#include <stdio.h>

int main()
{
    // in C language A non- zero value is considered as a true 
    // and 0 considered as a false

    if (123)
    {
        printf("This is line is true \n ");
    }
    if (12.21354)
    {
        printf("This line is also true because it is non zero \n ");
    }
    if ("c")
    {
        printf("This line is also true because it is non zero and the value is provided => C \n ");
    }
    if (0)
    {
        printf("This line is also true because it is non zero and the value is provided => 0 \n ");
    }
    return 0;
}