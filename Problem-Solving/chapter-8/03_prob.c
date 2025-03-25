#include <stdio.h>

char *customSlice(char str[], int m, int n)
{
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';

    return str;
}

int main()
{
    char str[] = "Mollik Bhai";

    printf("%s", customSlice(str, 0, 6));
    return 0;
}