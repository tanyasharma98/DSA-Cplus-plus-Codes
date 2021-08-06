#include<iostream>
using namespace std;

int main(){
    // pointers -----> Datatypes which holds the address of other data types
    int a= 34;
    int* b= &a;
    // cout<<b;

    // & --- (m%)----> (Address of) operator
    cout<<"Address of a is : "<< &a <<endl;
    cout<<"Address of a is : "<<b<<endl;

    // * ----->(Value of) Derefrence Operator
    cout<<"The value of a at address b is :"<<*b<<endl;

    // Pointer to Pointer
    int** c= &b;
    cout<<"Address of b is : "<<&b<<endl;
    cout<<"Address of b is : "<<c<<endl;
    cout<<"Value at address c is : "<<*c<<endl;
    cout<<"Value_of(value_of(c)) of address: "<<**c<<endl;

    return 0;
}