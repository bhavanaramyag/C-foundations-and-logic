#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
void sum(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    sum(a,b);
}
void read(int a[], int b)
{
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int b)
{
    printf("array:");
    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}
void sum(int a[], int b)
{
    int *p = a;
    int total = 0;
    for(int i = 0; i < b; i++)
    {
        total += (*(p + i));
    }
    printf("sum = %d", total);
}
