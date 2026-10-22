#include<stdio.h>
int evenOdd(int a);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    evenOdd(n);
    return 0;
}
int evenOdd(int a)
{
    if(a%2==0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}
