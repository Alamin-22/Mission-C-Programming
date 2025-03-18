#include <stdio.h>

int main()
{

    int a = 4, b = 8, c = 15, d = 25;

    if (a > b && a > c && a > d)
        printf("A is the greatest Number among a,b,c,d  \n");
    if (b > c && b > d && b > a)
        printf("b is the greatest Number among a,b,c,d  \n");
    if (c > a && c > b && c > d)
        printf("c is the greatest Number among a,b,c,d  \n");
    if (d > a && d > b && d > c)
        printf("d is the greatest Number among a,b,c,d  \n");

    return 0;
}