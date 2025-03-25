#include <stdio.h>

int main()
{
    char name[20];
    gets(name); // gets is used as sacnf but it takes multiple character within this array. And Scanf only take one character per index

    puts(name); // this is used for line brake without manual \n .
    printf("Hello Testing the Next Line without nthis");

    return 0;
}