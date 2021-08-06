#include<iostream>
using namespace std;
//Base Class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpID){
        id = inpID;
        salary = 33;
    }
    Employee(){}
};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
// class Programmer : Employee{ ------------------private bydefault
class Programmer : public Employee{
    public:
    int langCode ;
    Programmer(int inpIp){
        id = inpIp;
        langCode = 8;
    }
    void display(){
        cout<<id<<endl;
    }
};
int main(){
    Employee e1(1), e2(2);
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;
    Programmer tanya(20);
    cout<<tanya.langCode<<endl;
    tanya.display();
    cout<<tanya.id<<endl;  // use puplic visiblilty mode
    return 0;
}