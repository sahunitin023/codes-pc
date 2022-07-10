#include <stdio.h>

int checkp(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int num, a;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Neither a prime nor a composite number.");
    }
    else
    {
        a = checkp(num);
        if (a == 1)
        {
            printf("%d is a Prime Number.",num);
        }
        else
        {
            printf("%d is not a Prime number.", num);
        }
    }

}