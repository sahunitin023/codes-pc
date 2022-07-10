#include <stdio.h>

int main()
{
    char oper;
    float num1, num2, result=0.0f;
    printf("WELCOME TO CALCULATOR\n");
    printf("---------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

   
    scanf("%f %c %f", &num1, &oper, &num2);

   
    switch(oper)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }

    printf("Result: %.2f %c %.2f = %.2f", num1, oper, num2, result);

    return 0;
}