#include <iostream>
using namespace std;
bool checkprime(int n)
{
    int cou = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cou++;
    }
    if (cou == 2)
        return true;
    else
        return false;
}
int prime(int a, int b)
{
    if (a < b)
    {
        if (checkprime(a))
            cout << a << " ";
        prime(a + 1, b);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    prime(a, b);
    return 0;
}