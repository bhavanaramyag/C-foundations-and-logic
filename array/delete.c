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
        printf("%d ", a[i]); // 1 2 3 4 5
    }
}
int delete(int a[], int b)
{
    int c;
    printf("\nenter the element index you want to delete = ");
    scanf("%d", &c); // 0
    if (c < 0 || c >= b)
    {
        printf("Invalid index!\n");
    }
    for (int i = c; i < b - 1; i++)
    {
        a[i] = a[i + 1];
    }
    b--;
    display(a,b);
    return b;
}
