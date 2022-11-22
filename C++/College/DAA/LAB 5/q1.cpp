#include <iostream>
using namespace std;

int catalan(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    int res = 0;
    for (int i = 0; i < num; i++)
    {
        res += catalan(i) * catalan(num - i - 1);
    }
    return res;     
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Nth Catalan number: " << catalan(n);
    return 0;
}