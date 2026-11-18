#include<stdio.h>
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    int *p = &n;
    *p = *p + n;
    printf("value of n = %d\n", *p);
    return 0;
}
