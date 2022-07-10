#include <stdio.h>
void main()
{
    int num;
    while (1)
    {
        printf("Enter any number: ");
        scanf("%d",&num);
        if (num>0)
        {
            printf("Positive Number\n");
        }
        else if (num==0)
        {
            printf("Zero\n");
        }
        else
        {
            printf("Negative number\n");
        }
        
        
    }
    

}