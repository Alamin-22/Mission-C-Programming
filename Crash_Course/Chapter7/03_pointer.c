#include <stdio.h>

int main()
{
    // int a = 5;
    // int *ptr = &a;

    // printf("The address of a is %u\n", &a);
    // printf("The address of ptr is %u\n", ptr);
    // ptr++; // it is going to increment by the current bytes it takes for the variable declaration
    // printf("The address of ptr after increment is %u\n", ptr);

    char a = 'A';
    char *ptr = &a;

    printf("The address of a is %u\n", &a);
    printf("The address of ptr is %u\n", ptr);
    // in this case it is increment by 1 because character takes 1 bytes
    ptr++; // it is going to increment by the current bytes it takes for the variable declaration
    printf("The address of ptr after increment is %u\n", ptr);

    return 0;
}