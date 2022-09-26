#include <iostream>
using namespace std;
int hanoi(char from, char to, char others, int num);
int main()
{
    int n,steps;
    cout << "Enter the number of disks:" << endl;
    cin >> n;
    cout << "Tower of hanoi for " << n << " of disks:" << endl;
    steps = hanoi('a', 'b', 'c', n);
    cout<<"Total number of Steps: "<<steps;
    return 0;
}
int hanoi(char from, char to, char others, int num)
{
    static int temp;
    if (num <= 0)
    {
        cout << "Invalid number" << endl;
    }
    if (num == 1)
    {
        cout << "Move disk from " << from << " to " << others << endl;
        temp++;
    }
    if (num > 1)
    {
        hanoi(from, others, to, num - 1);
        hanoi(from, to, others, 1);
        hanoi(to, from, others, num - 1);
    }
    return temp;
}