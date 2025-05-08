#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    //  we can not use boolean function without using the stdbool.h libray
    // bool isPalinDrome= false;

    int isPalinDrome = 1; // means it is true.

    printf("Enter Your Name to CHeck for PalinDrome =>>>> ");
    scanf("%s", name);
    int lengthOfName = strlen(name);
    // now we have to check first index === last index if and similarly 2nd idx == second last idx and soo on.
    /*

     m   a   d   a   m
    [0] [1] [2] [3] [4]

    | `i` | `name[i]` | `name[lengthOfName - 1 - i]` | Comparison      |
    | --- | --------- | ---------------------------- | --------------  |
    | 0   | `'m'`     | `name[5 - 1 - 0] = name[4]`  | `'m' == 'm'` ✅ |
    | 1   | `'a'`     | `name[5 - 1 - 1] = name[3]`  | `'a' == 'a'` ✅ |
    | 2   | `'d'`     | `name[5 - 1 - 2] = name[2]`  | `'d' == 'd'` ✅ |



    */
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