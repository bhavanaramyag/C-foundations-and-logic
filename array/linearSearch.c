#include<stdio.h>
void read(int a[], int n);
void search(int [], int b);
int main()
{
    int n,b;
    printf("enter the size of array = ");
    scanf("%d", &n);
    int a[n];
    read(a,n);
    search(a,n);
    
}
void read(int a[], int n)
{
    printf("enter the elements of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void search(int a[], int n)
{
    int b;
    int found = 0;
    printf("enter a number you want to find = ");
    scanf("%d", &b);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == b)
        {
            printf("%d is found at %d", b, i);
            found=1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Not found!");
    }
}
