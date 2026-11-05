#include<stdio.h>
void sum(int *a, int *b);
int main()
{
    int a,b;
    printf("enter a number = ");
    scanf("%d", &a);
    printf("enter a number = ");
    scanf("%d", &b);
    sum(&a,&b);
}
void sum(int *a, int *b)
{
    int s = *a + *b;
    printf("the sum = %d", s);
}
