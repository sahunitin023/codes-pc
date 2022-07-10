#include <stdio.h>
int main()
{
    int cont=0, i, n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the number you want to seach: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cont++;
        }
    }
    printf("%d is occured %d times. ", x, cont);
    return 0;
}