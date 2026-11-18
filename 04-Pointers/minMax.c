#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
void minMax(int a[], int b);
int main()
{
    int b;
    printf("enter the size of the array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    minMax(a,b);
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
void minMax(int a[], int b)
{
    int *p = a;
    int max = *p;
    int min = *p;
    for(int i = 1; i < b; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
        if(*(p + i) < min)
        {
            min = *(p + i);
        }
    }

    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
}
