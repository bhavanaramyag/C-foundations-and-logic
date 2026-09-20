#include <stdio.h>

int main() {
    int i = 1,n;
    printf("enter a number = ");
  scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0) 
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    
    return 0;
}
