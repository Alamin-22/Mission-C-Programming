#include <stdio.h>

void printArray(int arr[], int n);

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int n);

void reverseArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    printArray(arr, 6);

    reverseArray(arr, 6);

    printArray(arr, 6);

    return 0;
}