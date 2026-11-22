#include<stdio.h>
void readArr(int b, int c, int a[][c]);
void displayArr(int b, int c, int a[][c]);
int main()
{
    int b,c;
    printf("enter no. of rows of an array= ");
    scanf("%d", &b);
    printf("enter no. of columns of an array= ");
    scanf("%d", &c);
    int a[b][c];
    readArr(b, c, a);
    displayArr(b, c, a);
    return 0;
}
void readArr(int b, int c, int a[][c])
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
void displayArr(int b, int c, int a[][c])
{
    printf("array:\n");
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}
