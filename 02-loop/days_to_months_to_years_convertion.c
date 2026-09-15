#include<stdio.h>
#include<math.h>
int main()
{
  int total_days, years, weeks, days;
  printf("enter total number of days");
  scanf("%d", &total_days);
  years = total_days / 365;
  weeks = (total_days % 365) / 7;
  days = (total_days % 365) % 7;

printf("%d days =\n%d years\n%d weeks\n%d days\n", total_days, years, weeks, days);
}
