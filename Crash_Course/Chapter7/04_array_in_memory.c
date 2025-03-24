#include <stdio.h>

int main()
{

    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for %d index \n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    // on the output you can notice that the address value is increasing by 4. It means it takes 4 bites mean 1 byte for store in the memory.
    // it is also known as contiguous blocks in memory
    {
        printf("The value of %d index is => %d and the address of the value is %u \n", i, marks[i], &marks[i]);
    }

    return 0;
}