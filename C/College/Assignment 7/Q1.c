#include <stdio.h>
int max(int a[])
{
    int max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int min(int b[])
{
    int min = b[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > b[i])
        {
            min = b[i];
        }
    }
    return b[0];
}
int main()
{
    int arr[5] = {2, 5, 9, 7, 5};
    printf("Maximum element in the Array: %d\n", max(arr));
    printf("Minimum element in the Array: %d", min(arr));
    return 0;
}