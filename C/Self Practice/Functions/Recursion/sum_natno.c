#include <stdio.h>
int p;
int sum(int num)
{
    if (num != 0)
    {
        p= num + sum(num - 1); 
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the natural numbers till %d is %d.", n, sum(n));
}