#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int insert(int a[], int b);
int main()
{
    int b;
    printf("enter the size of array : ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    insert(a,b);
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
int insert(int a[], int b)
{
    int c;
    printf("\nenter the element index you want to insert = ");
    scanf("%d", &c); // 0
    int d;
    printf("enter the element number you want to insert with = ");
    scanf("%d", &d); // 6
    if (c < 0 || c > b)
    {
        printf("Invalid index!\n");
    }
    b++;
    for(int i = b - 1; i < c; i--)
    {
        a[i] = a[i - 1];
    }
    a[c] = d;
    display(a,b);
    return b;
}
