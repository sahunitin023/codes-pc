#include <stdio.h>
void main()
{
    int a, num, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        a = num % 10;
        sum = sum * 10 + a;
        num /= 10;
    }
    printf("Reverse Number: %d", sum);
}