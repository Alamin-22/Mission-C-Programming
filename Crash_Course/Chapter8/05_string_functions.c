
#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Al Amin ";
    char lastName[] = "Mollik";
    // this function is used to concatenate two sting means adding one after another this method is known as concatenate
    // Create a new array large enough to store both strings + null terminator
    char newString[50]; // Adjust size based on expected input

    strcpy(newString, firstName); // Copy firstName into newString
    strcat(newString, lastName);  // Concatenate lastName to newString

    printf("%s\n", newString); // Output: "Al Amin Mollik"

    return 0;
}
