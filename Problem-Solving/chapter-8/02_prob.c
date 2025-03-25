#include <stdio.h>

// Custom function to find string length
int my_strlen(char str[])
{
    int i = 0;

    // Loop through the string until we reach the null terminator
    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[] = "mollik bhai";

    printf("Length of string: %d\n", my_strlen(str));
    return 0;
}
