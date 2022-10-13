#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<2*n;i=i+2)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<arr[i]<<endl;
        }
        else if(arr[i]>arr[i+1])
        {
            cout<<arr[i+1]<<endl;
        }
        else if(arr[i]<arr[i+1])
        {
            if(2*arr[i]<arr[i+1])
            {
                continue;
            }
            else if(2*arr[i]==arr[i+1])
            {
                cout<<(2*arr[i])-arr[i+1]<<endl;
            }
            else if(2*arr[i]>arr[i+1])
            {
                cout<<(2*arr[i])-arr[i+1]<<endl;
            }
        }
    }
	return 0;
}