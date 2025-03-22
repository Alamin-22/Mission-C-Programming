#include <stdio.h>

int main()
{

    char sellerName[100];
    double fixedSalary, TotalMadeByHimself, additionalBonus, finalSalary;

    scanf("%s", &sellerName);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &TotalMadeByHimself);

    additionalBonus = (15 * TotalMadeByHimself) / 100.00;

    finalSalary = (fixedSalary + additionalBonus);

    printf("TOTAL = R$ %.2f\n", finalSalary);

    return 0;
}