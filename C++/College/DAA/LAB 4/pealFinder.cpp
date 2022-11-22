#include <bits/stdc++.h>
using namespace std;
int peakFinder(int arr[], int low,
               int high, int n)
{
    int mid = low + (high - low) / 2;
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return peakFinder(arr, low, (mid - 1), n);

    else
        return peakFinder(
            arr, (mid + 1), high, n);
}
int findPeak(int arr[], int n)
{
    return peakFinder(arr, 0, n - 1, n);
}
int main()
{
    int arr[] = {7, 6, 14, 200, 175};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[findPeak(arr, n)];
    return 0;
}
