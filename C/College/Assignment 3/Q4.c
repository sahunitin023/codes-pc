// Q4) Check whether a year is Leap year or not.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        printf("It's a LEAP YEAR");
    }
    else
    {
        printf("COMMON YEAR");
    }

    return 0;
}