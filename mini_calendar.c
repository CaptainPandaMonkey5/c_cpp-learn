#include <stdio.h>
#include <stdbool.h>

// understanding whether a year is a leap year or not

bool is_leap_year(int year)
{
 if(year % 4 != 0)
 {
  return false;
 }
//year divisible by 4 and not divisible by 100 IS leap

 else if(year % 100 != 0)
 {
  return true;
 }
//year divisible by 400 IS leap

 else if(year % 400 != 0)
 {
  return false;
 }
 else return true;
}

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add)
{

}
/*
int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add)
{
    int days_left_in_month;

while(days_left_to_add > 0)
{
    int days_left_in_month = days_in_month[*mm] - *dd;
    if (*mm == 2 && is_leap_year(*yy) == true)
    {
      days_left_in_month++;
    }
    if (days_left_to_add > days_left_in_month)
    {
        days_left_in_month -= days_left_to_add;
        *dd = 1;
        days_left_to_add--;

        if (*mm != 12)
        {
            *yy = *yy + 1;
        }
        else
        {
            *mm = 1;
            *yy = *yy + 1;
        }
    }
    else
    {
        *dd = *dd + days_left_to_add;
        days_left_to_add = 0;
    }
 }
}
*/

int main()
{
    // checking if function bool is_leap_year() is working
    // ask the user to input a year

    int year;
    printf("Enter Year: ");
    scanf("%i", &year);

    // determining whether the year entered by user is leap year or not using the function bool is_leap_year()

    if (is_leap_year(year) == true) printf("LEAP YEAR\n");
    else printf("NOT LEAP YEAR\n");

    /*
    int *mm;
    int *dd;
    int *yy;
    int days_left_to_add;
    printf("Please enter a date between the years 1800 and 10000 in the format mm-dd-yy and provide the number of days to add to this date: ");
    scanf("%i%i%i%i", &mm, &dd, &yy, &days_left_to_add);
    add_days_to_date(&mm, &dd, &yy, days_left_to_add);
    printf("%i%i%i\n", &mm, &dd, &yy);
    */
}
