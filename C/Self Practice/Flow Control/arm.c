#include <stdio.h>
#include <math.h>
int check_digs(int num)
{
    int s = 0;
    while (num != 0)
    {
        num /= 10;
        s++;
    }
    return s;
}
void main()
{
    int a, n, num, dig;
    float sum=0.0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    n = num;
    dig = check_digs(num);
    for (int i = 0; i < dig; i++)
    {
        a = n % 10;
        n /= 10;
        sum += pow(a, dig);
    }
    if (num == sum)
    {
        printf("Yes, It is an Armstrong Number!!");
    }
    else
    {
        printf("No, It's not an Armstrong Number!!");
    }
}