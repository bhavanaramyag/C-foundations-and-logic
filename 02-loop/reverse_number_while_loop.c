#include<stdio.h>
int main()
{
  int n,num,rev = 0,rem;
  printf("enter a number = ");
  scanf("%d", &num);
  num = n;
  while(n>0)
  {
     rem = n % 10;
     rev = 10 * rev + rem;
     n = n / 10;
  }
printf("the reverse number of %d is %d", num, rev);
return 0;
}
