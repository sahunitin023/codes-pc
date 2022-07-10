// Q2) Check whether a number is negative or Positive

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n<0)
    {
        printf("You have Entered an Negative Number."); 
    }

    else if (n>0)
    {
        printf("You have Entered a Positive Number."); 
    }

    else
    {
        printf("You have entered 0");
    }
    
    
    return 0;
}
