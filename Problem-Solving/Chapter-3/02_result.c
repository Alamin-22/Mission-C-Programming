#include <stdio.h>

int main()
{
    float math, physics, chemistry;

    printf("Enter the Marks of Math => \n");
    scanf("%f", &math);

    printf("Enter the Marks of Physics => \n");
    scanf("%f", &physics);
    printf("Enter the Marks of chemistry => \n");
    scanf("%f", &chemistry);

    if (math < 33 || physics < 33 || chemistry < 33)
        printf("Your are failed Deu to Individual Marks Shortage!!");
    else if (((math + physics + chemistry) / 3) < 40)
        printf("You are failed due to avarage marks Percentage!!!");
    else
        printf("Congratulations you are passed!!!");

    return 0;
}