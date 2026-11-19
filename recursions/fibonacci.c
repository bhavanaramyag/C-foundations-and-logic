#include<stdio.h>
int fib(int a);
int main()
{
    int a;
    printf("enter a range =");
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        printf("%d ", fib(i));
    }
}
int fib(int a)
{
     if(a == 0)
     {
         return 0;
     }
     if(a == 1)
     {
         return 1;
     }
     return fib(a - 1) + fib(a - 2);
}
