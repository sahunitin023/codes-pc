#include <stdio.h>

int main()
{
    int i, a, b, c = 1;
    printf("Enter Two Numbers to find LCM: ");
    scanf("%d %d", &a, &b);
    for (i = 2; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            a = a / i;
            b = b / i;
            c = c * i;
            i--;
        }
    }
    printf("LCM: %d", c*a*b);
    return 0;
}

