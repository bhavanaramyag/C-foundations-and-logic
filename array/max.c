#include<stdio.h>
void read(int a[], int n);
void max(int [], int n);
int main()
{
    int n;
    printf("enter the size of array = ");
    scanf("%d", &n);
    int a[n];
    read(a,n);
    max(a,n);
}
void read(int a[], int n)
{
    printf("enter the elements of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void max(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the maximum number in array : %d", max);
}

