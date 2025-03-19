#include <stdio.h>

int main()
{
    //  this is the example of Decrementing For Loop
    int n;
    printf("Enter the Value of n :  \n");
    scanf("%d", &n);

    for (int i = 10; i; i--)
    {
        printf("%d X %d => ( %d ) \n", n, i, (n * i));
    }

    return 0;
}