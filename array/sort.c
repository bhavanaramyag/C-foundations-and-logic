#include<stdio.h>
void read(int a[], int b);
void sort(int a[], int b);
int main()
{
    int b;
    printf("enter the size of the array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    sort(a,b);
}
void read(int a[], int b)
{
    printf("\nenter elements of array");
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
}
void sort(int a[], int b)
{
    int min = 0, temp, i, j;
    for(i = 0; i < b; i++)
    {
        min = i;
        for(j = i + 1 ; j < b ; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        if(min != i)
            {
                temp = a[min];
                a[min] = a[i];
                a[i] = temp;
            }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < b; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("the first largest element : %d\n", a[b-1]);
    printf("the second largest element : %d", a[b-2]);
}
