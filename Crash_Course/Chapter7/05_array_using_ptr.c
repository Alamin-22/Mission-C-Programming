#include <stdio.h>

int main()
{
    int marks[4] = {17, 18, 17, 9};
    int *ptr = &marks[0]; // accessing the first address of 0 index

    int *ptr2 = marks; // this line and the above line will provide the same result. We can use this as shorthand trick

    printf("This is the address using typical rule %u \n", ptr);
    printf("This is the address using shortHand rule %u \n", ptr2);

    return 0;
}