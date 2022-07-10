#include <stdio.h>

int calculate_the_maximum_and(int n, int k)
{
    int a, max=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            a = i & j;
            if (a < k)
            {
                if (max < a)
                {
                    max = a;
                }
            }
        }
    }
    return max;
}
int calculate_the_maximum_or(int n, int k)
{
    int o, max=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            o = i | j;
            if (o < k)
            {
                if (max < o)
                {
                    max = o;
                }
            }
        }
    }
    return max;
}
int calculate_the_maximum_xor(int n, int k)
{
    int x, max=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            x = i ^ j;
            if (x < k)
            {
                if (max < x)
                {
                    max = x;
                }
            }
        }
    }
    return max;
}
int main()
{
    int n, k, max1, max2, max3;

    scanf("%d %d", &n, &k);
    max1=calculate_the_maximum_and(n, k);
    max2=calculate_the_maximum_or(n, k);
    max3=calculate_the_maximum_xor(n, k);
    printf("%d\n%d\n%d", max1, max2, max3);
    return 0;
}
