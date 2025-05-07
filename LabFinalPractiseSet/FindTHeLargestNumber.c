#include <stdio.h>
#include <string.h>

int main()
{
    // Q3: Write a program to find the largest of three numbers using if-else.

    int numbers[3];
    int largestNumber = 0;

    // strLen might not work because , we just declare the variable but dont know the value of it.

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Number for index ( %d )  =>>>  ", i);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        int valueOfIdx = numbers[i];
        if (valueOfIdx > largestNumber)
        {
            largestNumber = valueOfIdx;
        }
    }

    printf("The Largest Number is => ( %d )", largestNumber);

    return 0;
}