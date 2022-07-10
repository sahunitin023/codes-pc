#include<stdio.h>
void main()
{
    int i,j,n;
    printf("No. of Columns: ");
    scanf("%d",&n);
    for ( i = n; i != 0; i--)
    {
        for ( j = i; j!=0 ; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}


/*
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("No. of rows: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
*/