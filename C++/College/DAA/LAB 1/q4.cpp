#include <bits\stdc++.h>
using namespace std;

int main()
{
    int C, l;
    cout << "Enter the capacity of the Tank: ";
    cin >> C;
    cout << "Enter amount of litres of water added: ";
    cin >> l;
    int c = C, i = 0;
    while (c > 0)
    {
        i++;
        c -= i;
        if (c <= 0)
        {
            break;
        }
        c += l;
        if (c > C)
        {
            c = C;
        }
    }
    cout << "On " << i << "th day, The Tank will be empty!";
}