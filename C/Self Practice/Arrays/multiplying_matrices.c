#include <stdio.h>
void main()
{
    int r, c, c2, r2;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter First Matrix ...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    r2 = c;
    printf("Enter the number of columns in second Matrix:");
    scanf("%d", &c2);
    int b[r2][c2], mul[r][c2];
    printf("Enter Second matrix...\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nFirst matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("After Multiplying...\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int res = 0;
            for (int z = 0; z < c; z++)
            {
                res += a[i][z] * b[z][j];
            }
            mul[i][j] = res;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}