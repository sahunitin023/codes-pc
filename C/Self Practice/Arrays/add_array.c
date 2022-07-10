#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter Two arrays: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("After adding both two arrays....\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i] + b[i]);
    }
}