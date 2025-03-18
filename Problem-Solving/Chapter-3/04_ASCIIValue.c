#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a Character to check  the ASCII value and  lower case or Upper case  \n ");
    scanf("%c", &ch);

    printf("The Character is   =>  ( %c  )  \n", ch);
    // keep in mind to find out the ASCII value of a character we just need to use %d
    printf("And the ASCII value of the Character is  =>  ( %d ) \n", ch);

    return 0;
}