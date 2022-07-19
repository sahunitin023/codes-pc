#include <iostream>
using namespace std;

class Number // Using "num" methods multiple times due to different Parameters is known as Polymorphism.
{
public:
    void num(int a)
    {
        cout << "Value is " << a << endl;
    }
    void num(double b)
    {
        cout << "Value is " << b << endl;
    }
    void num(int a, int b)
    {
        cout << "Both Values are " << a << " & " << b << endl;
    }
};

int main()
{
    Number x;
    x.num(9);           // a parameter is a int type
    x.num(5.74);        // a parameter is a double type      // By this we can use the Polymorphism.
    x.num(6, 0);        // two parameters are present.
}
