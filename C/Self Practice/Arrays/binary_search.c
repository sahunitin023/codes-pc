#include<stdio.h>  //INCOMPLETE
int main()
{
    int n,i,j,temp,x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Sorted Array is:\n");
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n-j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("Enter the you want to search: ");
    scanf("%d",&x);
    i=n/2;
    while (a[i]!=x)
    {
        if (a[i]<x)
        {
            /* code */
        }
        else
            printf("")
        
    }
    
        
    return 0;
}