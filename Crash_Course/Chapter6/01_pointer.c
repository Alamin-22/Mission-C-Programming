#include <stdio.h>

int main()
{

    int i = 72;

    int *j = &i;

    //  keep it in mind that to show an address of a variable we have to use & sign before the variable name
    // it is also known as address( & ) of operator.
    printf("The value of i is %p \n", &i); // here % p indicate the address of the variable of i. It is called pointer.

    printf("The value of i is %u \n", j); // we can also use %u to print the address of the variable of i but it is not recommended and it is for just integer value.

    // to show the value of a address we have to use * sign before the variable address.

    printf("The value of i is %d \n", *j);    // here * indicate the value of the address of the variable of i.
    printf("The value of i is %d \n", *(&i)); // we can also directly access the value of any address

    return 0;
}