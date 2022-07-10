// Q3) Check whether a number is divisible by 3 and 13 or not.

#include<stdio.h>

int main()
{
    int num, mod;
    printf("Enter a Number:");
    scanf("%d", &num);
    mod= num%39;

    if (mod==0)
    {
        printf("Yes, The Number entered is divisible by both 3 and 13.");
    }
    
    else
    {
        printf("Oops!! Your number is not divisible by 3 and 13.");
    }
    return 0;

}