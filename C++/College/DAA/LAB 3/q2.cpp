#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    } while (i < j);
    swap(&a[l], &a[j]);
    return j;
}
void quickSort(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quickSort(a, l, j);
        quickSort(a, j + 1, h);
    }
}

int main()
{
    // int n;
    // cout<<"Enter the size of the array: ";
    // cin>>n;
    int a[]={7,5,12,16,216,122,68,1};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    quickSort(a, 0, 8);
    cout<<"After Sorting using Quick Sort:"<<endl;
    for (int i = 0; i < 8; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}