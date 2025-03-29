#include <stdio.h>
#include <string.h>

struct employee
{
    int Number;
    float salary;
    char name[15];
};

int main()
{
    struct employee e1;

    printf("Enter the Name of e1 =>\n");
    scanf("%14s", e1.name); // %14s prevents buffer overflow

    printf("Enter the Number of e1 =>\n");
    scanf("%d", &e1.Number);

    printf("Enter the Salary of e1 =>\n");
    scanf("%f", &e1.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e1.name);
    printf("Number: %d\n", e1.Number);
    printf("Salary: %.2f BDT\n", e1.salary);

    return 0;
}
