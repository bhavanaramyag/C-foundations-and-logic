#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int bubbleSort(int a[], int b);
void minMax(int a[], int b);
int main()
{
    int b, key;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    bubbleSort(a, b);
    return 0;
}
void read(int a[], int b)
{
    printf("enter array elements:");
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
int bubbleSort(int a[], int b)
{
    int temp, swapped = 0;
    for(int i = 0;i < b - 1;i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
               temp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = temp;
               swapped = 1;
            }
        }
        if(swapped == 0)
        break;
    }
    printf("maximum : %d ", a[b - 1]);
    printf("\nsecond maximum : %d", a[b - 2]);
}
