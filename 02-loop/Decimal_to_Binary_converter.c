#include<stdio.h>
int main()
{
 long long int bin, rem;
 long long int decimal, tempnum;
 long long int base=1;
 printf("enter a decimal= ");
 scanf("%lld", &decimal);
 if(decimal==0)
 {
  printf("the binary number is equivalent to 0");
 }
 tempnum=decimal;
 while(tempnum>0)
 {
  rem= tempnum%2;
  binary += rem*base;
  tempnum /= 2;
  base *= 10;
 }
printf("the binary number of %lld is %lld", decimal, bin);
return 0;
}
