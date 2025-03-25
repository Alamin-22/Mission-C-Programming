#include <stdio.h>

int main()
{
    // here \0 is known as null character it tells the Array that string has reached its limit
    char str[] = {'a', 'l', 'a', 'm', 'i', 'n', '\0'};
    char str2[] = "alamin"; // by using "" null character automatically set into it .

    // both str and str2 are same in the output

    printf("First Character is \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
    printf("First Character is %s \n", str2);

    /*
    with the help of %s format specifier we can directly get the output of any string without writing extra for loop etc code but for this we have to use "" while declareing the string like str2

    */

    return 0;
}