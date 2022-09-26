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
        if(arr[i]>arr[i+1])
        {
            cout<<'>';
        }
        else if(arr[i]<arr[i+1])
        {
            cout<<'<';
        }
        else
        {
            cout<<'=';
        }
    }
	return 0;
}
