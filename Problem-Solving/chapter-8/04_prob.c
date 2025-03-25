#include <stdio.h>
#include <string.h>

int main()
{
    // basic encryption method
    char str[] = "THis is a secret Message hi";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    printf("%s", str);

    return 0;
}