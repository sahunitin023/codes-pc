#include <stdio.h>

int main()
{
    int i = 1, j, A, B = 0, a, b, c;
    printf("Enter Two Numbers to find LCM: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        c = b;
        b = a;
        a = c;
    }

    do
    {
        A = a * i;
        i++;
        for (j = 1; j <= a; j++)
        {
            B = b * j;
            j++;
            if (A == B)
            {
                break;
            }
        }
    } while (A != B);

    printf("LCM: %d", A);
    return 0;
}
