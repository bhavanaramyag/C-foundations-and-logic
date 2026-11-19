#include<stdio.h>
int fact(int a);
int main()
{
    int a;
    printf("enter a number = ");
    scanf("%d", &a);
    printf("factorial of %d = %d", a, fact(a));
}
int fact(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }
    return a * fact(a - 1);
}
