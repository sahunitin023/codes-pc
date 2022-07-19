#include <iostream>         
using namespace std;
class Abstraction
{
private:       // Hiding the Background Details 
    int a;
    int b;

public:        // Displaying the important information
    void setter(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        cout << "a + b = " << a + b << endl;
    }
};

int main()
{
    Abstraction obj1, obj2;
    obj1.setter(5, 7);
    obj1.sum();
    obj2.setter(8, 9);
    obj2.sum();
    return 0;
}
