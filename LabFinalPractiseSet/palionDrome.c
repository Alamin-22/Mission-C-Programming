#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    //  we can not use boolean function without using the stdbool.h libray
    // bool isPalinDrome= false;

    int isPalinDrome = 1; // means it is false.

    printf("Enter Your Name to CHeck for PalinDrome =>>>> ");
    scanf("%s", name);
    int lengthOfName = strlen(name);
    // now we have to check first index === last index if and similarly 2nd idx == second last idx and soo on.
    for (int i = 0; i < lengthOfName; i++)
    {
        if (name[i] != name[lengthOfName - 1 - i])
        {
            isPalinDrome = 0;
            break;
        }
    }

    if (isPalinDrome)
    {
        printf("Your String is  a PalinDrome=>  %s \n", name);
    }
    else
    {
        printf("Your String is not  a PalinDrome=>  %s \n", name);
    }

    return 0;
}