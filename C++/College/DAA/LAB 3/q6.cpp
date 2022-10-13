#include <iostream>
using namespace std;

int power(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    else if(p==1)
    {
        return b;
    }
    else
    {
        if(p%2!=0)
        {
            return b*power(b,(p-1)/2)*power(b,(p-1)/2);
        }
        else
        {
            return power(b,p/2)*power(b,p/2);
        }
    }
}

int main()
{
    cout << "Enter the base: ";
    int b;
    cin>>b;
    cout<<"Enter the power: ";
    int p;
    cin>>p;
    int ans=power(b,p);
    cout<<ans<<endl;

    return 0;
}