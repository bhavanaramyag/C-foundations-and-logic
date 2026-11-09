#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
void reverse(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a, b);
    reverse(a, b);
    display(a, b);
}
void read(int a[], int b)
{
    printf("enter the elements of array:\n");
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
void reverse(int a[], int b)
{
    int start = 0;
    int end = b - 1;
    while(start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
