#include<stdio.h>
#include<math.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int quo(int a, int b);
int rem(int a, int b);
int main()
{
    int num1, num2, sum, s, m, q, r;
    printf("enter 1st number = ");
    scanf("%d",&num1);
    printf("enter 2nd number = ");
    scanf("%d",&num2);
    sum = add(num1, num2);
    s = sub(num1, num2);
    m = mul(num1, num2);
    q = quo(num1, num2);
    r = rem(num1, num2);
    printf("addition=%d\nsubtraction=%d\nmultiplication=%d\ndivision(quotient)=%d\nreminder=%d",sum,s,m,q,r);
    return 0;
}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int quo(int a, int b)
{
    return a/b;
}
int rem(int a, int b)
{
    return a%b;
}
