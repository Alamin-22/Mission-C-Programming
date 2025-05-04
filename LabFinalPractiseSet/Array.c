#include <stdio.h>

int main()
{
    int bdPhoneNumber[11];

    for (int i = 0; i < 11; i++)
    {

        printf("Enter the ( %d ) Digit Of Your number  =>   ", i + 1);
        scanf("%d", &bdPhoneNumber[i]);
    };

    // here is the output

    printf("Here is Your Number  =>    \n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d", bdPhoneNumber[i]);
    };

    return 0;
}