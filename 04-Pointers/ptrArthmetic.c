#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int main()
{
    int b;
    printf("enter size of array = ");
    scanf("%d",&b);
    int a[b];
    read(a,b);
    display(a,b);
    return 0;
}
void read(int a[], int b)
{
    printf("enter the numbers in array\n");
    for(int i = 0; i < b; i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[], int b)
{
    int *p = a;
    printf("the array:\n");
    for(int i = 0; i < b; i++)
    {
        printf("%d ",*(p + i));
    }
}
