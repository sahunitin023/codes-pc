#include<stdio.h>

int main()
{
    int i,n,t1=0,t2=1,sum;
    printf("Enter the no. of terms in Fibonacci Series:");
    scanf("%d", &n);
    
    for ( i = 1; i <= n; i++)
    {
        sum=t1+t2;
        printf("%d,",t1);
        t1=t2;
        t2=sum;
    }
    
    return 0;
}

