#include <stdio.h>

int main()
{
    int a = 10;
    // we can write if else like this too
    if (a = 11) // => as you noticed that inside the if condition there is only single = means it is not (==) it is variable assign sign. and on the current line it becomes a non zero value  and it becomes true so the out put is I am 11
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}