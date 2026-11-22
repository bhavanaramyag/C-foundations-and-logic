#include<stdio.h>
void readArr(int b, int c, int a[][c]);
void displayArr(int b, int c, int a[][c]);
void addArr(int b, int c, int a[][c], int p[][c], int sum[][c]);
void mulArr(int b, int c, int a[][c], int q, int r, int p[][r], int mul[][r]);
int main()
{
    int b,c;
    printf("enter no. of rows of an array= ");
    scanf("%d", &b);
    printf("enter no. of columns of an array= ");
    scanf("%d", &c);
    int a[b][c];
    int q,r;
    printf("enter no. of rows of second array= ");
    scanf("%d", &q);
    printf("enter no. of columns of second array= ");
    scanf("%d", &r);
    int p[q][r];
    readArr(b, c, a);
    readArr(q, r, p);
    displayArr(b, c, a);
    displayArr(q, r, p);
    if (b == q && c == r) {
        int sum[b][c];
        addArr(b, c, a, p, sum);
        printf("sum of 2 arrays:\n");
        displayArr(b, c, sum);
    } else
    {
        printf("Addition not possible: dimensions do not match.\n");
    }
    if(c == q)
    {
        int mul[b][r];
        mulArr(b, c, a, q, r, p, mul);
        printf("multiplication of 2 arrays:\n");
        displayArr(b, r, mul);
    }
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
void addArr(int b, int c, int a[][c], int p[][c], int sum[][c])
{
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + p[i][j];
        }
    }
}
void mulArr(int b, int c, int a[][c], int q, int r, int p[][r], int mul[][r])
{
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < r; j++)
        {
            mul[i][j] = 0;
            for(int k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * p[k][j];
            }
        }
    }
}
