// 1) Maximum between two numbers

#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two Numbers:");
    scanf("%d %d",&num1, &num2);

    if (num1>num2)
    {
        printf("%d is maximum", num1);

    }
    else if (num1==num2)
    {
        printf("None of them is Maximum");
    }

    else
    {
        printf("%d is maximum", num2);
    }



    return 0;
}

