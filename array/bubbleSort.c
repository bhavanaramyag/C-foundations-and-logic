#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int bubbleSort(int a[], int b);
int main()
{
    int b, key;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    bubbleSort(a, b);
    printf("Sorted array (Bubble Sort): ");
    for(int i = 0; i < b; i++)
        {
            printf("%d ", a[i]);
        }
    printf("\n");
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
int bubbleSort(int a[], int b)
{
    int temp=0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; i < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
