#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    a += b; // Equivalent to a = a + b
    printf("After a += b, a = %d\n", a);

    a -= b; // Equivalent to a = a - b
    printf("After a -= b, a = %d\n", a);

    a *= b; // Equivalent to a = a * b
    printf("After a *= b, a = %d\n", a);

    a /= b; // Equivalent to a = a / b
    printf("After a /= b, a = %d\n", a);

    a %= b; // Equivalent to a = a % b
    printf("After a %%= b, a = %d\n", a);

    a = 6;  // Reset value
    a &= b; // Equivalent to a = a & b
    printf("After a &= b, a = %d\n", a);

    a |= b; // Equivalent to a = a | b
    printf("After a |= b, a = %d\n", a);

    a ^= b; // Equivalent to a = a ^ b
    printf("After a ^= b, a = %d\n", a);

    a = 4;   // Reset value
    a <<= 1; // Equivalent to a = a << 1 (left shift by 1 bit)
    printf("After a <<= 1, a = %d\n", a);

    a >>= 1; // Equivalent to a = a >> 1 (right shift by 1 bit)
    printf("After a >>= 1, a = %d\n", a);

    return 0;
}
