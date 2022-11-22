#include <iostream>
using namespace std;
int curr[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int count = 0;
void notes(int money, int n)
{
    for (int i = n; i <= 9; i++)
    {
        if (money / curr[i] >= 1)
        {
            count++;
            notes(money - curr[i], i);
            return;
        }
    }
    cout <<count;
}
int main()
{
    int m;
    cout << "Enter Money: ";
    cin >> m;
    notes(m, 0);
    return 0;
}