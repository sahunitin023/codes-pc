#include<stdio.h>

void main()
{
    int n;
    float avg, sum=0.0;
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg = sum/n;
    printf("Average = %.2f", avg);
    
}