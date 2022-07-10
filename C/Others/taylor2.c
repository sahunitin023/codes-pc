#include <stdio.h>
double cos(double val)
{
    double x = val, tempCos = 1, cos = 1, diff, factorial = 1.0;
    int plusMinus = 1;
    for (int i = 2; 0 == 0; i += 2)
    {
        plusMinus = (plusMinus == 1) ? -1 : 1;
        factorial *= (i - 1) * i;
        tempCos += plusMinus * (pow(x, i) / factorial);
        diff = tempCos - cos;
        diff = (diff > 0) ? diff : -diff;
        if (diff < 0.00001)
        {
            cos = tempCos;
            break;
        }
        else
        {
            cos = tempCos;
        }
    }
    return cos;
}

double sin(double val)
{
    double x = val, tempSin, sin, diff, factorial = 1.0;
    int plusMinus = 1;
    tempSin = x;
    sin = x;
    for (int i = 3; 0 == 0; i += 2)
    {
        plusMinus = (plusMinus == 1) ? -1 : 1;
        factorial *= (i - 1) * i;
        tempSin += plusMinus * (pow(x, i) / factorial);
        diff = tempSin - sin;
        diff = (diff > 0) ? diff : -diff;
        if (diff < 0.00001)
        {
            sin = tempSin;
            break;
        }
        else
        {
            sin = tempSin;
        }
    }
    return sin;
}

int main()
{
    double x, sinV, cosV, answer;
    printf("Enter x : ");
    scanf("%lf", &x);
    sinV = sin(x);
    cosV = cos(x);
    answer = sinV * sinV * sinV + cosV * cosV + sinV * cosV;
    printf("sin x = %.4lf   ", sinV);
    printf("cos x = %.4lf   ", cosV);
    printf("Answer = %.5lf", answer);
    return (0);
}