#include<stdio.h>
int main()
{
    int a,b,num1,num2,lcm,gcd;
    printf("enter value one= ");
    scanf("%d",&num1);
    printf("enter value two= ");
    scanf("%d",&num2);
    a=num1;
    b=num2;
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    if(num1 == 0 && num2 == 0)
    {
        lcm=0;
    }
    else
    {
        lcm=(num1 * num2)/gcd;
    }
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
