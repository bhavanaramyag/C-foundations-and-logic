#include<stdio.h>
int power(int a, int b);
int main()
{
	int a, b;
	printf("enter base number = ");
	scanf("%d", &a);
	printf("enter exponent number = ");
        scanf("%d", &b);
	printf("%d^%d = %d", a, b, power(a,b));
	return 0;
}
int power(int a, int b)
{
	if(b == 1)
	{
		return a;
	}
        return a * power(a , b - 1);
}
