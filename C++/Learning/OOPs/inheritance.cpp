#include <iostream> // INHERITANCE is the process of using Super Class's Methods and Property in Sub Class or Derived class.
using namespace std;
class Employee
{
private: // Only accessible inside the class
    string Company;
    int Age;

protected: // Only accessible to the Sub Class or Derived Class(Here, Class "Developer") to which the Super Class is inherited to.
    string Name;

public:
    Employee(string name, string company, int age) // Parameterised Constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion() // Creating methods to show Inheritance
    {
        if (Age > 30)
            cout << Name << "'s promotion letter has been accepted." << endl;
        else
            cout << Name << "'s promotion letter has been rejected." << endl;
    }
};

// Usage of Public before the Super Class allows to use the Methods of super class under the Sub Class.
class Developer : public Employee // ":" used to inherit a class ["Developer"---> Sub Class ; "Employee" ---> Super Class]
{
public:
    string FavLanguage;     //You must create a Constructor of the Sub Class as because the Super class has a Constructor
    Developer(string name, string company, int age, string favLanguage) : Employee(name, company, age) // Developer's Property has also been assigned to Employee's Property.
    {
        FavLanguage = favLanguage;
    }
    void FixBug()
    {
        cout << Name << " has fixed the Bug using " << FavLanguage << endl; //'Name' property is now directly accesible from the Super class only to the Sub clss due to the 'Protected' Access Modifier.
    }
};

int main()
{
    Developer emp1("Nitin" , "Google" , 25 , "Python") , emp2("Abhay" , "Amazon" , 35 , "C++");
    Employee emp3("Pulkit" , "Netflix" , 40 );
    emp1.FixBug();
    emp1.AskForPromotion(); // We can only use the "AskForPromotion" Method in the "Developer" Sub Class as during Inheritance Process, the Super Class has been set to PUBLIC.
    emp2.FixBug();
    emp3.AskForPromotion();
}
