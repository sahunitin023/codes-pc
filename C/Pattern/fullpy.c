#include <stdio.h>
void main()
{
    int i, j, n ;
    printf("No. of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)    //for rows
    {
        for (j = 0; j < n - i; j++)   //for gaps
        {
            printf("  ");
        }
        for (j = 0; j < (i * 2) - 1; j++) // for stars
        {
            printf("* ");
        }
        printf("\n");
    }
}