#include <stdio.h>

int main()
{

    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for index => %d  =>>  ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Here is  the value for index => %d is => ( %d )    \n", i, marks[i]);
    }

    return 0;
}