#include<stdio.h>
int main()
{
 int temp, num;
 long long square;
 int multiplier = 1;
 printf("enter an integer= ");
 scanf("%d", &num);
 square=(long long) num*num;
 temp=num;
 while(temp>0)
 {
  multiplier *= 10;
  temp/=10;
 }
if(square % multiplier == num)
{
 printf("%d is an Automorphic number (Square: %lld)\n", num, square);
}
else
{
 printf("%d is NOT an Automorphic number (Square: %lld)\n", num, square);
}
return 0;
}
