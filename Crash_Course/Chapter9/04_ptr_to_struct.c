#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main()
{
    struct employee e1;
    e1.code = 22;
    struct employee *ptr;
    ptr = &e1;

    printf("%d \n", (*ptr).code);
    printf("%d \n", ptr->code); // both are same

    return 0;
}