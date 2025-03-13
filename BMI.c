#include <stdio.h>

int main()
{

    float Height, Weight, BMI;

    printf("Enter your Height to calculate BMI => \n");
    scanf("%f", &Height);
    printf("Enter your Weight to calculate BMI => \n ");
    scanf("%f", &Weight);

    BMI = Weight / (Height * Height);

    printf("Your BMI is =>  %f  \n ", BMI);

    if (BMI < 18.5)
    {
        printf("Your are Under Weight \n");
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("You have a Normal Weight \n ");
    }
    else if (BMI >= 25 && BMI < 29.9)
    {
        printf("Your are Over weight \n ");
    }
    else
    {
        printf("Bhai tui moira jabi \n");
    }

    return 0;
}