#include <iostream>
using namespace std;

class Employee
{
private: // In Encapsulation, Data Members of the class is stored in Private.
    string Name;
    string Company;
    int Age;

public:                      // Other Member functions which are binded with Data members are public so that can use and manipulate data members indirectly.
    void IntroduceYourself() // Just to print the Data of the objects
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    // SETTERS FOR OBJECT'S DATA
    void setName(string name)
    {
        Name = name;
    }
    void setAge(int age)
    {
        Age = age;
    }
    void setCompany(string company)
    {
        Company = company;
    }

    // GETTERS FOR OBJECT'S DATA
    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }
    string getCompany()
    {
        return Company;
    }

    /*Employee(string name, string company, int age) // CONSTRUCTOR  //1. No return type 2. Same name as the Class name
    {
        Name = name;
        Company = company;
        Age = age;
    }*/
};

int main()
{
    Employee emp1;
    emp1.setName("Nitin");
    emp1.setCompany("Tiger Analytics");
    emp1.setAge(25);
    emp1.IntroduceYourself();
    /*    OR
    we can use
    cout <<"Name: "<< emp1.getName() << endl;
    cout <<"Company: "<< emp1.getCompany() << endl;
    cout <<"Age: "<< emp1.getAge() << endl;
    */
    return 0;
}
