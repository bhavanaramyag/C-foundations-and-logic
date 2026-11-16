#include<stdio.h>
int main()
{
    int rows,columns;
    printf("enter the value of rows = ");
    scanf("%d",&rows);
    printf("enter the value of columns = ");
    scanf("%d", &columns);
    int a[rows][columns];
    printf("Enter the values:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf(" %d ", a[i][j]);
        }
    
                printf("\n");
    }
    return 0;
}
