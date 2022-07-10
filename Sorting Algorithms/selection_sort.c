#include <stdio.h> //Sorting in an Ascending order
int main()
{
    int min, temp;
    int a[5] = {12, 11, 15, 14, 13};
    for (int i = 0; i < 4; i++)
    {
        min = i;                     // Initialising the min number with the iterative I
        for (int j = i + 1; j < 5; j++)
        {
            if (a[min] > a[j])    // Comparing the Min Number with the successive Number by selecting the minimum number 
            {
                min = j;
            }
        }
        temp = a[i];             //Swapping the min number with the Iterative I as the positive
        a[i] = a[min];
        a[min] = temp;
    }
    printf("After Sorting, \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}