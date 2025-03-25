#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mollik";

    // printf("This is the length of name array => ( %d ) \n", strlen(name));

    char target[30];
    strcpy(target, name); //  this function is used to copay a string into another string
    printf("This is the value of Name => ( %s ) And  \n This is value of target => ( %s )", name, target);

    return 0;
}