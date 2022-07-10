#include <stdio.h>
int match(int a)
{
    switch (a)
    {
    case 0:
        return 6;
        break;
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;
    }
}

int main()
{
    int n, sum = 0, a;
    scanf("%d", &n);
    int m[n], arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        m[i] = 0;
        sum = arr[i * 2] + arr[i * 2 + 1];
        do
        {
            a = sum % 10;
            m[i] += match(a);
            sum /= 10;
        } while (sum != 0);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", m[i]);
    }

    return 0;
}