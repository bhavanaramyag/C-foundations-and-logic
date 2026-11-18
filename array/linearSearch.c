#include<stdio.h>
void read(int a[], int b);
void display(int a[], int b);
int linearSearch(int a[], int b, int key);
int main()
{
    int b, key;
    printf("enter the size of array = ");
    scanf("%d", &b);
    int a[b];
    read(a,b);
    display(a,b);
    printf("enter the element you want to search = ");
    scanf("%d", &key);
    int result = linearSearch(a,b,key);
    if(result == -1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at %d",result);
    }
    return 0;
}
void read(int a[], int b)
{
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
int linearSearch(int a[], int b, int key)
{
    for(int i = 0; i < b; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
        return -1;
}
