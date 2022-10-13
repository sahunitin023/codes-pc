#include <iostream>
using namespace std;
void merge(int A[], int l, int mid, int h)       // For Merging Two Sub array
{
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h)
    {
        if (A[i] <= A[j])
            B[k++] = A[i++];            // Storing the smallest element in a new Temporary Array
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)              // Storing the remaining array of left sub array in the temporary array
        B[k++] = A[i];
    for (; j <= h; j++)                // Storing the remaining array of right sub array in the temporary array
        B[k++] = A[j];
    for (i = l; i <= h; i++)          // Assigning all the elements of the temporary array B into A.
        A[i] = B[i];
}
void mergeSort(int A[], int l, int h)   // recursive function
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main()
{
    // int n;
    // cout<<"Enter the size of the array: ";
    // cin>>n;
    int A[]={7,5,12,16,216,122,68,1};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>A[i];
    // }
    mergeSort(A, 0, 8);
    cout<<"After Sorting using Merge Sort:"<<endl;
    for (int i = 0; i < 8; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}