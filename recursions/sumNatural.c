#include<stdio.h>
int sumNatural(int a);
int main()
{
    int a;
    printf("enter a range = ");
    scanf("%d");
    printf("sum of %d natural number = %d", a, sumNatural(a));
    return 0;
}
int sumNatural(int a)
{
    if(a <= 0)
    {
       return 0;
    }
    return a + sumNatural(a - 1);
}
