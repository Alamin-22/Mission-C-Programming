#include <stdio.h>

int main()
{

    char name[20];

    printf("Enter your name below \n");
    // but the issue is it will brake for space . so input must be provide without any space
    scanf("%s", name); // keep it in mind that we dont need to use & for address here. array itself take its address so we just need to pass the variable of that array and it will handle it automaticaly
    printf("Your Provided Name is => (%s) \n", name);

    return 0;
}