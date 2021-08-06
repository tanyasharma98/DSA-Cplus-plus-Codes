#include<iostream>
using namespace std;

//Forward Declaration
class Complex;
class Calculator{
    public:
    int add(int a , int b){
        return (a+b);
    }
    int sumReturn(Complex o1, Complex o2);
    int sumImgReturn(Complex o1, Complex o2);
};
class Complex{
    int a;
    int b;
    //Individually Declaring Function as a friend
    // friend int Calculator::sumReturn(Complex, Complex);
    // friend int Calculator::sumImgReturn(Complex, Complex);
    
    //Declaring class aS friend
    friend class Calculator;
    public:
    void setValue(int n1, int n2){
        a= n1;
        b= n2;
    }
    void getValue(){
        cout<<"The value is : "<<a<<" + "<<b<<"i"<<endl;
    }
};
int Calculator::sumReturn(Complex o1, Complex o2){
    return (o1.a + o2.a);
}
int Calculator::sumImgReturn(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

int main(){
    Complex c1,c2;
    c1.setValue(2,4);
    c1.getValue();
    c2.setValue(4,4);
    c2.getValue();

    Calculator cal;
    int sum =cal.sumReturn(c1, c2);
    cout<<"The sum of real values in Complex Equation is : "<<sum<<endl;
    int sumImg = cal.sumImgReturn(c1, c2);
    cout<<"The sum of imaginary values in Complex Equation is : "<<sumImg<<"i"<<endl;
    return 0;
}