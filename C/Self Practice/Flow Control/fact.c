#include <stdio.h>

int main()
{
    int a, i, f = 1;
    printf("Enter a Positive number: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        f *= i;
    }
    printf("%d! = %d", a, f);
    return 0;
}
