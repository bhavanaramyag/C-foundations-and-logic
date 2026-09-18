#include<stdio.h>
int main()
{
 int binary, rem, decimal, tempnum, base=1;
 printf("enter a decimal= ");
 scanf("%d", &decimal);
 if(decimal==0)
 {
  printf("the binary number is equivalent to 0");
 }
 tempnum=decimal;
 while(tempnum>0)
 {
  rem= tempnum%2;
  binary += rem * base;
  tempnum /= 2;
  base *= 10;
 }
printf("the binary number of %d is %d", decimal, binary);
return 0;
}

