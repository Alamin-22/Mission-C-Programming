#include <stdio.h>

int main() {
    int sizeOfNumber;

    printf("Enter the size of Number => ");
    scanf("%d", &sizeOfNumber);
    
    int numbers[sizeOfNumber];
    
    for (int i = 0; i < sizeOfNumber; i++) {
        printf("Enter the value for idx %d => ", i);
        scanf("%d", &numbers[i]);
    }

    int maxNumber = numbers[0];
    int minNumber = numbers[0];

    for (int i = 0; i < sizeOfNumber; i++) {
        int singleNumber = numbers[i];
        if (singleNumber > maxNumber) {
            maxNumber = singleNumber;
        }
        if (singleNumber < minNumber) {
            minNumber = singleNumber;
        }
    }

    printf("Max number is => %d\n", maxNumber);
    printf("Min number is => %d\n", minNumber);

    return 0;
}
