#include <stdio.h>

double powNew(double b, double e)
{
    double res = 1.0;
    for (int i = 0; i < e; i++)
    {
        res *= b;
    }
    return res;
}

int fact(int n)
{
    int x = n;
    if (n != 0)
    {
        x *= fact(n - 1);
    }
    else
        return 1;
}

double sine(double x)
{
    double sum = 0, num, deno, term;
    for (int i = 0; i < 6; i++)
    {
        num = powNew(x, 2 * i + 1);
        deno = fact(2 * i + 1);
        term = num / deno;
        sum += powNew(-1.0, i) * term;
    }
    return sum;
}
double cosine(double x)
{
    double sum = 0, num, deno, term;
    for (int i = 0; i < 6; i++)
    {
        num = powNew(x, 2 * i);
        deno = fact(2 * i);
        term = num / deno;
        sum += powNew(-1, i) * term;
    }
    return sum;
}

void main()
{
    double x, res;
    printf("Enter the angle in Radians: ");
    scanf("%lf", &x);
    printf("sin x = %.4lf   ", sine(x));
    printf("cos x = %.4lf   ", cosine(x));
    res = powNew(sine(x), 3) + powNew(cosine(x), 2) + (sine(x)* cosine(x));  //res=sin^3(x)+cos^3(x)+sin(x)*cos(x)
    printf("Answer = %.5lf.", res);
}
