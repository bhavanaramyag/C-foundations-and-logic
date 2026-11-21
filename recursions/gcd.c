#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b;
    printf("enter value of 'a' = ");
    scanf("%d", &a);
    printf("enter value of 'b' = ");
    scanf("%d", &b);
    printf("gcd of %d and %d is %d", a,b,gcd(a,b));
    return 0;
}
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a % b);
}
