#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    // Taking input for two strings
    printf("Enter first string: ");
    scanf("%s", str1); // Takes single-word input

    printf("Enter second string: ");
    scanf("%s", str2);

    // Using strcmp() to compare
    /*
    returns:
    0 if both strings are equal.

    A negative value if str1 is less than str2.

    A positive value if str1 is greater than str2.

    And it is work using ASCII value
    */
    int result = strcmp(str1, str2);
    printf("%d", result);

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result > 0)
    {
        printf("\"%s\" is greater than \"%s\".\n", str1, str2);
    }
    else
    {
        printf("\"%s\" is less than \"%s\".\n", str1, str2);
    }

    return 0;
}
