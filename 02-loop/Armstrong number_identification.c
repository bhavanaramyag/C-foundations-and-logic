//armstrong number is a number which is equal to the sum of its own digit, with each digit raised to the power of the total digits
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder;
    int digits = 0;
    double result = 0.0;

    printf("enter a number= ");
    scanf("%d", &num);

    // Step 1: Count number of digits using a temporary copy
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        digits++;
    }

    // Step 2: Compute the Armstrong sum
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Step 3: Compare result with the original number
    if ((int)result == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is NOT an Armstrong number\n", num);
    }

    return 0;
}
