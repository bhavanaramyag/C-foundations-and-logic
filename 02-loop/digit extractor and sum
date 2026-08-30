#include<stdio.h>
int main()
{
   int num, originalnum, sum=0, reminder;
   printf("enter an integer= ");
   scanf("%d", &num);
   originalnum=num;
   printf("\tstep by step process\t");
   while(originalnum>0)
   {
       reminder=originalnum%10;
       sum+=reminder;
       originalnum/=10;
       printf("\nthe extracted number=%d\nthe current sum=%d", reminder,sum);
   }
   printf("the sum of %d is %d",num,sum);
   return 0;
}
