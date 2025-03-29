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
    struct employee e1, e2;

    strcpy(e1.name, "Mr. Mollik");
    e1.Number = 881230;
    e1.salary = 15000;

    printf("Name: %s\n", e1.name);
    printf("Number: %d\n", e1.Number);
    printf("Salary: %.2f\n", e1.salary);

    return 0;
}
