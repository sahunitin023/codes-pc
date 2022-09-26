#include <iostream>
using namespace std;
int search(int A[], int x, int low, int high)
{
    static int h=high;
    static int temp=1;
    int mid = (low + high) / 2;
    if (A[mid] < x)
    {
        search(A, x, mid + 1, high);
    }
    else if (A[mid] > x)
    {
        search(A, x, low, mid);
    }
    else if (A[mid] == x)
    {
        cout<<mid+1;
        temp--;
        //int i = mid, j = mid;
        // while (A[--i] == x)
        //     cout<<i<<" ";
        // while (A[++j] == x)
        //     cout<<j<<" ";
    }
    if(mid>h)
    {
        return temp;
    }
}
int main()
{
    int n, i, j, temp, x;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the Array:\n";
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"The Sorted Array is:\n";
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the you want to search: ";
    cin>>x;
    cout<<"The Loaction of the Element: ";
    if(search(a, x, 0, n - 1))
       cout<<"Not Found!!";
    return 0;
}