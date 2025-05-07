#include <stdio.h>

int g_Counter = 5;

int main()
{

    int incrementNumer;

    printf("Enter The number You want to increment => ");

    scanf("%d", &incrementNumer);

    printf("UpdatedCounter => %d ", (g_Counter + incrementNumer));

    return 0;
}