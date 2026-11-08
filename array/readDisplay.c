#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array = ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array:");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
