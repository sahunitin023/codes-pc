#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    int A[n + 1][r + 1];
    for (int i = 0; i <= n; i++)
    {
        A[i][0] = 1;
    }
    for (int i = 0; i <= r; i++)
    {
        A[i][i] = 1;
    }
    for (int j = 1; j <= r; j++)
    {
        for (int i = j + 1; i <= n; i++)
        {
            A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
        }
    }
    return A[n][r];
}
int main()
{
    cout<<nCr(4,2)<<endl;
    cout<<nCr(5,3)<<endl;
    cout<<nCr(6,6)<<endl;
    return 0;
}