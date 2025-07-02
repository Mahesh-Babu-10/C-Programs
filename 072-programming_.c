//Program to print the number day,month,and year for the next day's date
#include <stdio.h>
int main()
{
    int isLeap(int year)
  {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
  }

    int day, month, year;
    int maxDay = 31;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (month == 2)
      {
        if (isLeap(year))
            maxDay = 29;
          else
            maxDay = 28;
      }
           else if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                  maxDay = 30;
                }
                else
                    {
                      maxDay = 31;
                    }

    int orig_day = day;
    int orig_month = month;
    int orig_year = year;


    day++;

    if (day > maxDay)
    {
        day = 1;
        month++;

        if (month > 12)
         {
            month = 1;
            year++;
         }
    }

    printf("Date following %02d:%02d:%d is %02d:%02d:%d\n",
           orig_day, orig_month, orig_year,
           day, month, year);

    return 0;
}
