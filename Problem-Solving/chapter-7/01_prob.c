#include <stdio.h>

int main()
{
    int TestArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // both ptr are same in the result
    int *ptr = &TestArray[0]; //
    int *ptr2 = TestArray;

    printf("The address of first index is  %u \n", ptr2);
    printf("The value of this first index address %u \n", *ptr2 + 3);
    printf("The address of first index is %u \n", ptr2 + 3);
    printf("The address of first index is %u \n", (&ptr2 + 3));

    return 0;
}