#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter a number = ");
    scanf("%d", &n);
    while (i <= n) {
        printf("Square of %d = %d\n", i, i * i);
        i++;
    }
    return 0;
}
