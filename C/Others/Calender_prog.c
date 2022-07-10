#include <stdio.h>
int startday(int y)
{
    return (y * 365 + y / 4 + y / 400 - y / 100) % 7;
}
int month(int n, int y)
{
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
        return 31;
    if (n == 2)
    {
        return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? 29 : 28;
    }
    else
        return 30;
}
void monthname(int i)
{
    printf("\n-----------------------------------\n\n\t     ");
    switch (i)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    }
}
void main()
{
    int i, k, y, c, j;
    printf("Enter a valid year: ");
    scanf("%d", &y);
    k = startday(y);
    for (i = 1; i <= 12; i++)
    {
        monthname(i);
        c = 1;
        printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        for (j = 0; j < k; j++)
            printf("     ");
        for (; c <= month(i, y);)
        {
            if (c < 10)
                printf("%d    ", c++);
            else
                printf("%d   ", c++);
            if (k++ == 6)
            {
                k = 0;
                printf("\n");
            }
        }
    }
    printf("-----------------------------------");
}