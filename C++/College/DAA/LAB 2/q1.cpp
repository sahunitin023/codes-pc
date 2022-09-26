#include <iostream>
using namespace std;
int sum=0,rem;
int Reverse(int num)
{
    if (num)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        Reverse(num / 10);
    }
    else
        return sum;
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout<<"After Reversing: "<<Reverse(num);
}