#include <stdio.h>

int main()
{
    int a = 4;

    int x = a;   // x = 4 (original value of a)
    int y = ++a; // a becomes 5, y = 5
    int z = a++; // z = 5 (old value), a becomes 6

    printf("%d %d and %d   \n", a, y, x); // Output: 6 5 and 4

    return 0;
}
