#include<stdio.h>
int main()
{
 long long int n;
 int steps=0;
 printf("enter a positive integer= ");
 scanf("%lld", &n);
 printf("collatz conjecture structure steps:\n");
 if(n<=0)
 {
  printf("enter a positive integer greater than 0");
  scanf("%lld",&n);
 }
 while(n!=0)
 {
  if(n%2==0)
  {
    n/=2;
  }
  else
  {
    n=3*n+1;
  }
 printf("-> %lld", n);
 steps++;
 }
return 0;
}
