#include <stdio.h> //NOT OPTIMISED

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            for (int z = 0; z < n; z++)
            {
                if ((i == 1 + z || i == (2 * n - 1) - z || j == 1 + z || j == (2 * n - 1) - z) 
                    && (i >= 1 + z && i <= (2 * n - 1) - z && j >= z + 1 && j <= (2 * n - 1) - z))
                {
                    printf("%d ", n - z);
                }
            }
        }
        printf("\n");
    }
}
