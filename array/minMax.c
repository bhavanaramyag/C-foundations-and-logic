#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int max(int a[], int b);
int min(int [], int b);
int main()
{
    int b;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    printf("\nthe maximum : %d", max(a,b));
    printf("\nthe minimum : %d", min(a,b));
    return 0;
}
void read(int a[], int b)
{
    printf("enter the elements : ");
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
int max(int a[], int b)
{
    int max = a[0];
    for(int i = 0; i < b; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int min(int a[], int b)
{
    int min = a[0];
    for(int i = 0; i < b; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
