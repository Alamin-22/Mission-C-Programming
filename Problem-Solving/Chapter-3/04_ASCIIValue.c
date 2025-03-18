#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a Character to check  the ASCII value and  lower case or Upper case  \n ");
    // also keep it in mind that if we use the type %c i mean character then we can also enter number and that number will be treated as character
    scanf("%c", &ch);

    printf("The Character is   =>  ( %c  )  \n", ch);
    // keep in mind to find out the ASCII value of a character we just need to use %d
    printf("And the ASCII value of the Character is  =>  ( %d ) \n", ch);

    // 97 to 122

    if (ch >= 97 && ch <= 122)
        printf("The given character ( %c ) is LowerCase \n");
    else
        printf("The given character ( %c ) is not Lower Case \n");

    return 0;
}