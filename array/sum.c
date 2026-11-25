#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
void sum(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array : ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    sum(a,b);
    return 0;
}
void read(int a[], int b)
{
    printf("enter the element of the array : ");
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int b)
{
    printf("array : ");
    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}
void sum(int a[], int b)
{
    int sum = 0;
    printf("\nsum of elements in array:\n");
    for(int i = 0; i < b; i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);
}
