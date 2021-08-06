#include<iostream>
using namespace std;

class Complex{
    int real , imaginary;
    public:
    void set_Value(int a , int b){
        real=a;
        imaginary=b;
    }
    void get_value(){
        cout<<"The value of real is "<<real<<endl;
        cout<<"The value of imaginary is "<<imaginary<<endl;
    }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;



    //*-----------------------------------Derefrence
    //&-----------------------------------Address

    Complex *ptr = new Complex;
    // (*ptr).set_Value(2,4); is same as
    ptr->set_Value(3,6); // Arrow Operator


    // (*ptr).get_value(); is good as
    ptr->get_value();


    //Array of Objects
    Complex *ptr1 = new Complex[4];
    // (*ptr).set_Value(2,4); is same as
    ptr1->set_Value(5,80); // Arrow Operator


    // (*ptr).get_value(); is same as
    ptr1->get_value();
    return 0;
}