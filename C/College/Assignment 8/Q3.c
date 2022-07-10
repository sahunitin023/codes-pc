#include <stdio.h>
void inp(int r,int c,int a[r][c])
{
    printf("Enter a Matrix ...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int main()
{
    int r, c, c2, r2;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    inp(r,c,a);
    r2 = c;
    printf("Enter the number of columns in second Matrix:");
    scanf("%d", &c2);
    int b[r2][c2], mul[r][c2];
    inp(r2,c2,b);
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
    printf("After Multiplying....\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}