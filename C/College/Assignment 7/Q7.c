#include<stdio.h>
int main()
{
    int sum=1,n;
    printf("Number of Terms: ");
    scanf("%d",&n);
    for (int i = 1; i < n ; i++)
    {
        int mul=1;
        for (int j = 1; j <= i; j++)
        {
            mul*=j;
        }
        sum+=mul;
    }
    printf("The value of the Expression is %d", sum);
    return 0;
}