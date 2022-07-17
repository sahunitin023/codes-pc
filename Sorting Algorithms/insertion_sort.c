#include <stdio.h>
int main()
{
    int a[] = {45, 63, 22, 79, 32, 51};
    for (int i = 1; i < 6; i++)
    {
        int j = i - 1;
        int x = a[i];
        while (a[j] > x && j > -1)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
    printf("Sorted Array\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}