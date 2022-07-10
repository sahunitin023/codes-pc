#include <stdio.h>
#include <math.h>
int check_dig(int num)
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
    int snum, lnum, num, dig;
    printf("Enter the Intervals: ");
    scanf("%d", &snum);
    scanf("%d", &lnum);
    for (num = snum; num <= lnum; num++)
    {
        int n = num, a;
        float sum = 0.0;
        dig = check_dig(num);
        while (n != 0)
        {
            a = n % 10;
            n /= 10;
            sum += pow(a, dig);
        }
        if (num == sum)
        {
            printf("%d ", num);
        }
    }
}