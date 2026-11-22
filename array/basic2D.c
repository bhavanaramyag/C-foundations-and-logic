#include<stdio.h>
void readArr(int a[][], int b, int c);
void displayArr(int a[][], int b, int c);
int main()
{
    int b,c;
    printf("enter no. of rows of an array= ");
    scanf("%d", &b);
    printf("enter no. of rows of an array= ");
    scanf("%d", &c);
    int a[b][c];
    readArr(a, b, c);
    displayArr(a, b, c);
    return 0;
}
void readArr(int a[][], int b, int c)
{
    printf("enter the elements of array:\n");
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void displayArr(int a[], int n)
{
    printf("array:");
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d", &a[i][j]);
        }
    }
}
