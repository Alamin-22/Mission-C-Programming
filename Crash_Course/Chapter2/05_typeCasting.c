#include <stdio.h>

int main()
{
    // Type casting means to change the data type of any variable

    int n = 45;
    float m = 32.23;

    n = (int)m;

    printf("The value of typedCasted variable will be an int   =>>> %d", n);

    return 0;
}