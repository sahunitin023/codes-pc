#include <stdio.h>
void main()
{
    int i, j, rows,num=1;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for ( i = 1; i <= rows; i++)
    {
        for ( j=1; j <= i; j++,num++)
        {
            printf("%d ",num);
        }
        printf("\n");
    }
    
}