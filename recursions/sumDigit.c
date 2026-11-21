#include<stdio.h>
int sumDigit(int a);
int main()
{
    int a;
    printf("enter value of 'a' = ");
    scanf("%d", &a);
    printf("sum of digits of %d is %d", a, sumDigit(a));
    return 0;
}
int sumDigit(int a)
{
    if(a==0)
    {
        return 0;
    }
    return (a % 10) + sumDigit(a/10);
}
