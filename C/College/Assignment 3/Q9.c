// Q9) Check whether two numbers are equal or not
#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter Two Number: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf("num1 and num2 are equal.");
    }
    else
    {
        printf("NO, They are not equal.");
    }
    
    return 0;
}
