// Q8) Check whether a number is Even or Odd

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("EVEN Number");
    }
    else
    {
        printf("ODD Number");
    }

    return 0;

}
