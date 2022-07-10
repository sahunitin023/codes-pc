#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    Employee(string name, string company, int age) // CONSTRUCTOR  //1. No return type 2. Same name as the Class name
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int
main()
{
    Employee emp1("Nitin", "Google", 22); // Advantage of usage of Paramaterised Constructor
    emp1.IntroduceYourself();
    Employee emp2("Abhay", "Amazon", 23);
    emp2.IntroduceYourself();
}
