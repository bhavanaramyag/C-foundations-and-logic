#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int delete(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array : ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    delete(a,b);
    return 0;
}
void read(int a[], int b)
{
    printf("enter the element of the array : ");
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display(int a[], int b)
{
    printf("array : ");
    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}
int delete(int a[], int b)
{
    int c, found;
    printf("\nenter the element delete = ");
    scanf("%d", &c); 
    for(int i = b - 1; i >= 0; i--)
    {
    if(a[i] == c)
    {
        found = 1;
        for(int j = i ; j < b - 1; j++)
        {
            a[j] = a[j + 1];
        }
    b--;
    break;
    }
    }
    if(!found)
    {
        printf("element is not in the array : ");
    }
    display(a,b);
    return b;
}
