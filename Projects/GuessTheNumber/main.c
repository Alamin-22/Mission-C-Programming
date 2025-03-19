#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number_of_guesses = 0, guessed;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int Random_number = rand() % 100 + 1;

    do
    {
        printf("Guess the number Between 1 to 100: ");
        scanf("%d", &guessed); // Read the guessed number

        if (guessed > Random_number)
        {
            printf("Lower number please \n");
        }
        else if (guessed < Random_number)
        {
            printf("Higher number please \n");
        }

        number_of_guesses++; // Increment guess count

    } while (guessed != Random_number); // Repeat until the correct number is guessed

    printf("Congratulations! You guessed the number in %d attempts.\n", number_of_guesses);

    return 0;
}
