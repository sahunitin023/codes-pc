#include <iostream>
#include <math.h>
using namespace std;
int maxNo(int a[], int x, int y)
{
    if (y - x <= 1)
        return max(a[x], a[y]);
    int d = (x + y) / 2;
    int max1 = maxNo(a, x, d);
    int max2 = maxNo(a, d, y);
    return max(max1, max2);
}
int minNo(int a[], int x, int y)
{
    if (x - y <= 1)
        return min(a[x], a[y]);
    int d = (x + y) / 2;
    int min1 = minNo(a, x, d);
    int min2 = minNo(a, d, y);
    return (min(min1, min2));
}
int main()
{

    int A[] = {7, 6, 14, 200, 175};
    int n = sizeof(A) / sizeof(A[0]);
    int max = maxNo(A, 0, n - 1);
    int min = minNo(A, 0, n - 1);
    std::cout << max << std::endl;
    std::cout << min << std::endl;
}