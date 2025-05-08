#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Need at least 2 numbers to find second max and min.\n");
        return 0;
    }

    int numbers[size];

    // Taking input
    for (int i = 0; i < size; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &numbers[i]);
    }

    // Assume first two numbers for comparison
    int max = numbers[0], secondMax = numbers[1];
    int min = numbers[0], secondMin = numbers[1];

    // Swap if needed
    if (secondMax > max) {
        int temp = max;
        max = secondMax;
        secondMax = temp;
    }
    if (secondMin < min) {
        int temp = min;
        min = secondMin;
        secondMin = temp;
    }

    // Start from index 2 (since 0 and 1 already used)
    for (int i = 2; i < size; i++) {
        int num = numbers[i];

        // Check for max
        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax && num != max) {
            secondMax = num;
        }

        // Check for min
        if (num < min) {
            secondMin = min;
            min = num;
        } else if (num < secondMin && num != min) {
            secondMin = num;
        }
    }

    // Final result
    printf("Maximum number is: %d\n", max);
    printf("Second maximum number is: %d\n", secondMax);

    printf("Minimum number is: %d\n", min);
    printf("Second minimum number is: %d\n", secondMin);

    return 0;
}
