#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, temp, i;
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num/2; i++)
    {
        temp = arr[num - 1 - i];
        arr[num - 1 - i] = arr[i];
        arr[i]=temp;
    }
    for ( i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}