#include<stdio.h>
int main()
{
    int x=100;
    int *p1 = &x;
    int *p2 = p1;
    printf("memory of x stored in pointer = %p\n", &x);
    printf("memory of p1 stored in p2 = %p\n", &p1);
    printf("value accessed via pointer 1 = %d", *p1);
    return 0;
}
