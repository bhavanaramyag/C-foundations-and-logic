#include<stdio.h>
int fact(int a);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int a)
{
    int result=1;
    for(int i=1;i<=a;i++)
    {
        result=result*i;
    }
    return result;
}
