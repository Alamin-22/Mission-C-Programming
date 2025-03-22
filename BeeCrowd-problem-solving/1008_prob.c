#include <stdio.h>

int main()
{
    int employeesNumber, workedHours;
    float paidPerHour, PaymentPerMonth;

    scanf("%d", &employeesNumber);
    scanf("%d", &workedHours);
    scanf("%f", &paidPerHour);

    PaymentPerMonth = workedHours * paidPerHour;

    printf("NUMBER = %d\n", employeesNumber);
    printf("SALARY = U$ %.2f\n", PaymentPerMonth);

    return 0;
}
