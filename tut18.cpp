#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int, int);
    void printNum(){
        cout<<"The complex value is: "<<a<<" + "<<b<<"i"<<endl; 
    }
};
Complex::Complex(int x , int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a=x;
    b=y;
}
int main(){
    // Implicit call
    Complex a(2,4);
    a.printNum();
    // Explicit call
    Complex b = Complex(3,6);
    b.printNum();
    return 0;
}