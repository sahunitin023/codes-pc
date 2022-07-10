#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    printf("Enter array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("The original array is:\n");
     for (int i = 0; i < n; i++)
    {
        printf("%d   ", A[i]);
    }
    printf("\n");
    for(int i = 0;i<n/2;i++)
    {
        int temp=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=temp;
    }
    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", A[i]);
    }
}