#include <stdio.h>
int main()
{
    int b,num, i, j;
    printf("Enter a starting Number: ");
    scanf("%d",&b);
    printf("Enter a ending Number: ");
    scanf("%d",&num);
    for ( i = b; i <= num; i++)
    {
        for (j = 2; j < i && i%j!=0; j++)
        {
            continue;
        }
        if (j==i)
        {
            printf("%d ", i);
        }
        
    }
    return 0;
}
