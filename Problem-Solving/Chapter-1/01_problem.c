#include <stdio.h>
// calculate the area by taking input from user
int main()
{

    int length, width, calculatedArea;

    printf("Enter the Length to Calculate Area => \n");
    scanf("%d", &length);

    printf("Enter the Width to Calculate Area => \n");
    scanf("%d", &width);

    calculatedArea = (length * width);

    printf("The area of your given input is =>>>  %d    \n          ", calculatedArea);

    return 0;
}