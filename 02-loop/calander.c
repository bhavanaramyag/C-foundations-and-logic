#include<stdio.h>
//function to check if the year is leap year or not
int isleapyear(int year)
{
  if((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0))
{
 return 1; //true if leapyear
}
return 0;
}//false if not leapyear
//function to count total days from jan 1st to given date
int countdayofyear(int day, int month, int year)
int days in month[] = { 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };
if (isleapyear(year))
{
 dayinmonth[1] = 29;
}
int totaldays=0;
for (int i = 0; i < month - 1; i++)
{
 totaldays += day;
 return 0;
}
int main()
{
  int day, month, year;
  printf("enter (DD MM YYYY)");
  scanf("%d %d %d", &day, &month, &year);
  if (isleapyear(year))
  {
   printf("%d is a leap year\n", year);
  }
  else
  {
   printf("%d is not a leap year\n", year);
  }
  int dayNumber = countDayOfYear(day, month, year);
  printf("Date %02d/%02d/%d is Day %d of the year.\n", day, month, year, dayNumber);
  return 0;
}
