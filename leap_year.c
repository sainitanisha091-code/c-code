#include <stdio.h>
int is_leap_year(int year)
{
    if (year%400==0 ||(year%4==0 && year%100!= 0)){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int year;
    scanf("%d", &year);
    if (is_leap_year(year))
    {
        printf("% d is a leap year", year);
    }
    else
    {
        printf("% d is not leap year", year);
    }
}