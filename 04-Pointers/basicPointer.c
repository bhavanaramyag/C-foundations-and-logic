#include<stdio.h>
int main()
{
    int num;
    printf("enter a number = ");
    scanf("%d",&num);
    int *ptr = &num;
    printf("memory of address of number = %p\n", &num);
    printf("value stored inside pointer = %p\n", ptr);
    printf("value accessed via pointer = %d\n", *ptr);
    return 0;
}
