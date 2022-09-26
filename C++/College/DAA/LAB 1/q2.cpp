#include<iostream>
using namespace std;

int main()
{
    int n,b=0;
    cout<<"Enter a Number: ";
    cin>>n;
    while (b*b<=n)
    {
        b++;
    }
    cout<<"Floor value of Square root: "<<b-1;
}