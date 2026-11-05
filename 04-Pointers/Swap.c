#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int n1, n2;
    printf("enter a number = ");
    scanf("%d", &n1);
    printf("enter another number = ");
    scanf("%d", &n2);
    printf("before swap : %d %d", n1, n2);
    swap(&n1, &n2);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nAfter swap : %d %d",*a,*b);
}
