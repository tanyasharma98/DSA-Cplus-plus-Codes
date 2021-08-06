#include<iostream>
using namespace std;

class Base{
    public:
    int var_base=1;
    virtual void display(){
        cout<<"1 Tha value of base class is "<<var_base<<endl;
    }
};
class Derived : public Base{
    public:
    int var_derived=2;
    void display(){
         cout<<"2 Tha value of base class is "<<var_base<<endl;
         cout<<"2 Tha value of derived class is "<<var_derived<<endl;
    }
};
int main(){
    Base * bpt;
    Base base_obj;
    Derived derived_obj;

    bpt = &derived_obj;
    bpt->display();  
    return 0;
}