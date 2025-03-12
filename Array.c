#include <stdio.h>

// Let’s take input for 5 numbers and print them:

int main()
{

    int i;
    int marks[5];

    // taking Dynamic input for % items in the array

    for (i = 1; i <= 5; i++)
    {
        printf("Provide The Input For Item %d =>  \n  ", i); // using i+1 because on the array it always start counting from 0
        scanf("%d", &marks[i]);
    }

    // Rendering those taken 5 item using for loop

    for (i = 1; i <= 5; i++)
    {
        printf("Here is the value if Item %d ==> %d   \n  ", i, marks[i]);
    }

    return 0;
}