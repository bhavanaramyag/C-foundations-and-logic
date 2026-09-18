#include <stdio.h>
int main()
{
    int num, i=2, is_prime = 1;
    printf("enter a number = ");
    scanf("%d", &num);

    while (i <= num / 2) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
        i++;
    }

    if (is_prime && num > 1) {
        printf("%d is a Prime Number.\n", num);
    } else {
        printf("%d is NOT a Prime Number.\n", num);
    }

    return 0;
}
