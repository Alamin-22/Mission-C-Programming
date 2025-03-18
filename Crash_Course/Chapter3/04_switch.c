#include <stdio.h>

int main()
{
    int choice;

    printf("===== MENU =====\n");
    printf("1. Say Hello\n");
    printf("2. Show Today's Date\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // *** keep in mind that inside the If else statement when a statement is true then it automatically retruns the code I mean it stop at that point. But when using Switch case it will not going to be stop if the any statement is find true. It will run all the case condition one after another.

    switch (choice)
    {
    case 1:
        printf("Hello there! 👋\n");
        break;

    case 2:
        printf("Today's date is March 18, 2025 📅\n");
        break;

    case 3:
        printf("Exiting the program. Goodbye! 👋\n");
        break;

    default:
        printf("Invalid choice. Please select between 1 to 3.\n");
    }

    return 0;
}
