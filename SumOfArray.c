#include <stdio.h>

int main()
{

    int array[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a value for %d =>>>    ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}