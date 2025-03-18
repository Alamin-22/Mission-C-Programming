#include <stdio.h>

int main()
{
    int age = 5;

    // Relational Operators ==, >=, <=, >,<, != are called relational Operators
    // in C language A non-zero value is considered as a true

    //  && (and), ||(or) and !(not) are called logical Operator

    // *** keep in mind that inside the If else statement when a statement is true then it automatically retruns the code I mean it stop at that point. But when using Switch case it will not going to be stop if the any statement is find true. It will run all the case condition one after another.

    if (age > 18)
    {
        printf("Congrats You become 18+ now!!!");
    }
    else if (age <= 17 && age > 12)
    {
        printf("you are a Teenager");
    }
    else
    {
        printf("You are just a kid");
    }

    return 0;
}