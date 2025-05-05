#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char copyOfName[20];

    printf("Enter Your Name to CHeck for PalinDrome =>>>> ");
    scanf("%s", name);
    //  while using str cpy to copy, first we need to pass the initiate variable and then we have to pass the actual variable
    strcpy(copyOfName, name);

    printf("Here is the Original Value => %s \n", name);
    printf("Here is the Copy Value => %s \n", copyOfName);

    return 0;
}