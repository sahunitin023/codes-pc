#include <stdio.h>

int po(int a, int b)
{
    int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p *= a;
    }
    return p;
}

void main()
{
    int base, exp;
    printf("Enter the Base: ");
    scanf("%d", &base);
    printf("Enter the Exponent: ");
    scanf("%d", &exp);
    printf("Result: %d", po(base, exp));
}
