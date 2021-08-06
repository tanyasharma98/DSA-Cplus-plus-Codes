#include<iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class base1{
    protected:
    int base1_int;
    public:
    void set_base1(int a){
        base1_int =a;
    }
};
class base2{
    protected:
    int base2_int;
    public:
    void set_base2(int a){
        base2_int =a;
    }
};
class base3{
    protected:
    int base3_int;
    public:
    void set_base3(int a){
        base3_int =a;
    }
};
class Derived : public base1 , public base2 , public base3{
    public:
    void show(){
        cout<<"The value of base 1 is : "<<base1_int<<endl;
        cout<<"The value of base 2 is : "<<base2_int<<endl;
        cout<<"The value of base 3 is : "<<base3_int<<endl;
        cout<<"The sum of base1 and base2 and base3 is : "<<base1_int + base2_int + base3_int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1_int --> protected
    base2_int --> protected

Member functions:
    set_base1() --> public
    set_base2() --> public
    show() --> public
*/
int main(){
    Derived tanya;
    tanya.set_base1(20);
    tanya.set_base2(30);
    tanya.set_base3(10);
    tanya.show();
    return 0;
}