#include <stdio.h>
int main()
{
  int day, month, year;
  int monthDays;
  int nextDay, nextMonth, nextYear;
  printf("Enter the day, month and year respectively:\n");
  scanf("%d%d%d", &day, &month, &year);
  if (day > 31 || day <= 0 || month > 12 || month <= 0)
  {
    printf("Please check your input once again! %d/%d/%d is Not a valid date.", day, month, year);
  }
  else if (month == 2)
  {
    if (year % 400 == 0)
    {
      monthDays = 29;
      if (day == monthDays)
      {
        nextDay = 1;
        nextMonth = month + 1;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else if (day < monthDays)
      {
        nextDay = day + 1;
        nextMonth = month;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else
      {
        printf("Please check your input once again! %d/%d/%d is Not a valid date.", day, month, year);
      }
    }
    else if (year % 100 == 0)
    {
      monthDays = 28;
      if (day == monthDays)
      {
        nextDay = 1;
        nextMonth = month + 1;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else if (day < monthDays)
      {
        nextDay = day + 1;
        nextMonth = month;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else
      {
        printf("Please check your input once again! %d/%d/%d is Not a valid date.", day, month, year);
      }
    }
    else if (year % 4 == 0)
    {
      monthDays = 29;
      if (day == monthDays)
      {
        nextDay = 1;
        nextMonth = month + 1;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else if (day < monthDays)
      {
        nextDay = day + 1;
        nextMonth = month;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else
      {
        printf("Please check your input once again! %d/%d/%d is Not a valid date.", day, month, year);
      }
    }
    else
    {
      monthDays = 28;
      if (day == monthDays)
      {
        nextDay = 1;
        nextMonth = month + 1;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else if (day < monthDays)
      {
        nextDay = day + 1;
        nextMonth = month;
        nextYear = year;
        printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
      }
      else
      {
        printf("Please check your input once again! %d/%d/%d is Not a valid date.", day, month, year);
      }
    }
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    monthDays = 30;
    if (day == monthDays)
    {
      nextDay = 1;
      nextMonth = month + 1;
      nextYear = year;
      printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
    }
    else if (day < monthDays)
    {
      nextDay = day + 1;
      nextMonth = month;
      nextYear = year;
      printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
    }
    else
    {
      printf("Please check your input once again! %d/%d/%d is Not a valid date.", day, month, year);
    }
  }
  else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
  {
    monthDays = 31;
    if (day == monthDays)
    {
      nextDay = 1;
      nextMonth = month + 1;
      nextYear = year;
      printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
    }
    else if (day < monthDays)
    {
      nextDay = day + 1;
      nextMonth = month;
      nextYear = year;
      printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
    }
  }
  else
  {
    monthDays = 31;
    if (day == monthDays)
    {
      nextDay = 1;
      nextMonth = 1;
      nextYear = year + 1;
      printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
    }
    else if (day < monthDays)
    {
      nextDay = day + 1;
      nextMonth = month;
      nextYear = year;
      printf("The next day date is %d/%d/%d", nextDay, nextMonth, nextYear);
    }
  }
}