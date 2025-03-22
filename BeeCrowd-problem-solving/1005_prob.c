#include <stdio.h>

int main()
{
    double A, B, AVERAGE;

    scanf("%lf", &A);
    scanf("%lf", &B);

    AVERAGE = ((A * 3.5) + (B * 7.5)) / 11.0;

    printf("MEDIA = %.5lf\n", AVERAGE);

    return 0;
}

/*

### **Correct Weighted Average Formula**
Each grade has a **weight**:
- **A has a weight of 3.5**
- **B has a weight of 7.5**

So, instead of dividing by 2, we divide by the **sum of the weights (3.5 + 7.5 = 11.0).**

*/