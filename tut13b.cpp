#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void getData(void){
        cout<<"The value given is : "<<a<<"+"<<b<<"i"<<endl;
    }
    void setComplexbySum(Complex o1, Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNum(void){
        cout<<"The value of adding complex number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(1,2);
    c1.getData();

    c2.setData(3,4);
    c2.getData();

    c3.setComplexbySum(c1,c2);
    c3.printNum();
    return 0;
}