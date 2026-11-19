#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
void selectionSort(int a[], int b);
int main()
{
    int b, key;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    selectionSort(a, b);
    printf("sorted array: ");
    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
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
void selectionSort(int a[], int b)
{
    for(int i = 0; i < b - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < b ; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
            if(minIndex != i)
            {
                int temp = a[i];
                a[i] = a[minIndex];
                a[minIndex] = temp;
            }
    }
}
