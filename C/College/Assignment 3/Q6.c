// Q6) Calculate profit or loss

#include<stdio.h>

int main()
{
    int sp, cp;
    printf("Enter The Cost Price of the product: ");
    scanf("%d", &cp);
    printf("Enter The Selling Price of the product: ");
    scanf("%d", &sp);

    if (sp>cp)
    {
        printf("PROFIT");
    }

    else if (sp==cp)
    {
        printf("No PROFIT, No LOSS");
    }
    else
    {
        printf("LOSS");
    }
    
    
    
    return 0;

}