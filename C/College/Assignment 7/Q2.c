#include<stdio.h>
int main()
{
    int temp,i,a[7]={54,25,32,76,46,43,14};
    printf("The array is \n");  
    for ( i = 0; i < 7; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReversed Array is\n");
    for ( i = 0; i < 3; i++)
    {
        temp=a[i];
        a[i]=a[6-i];
        a[6-i]=temp;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}