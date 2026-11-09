#include<stdio.h>
int main()
{
    int a, rem, temp, sum = 0, fact;
    printf("enter a number = ");
    scanf("%d", &a);
    temp = a;
    while(temp > 0)
    {
        fact = 1;
        rem = temp % 10;
        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
            sum = sum + fact;
            temp = temp / 10;
    }
    if(sum == a)
    {
        printf("\n%d is a strong number.", a);
    }
    else
    {
        printf("\n%d is not a strong number", a);
    }
    
}
