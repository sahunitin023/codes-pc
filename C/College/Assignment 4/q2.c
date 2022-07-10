#include<stdio.h>

int main()
{
    int i,n,sum=0;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("Sum is %d", sum);
    
    return 0;
}