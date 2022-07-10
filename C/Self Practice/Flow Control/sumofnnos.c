#include<stdio.h>

int main()
{
    long int a,i,sum=0;
    printf("Enter a Positive number: ");
    scanf("%d", &a);
     for (i=1; i <=a ; i++)
     {
        sum= sum + i;
     }
     printf("Sum = %Ld", sum);
    return 0;
}

