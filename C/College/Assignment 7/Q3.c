#include <stdio.h>
int main()
{
    int i, temp, a[7] = {54, 25, 32, 76, 46, 43, 14};
    printf("The array is \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    for (int j = 0; j < 7; j++)
    {
        for (i = 0; i < 7-j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Sorted Array is\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}