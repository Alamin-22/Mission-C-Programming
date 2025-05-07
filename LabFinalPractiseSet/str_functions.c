#include <stdio.h>
#include <string.h>

int main()
{
    char Db_Email[] = "rohim@mia.com";
    char email[] = "kuddus@ali.com";
    char newVariable[50];

    char firstName[20] = "mr. Kuddus ";
    char lastname[20] = "Ali";

    // copied the value of email variable into newVariable
    strcpy(newVariable, email);

    int lengthOfEmail = strlen(email);

    // char fullName[50] = strcat(firstName, lastname);
    // if it matched it will retrun 0
    int isEmailMatched = strcmp(email, Db_Email);

    printf("This is the value of newVariable =>  %s   \n", newVariable);
    printf("This is the length of Email =>  %d \n", lengthOfEmail);
    printf("This is the full name after concatenate =>  %s \n", strcat(firstName, lastname));
    printf("This is the value of isEmailMatched =>  %d \n", isEmailMatched);

    return 0;
}