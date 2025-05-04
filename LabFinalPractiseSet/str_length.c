#include <stdio.h>
#include <string.h>

int main()
{
    char DB_Email[] = "mr.mollik@email.com";
    char DB_Pass[] = "mollik@admin.com";

    int LengthOfEmail = strlen(DB_Email);

    printf("The Length of Email is =>  %d ", LengthOfEmail);

    return 0;
}