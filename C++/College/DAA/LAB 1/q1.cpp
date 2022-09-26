#include <bits\stdc++.h>
using namespace std;

double f2(double val)
{
    return (val * val) + (2 * val) + 3;
}

int main()
{
    double x1, x2;
    cout << "Enter the intervals of the function: ";
    cin >> x1 >> x2;
    double sum = 0.0, i = (x2 - x1) / 20;
    for (int j = 0; i < 20; i++)
    {
        sum += f2(x1 + i * j) * i;
    }
    cout << "The value of the integration of the Function: " << sum;
}