#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Enter kth Value: ";
    cin>>k;
    cout<<"The kth smallest value in array: "<<arr[k-1]<<endl;
    cout<<"The kth largest value in array: "<<arr[n-k];
}