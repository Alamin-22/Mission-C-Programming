#include <stdio.h>

// THe problem is to take a size of an array and then keep taking the inputs until it reach the length Then Take a target Number from the user and  using a search function show the target Number and In which index it is saved.

int SearchFunction(int takenArray[], int sizeOfArray, int targetNumber);

int SearchFunction(int takenArray[], int sizeOfArray, int targetNumber)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        int singleNumer = takenArray[i];
        if (singleNumer == targetNumber)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int sizeOfArray;

    int targetNumber;

    printf("Enter the size of an Array => ");
    scanf("%d", &sizeOfArray);

    int takenArray[sizeOfArray];

    printf("Enter the Target number To Search =>>  ");
    scanf("%d", &targetNumber);

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Enter the value for index ( %d )  =>>>    ", i);
        scanf("%d", &takenArray[i]);
    }

    int TargetIdxFound = SearchFunction(takenArray, sizeOfArray, targetNumber);

    if (TargetIdxFound != -1)
    {
        printf("Your Target Number is Stored in the Index of ( %d ) and the Value of that Idx is => ( %d )", TargetIdxFound, takenArray[TargetIdxFound]);
    }
    else
    {

        printf("The number %d was not found in the array.\n", targetNumber);
    }

    return 0;
}