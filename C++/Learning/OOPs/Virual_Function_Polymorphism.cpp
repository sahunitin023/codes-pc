#include <iostream> // POLYMORPHISM is the ability of using a function in different forms.
using namespace std;
class Employee
{
private: 
    string Company;
    int Age;

protected: 
    string Name;

public:
    Employee(string name, string company, int age) 
    {
        Name = name;
        Company = company;
        Age = age;
    }
    virtual void Work()      // By using a Virtual Function, It will check whether other Sub Class assosciated with the Parent/Super Class "Employee" has the "Work" Function or not??
    {                        //If Yes, It will point to the Corresponding Class's "Work" Function/Method & If No, the parent Class's "Work" Function will be used as Default.
        cout << Name << " is serving to the Government. " << endl;
    }
};

class Developer : public Employee
{
public:
    string FavLanguage;     
    Developer(string name, string company, int age, string favLanguage) : Employee(name, company, age) 
    {
        FavLanguage = favLanguage;
    }
    void Work()
    {
        cout << Name << " is solving problems using " << FavLanguage << endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;     
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age) 
    {
        Subject = subject;
    }
    void Work()
    {
        cout << Name << " is teaching "<< Subject << " to the Students" << endl;
    }
};

int main()
{
    Developer emp1("Nitin" , "Google" , 25 , "Python");
    Teacher emp2("Pulkit", "School", 21, "English" );
    
    Employee *a = &emp1;  // An Employee type pointer pointing to Work Method which is having a Developer CLass's Object Address.
    Employee *b = &emp2;  // Similarily, having a Teacher Class's Object Address.
    
    a->Work();  // An Employee type pointer pointing to Work function in the Parent Class But redirected to the corresponding Class's Work Function due the usage of VIRTUAL FUNCTION.
    b->Work();

}
