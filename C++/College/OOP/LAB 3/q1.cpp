#include<iostream>
using namespace std;
class Circle
{
    float rad;

public: 
    void radiusInput()
    {
        cin>>rad;
    }
    float area()
    {
        return 3.14 * rad * rad;
    }
};
int main()
{
    Circle c1;
    c1.radiusInput();
    cout<< "Area of the Circle: " << c1.area();
}