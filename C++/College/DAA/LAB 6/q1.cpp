#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i = 1, j;
    cout << "Following activities are selected" << endl;
    cout << i << " ";
    for (j = 2; j <= n; j++)
    {
        if (s[j - 1] >= f[i - 1])
        {
            cout << j << " ";
            i = j;
        }
    }
}
int main()
{
    int s[] = {1, 3, 0, 5, 8, 5};
    int f[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}