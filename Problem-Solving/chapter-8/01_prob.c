#include <stdio.h>

int main()
{
    char str[10];
    // printf("Enter your Name \n");
    // scanf("%s", str);
    // printf("This is the provided name => %s \n", str);

    // we are going to solve this using manual method

    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[6] = '\0'; // means null value

    printf("%s", str);

    return 0;
}