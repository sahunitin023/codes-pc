#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n ; i++)
    {
        printf("%d ", i*i);
    }
    
    return 0;
}