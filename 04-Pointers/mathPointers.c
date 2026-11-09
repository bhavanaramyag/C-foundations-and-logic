#include<stdio.h>
void maths(int a, int b, int *sum, int *sub)
{
    *sum = a + b;
    *sub = a - b;
}
int main()
{
    int x,y,sum,sub;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    maths(x,y,&sum,&sub);
    printf("sum = %d\n",sum);
    printf("sub = %d\n",sub);
    return 0;
}
