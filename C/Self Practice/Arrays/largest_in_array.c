#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    printf("The largest number in the array : %d\n", a[0]);
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i])
        {
            printf("The index of the largest number: %d", i);
            break;
        }
    }
}