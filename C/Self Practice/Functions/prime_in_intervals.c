#include <stdio.h>

int check(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int snum, lnum, a;
    printf("Enter Starting Number: ");
    scanf("%d", &snum);
    printf("Enter last Number: ");
    scanf("%d", &lnum);
    for (; snum < lnum; snum++)
    {
        if (snum == 1)
        {
            continue;
        }
        else
        {
            a = check(snum);
            if (a == 1)
            {
                printf("%d ", snum);
            }
        }
    }
}