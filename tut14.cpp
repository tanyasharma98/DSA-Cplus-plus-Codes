#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    void setValue(int n1, int n2){
        a= n1;
        b=n2;
    }
    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    friend Complex sumComple(Complex o1, Complex o2);
    void printvalue(){
        cout<<"Your values are : "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex sumComple(Complex o1 , Complex o2){
    Complex o3;
    o3.setValue((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1,c2, sum;
    c1.setValue(2,4);
    c1.printvalue();

    c2.setValue(6,3);
    c2.printvalue();

    sum = sumComple(c1,c2);
    sum.printvalue();
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/