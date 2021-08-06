#include<iostream>
using namespace std;
class Base{
    public:
    int var_base;
    void display(){
        cout<<"Tha value of base class is "<<var_base<<endl;
    }
};
class Derived : public Base{
    public:
    int var_derived;
    void display(){
         cout<<"Tha value of base class is "<<var_base<<endl;
         cout<<"Tha value of derived class is "<<var_derived<<endl;
    }
};
int main(){
    Base *  base_pointer;
    Base base_obj;
    Derived derived_obj;
    base_pointer= &derived_obj;
    base_pointer= &derived_obj; //Pointing base class pointer to derived class object

    base_pointer->var_base =40;
    // base_pointer->var_derived =300; //Will throw an error
    base_pointer->display();

    Derived * derived_pointer;
    derived_pointer = &derived_obj;
    derived_pointer->var_derived =2000;
    derived_pointer->var_base =1800;
    derived_pointer->display();
    return 0;
}