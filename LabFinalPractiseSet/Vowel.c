#include <stdio.h>
#include <string.h>

int main()
{
    char userName[50];
    char vowelsWeGot[50];
    int vowelIdx = 0;
    int consonantIdx = 0;

    printf("Enter Your Name => ");
    scanf("%s", &userName);

    for (int i = 0; i < strlen(userName); i++)
    {
        char ch = userName[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o' ||
            ch == 'A' || ch == 'E' || ch == 'E' || ch == 'U' || ch == 'O')
        {
            vowelsWeGot[vowelIdx] = ch;
            vowelIdx++;
        }
        else
        {
            consonantIdx++;
        }
    }

    vowelsWeGot[vowelIdx] = '\0';

    printf("These are the vowels we found from your Provided Name \n");
    for (int i = 0; i < vowelIdx; i++)
    {
        printf("%c \n", vowelsWeGot[i]);
    }

    printf("Total Vowels Found => ( %d ) \n", vowelIdx);
    printf("Total Consonant Found => ( %d ) \n", consonantIdx);
    return 0;
}