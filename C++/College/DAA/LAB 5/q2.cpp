#include <iostream>
using namespace std;
int curr[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void notes(int money, int n)
{
    for (int i = n; i <= 9; i++)
    {
        if (money / curr[i] >= 1)
        {
            cout << curr[i] << " ";
            notes(money - curr[i], i);
            return;
        }
    }
}
int main()
{
    int m;
    cout << "Enter Money: ";
    cin >> m;
    notes(m, 0);
    return 0;
}