#include <stdio.h>

// Write a program that takes marks (0–100) from the user and prints the grade based on the following rules:
int main()
{

    int marks;

    printf("Provide Your mark to calculate the Grade => \n ");

    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 90)
        {
            printf("Grade: => A+ \n ");
        }
        else if (marks >= 80)
        {
            printf("Grade: => A \n ");
        }
        else if (marks >= 70)
        {
            printf("Grade: => B \n ");
        }
        else if (marks >= 60)
        {
            printf("Grade: => C \n ");
        }
        else if (marks >= 50)
        {
            printf("Grade: => D \n ");
        }
        else
        {
            printf("Grade: => F \n ");
        }
    }
    else
    {
        printf("Invalid Input \n ");
    }

    return 0;
}