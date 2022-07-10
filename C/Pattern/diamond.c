#include <stdio.h>
void main()
{
    int i, j, n, temp;
    printf("No. of rows for half of the diamond: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        } // space for 1st half
        for (j = 0; j < (i * 2) - 1; j++)
        {
            printf("* ");
        } // stars for 1st half
        printf("\n");
        temp = i - 1;
        if (temp == n - 1)
        { // initiation of the 2nd half
            while (temp != 0)
            {
                for (int j = 0; j < n - temp; j++)
                {
                    printf("  ");
                } // space for 2nd half
                for (int j = 0; j < (temp * 2) - 1; j++)
                {
                    printf("* ");
                } // stars for 2nd half
                printf("\n");
                temp--;
            }
        }
    }
}