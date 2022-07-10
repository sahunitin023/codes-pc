#include <stdio.h>
int fibo(int num);
int main()
{
    int num;
    printf("Enter terms you want: ");
    scanf("%d", &num);
    printf("Fibonacci Series: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}