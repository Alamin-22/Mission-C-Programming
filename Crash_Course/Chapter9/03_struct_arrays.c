#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main()
{
    struct employee facebook[100];
    {
        facebook[0].code = 1020;
        facebook[0].salary = 10200;
        facebook[1].code = 1120;
        facebook[1].salary = 11200;

        struct employee Mollik = {22, 15000, "mollik"};

        printf("%d %.2f %s \n", Mollik.code, Mollik.salary, Mollik.name);
    };

    return 0;
}