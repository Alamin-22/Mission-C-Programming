#include <stdio.h>

int main()
{
    int year;

    printf("Enter the Year to check Leap Year  \n");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        printf("This Year =>> ( %d ) is a Leap year \n", year);
    else
        printf("This Year =>> ( %d ) is not a Leap year \n", year);

    return 0;
}