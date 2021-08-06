#include <iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1
{
    int data1;

public:
    Base1(int x)
    {
        data1 = x;
        cout << "Base1 constructor invoked" << endl;
    }
    void printBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int x)
    {
        data2 = x;
        cout << "Base2 constructor invoked" << endl;
    }
    void printBase2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
         cout << "Derived constructor invoked" << endl;
    }
    void printDerived()
    {
       cout<<"The value of derived1 is "<<derived1<<endl;
       cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main()
{
    Derived d(1,2,3,4);
    d.printBase1();
    // Base2 b(4);
    d.printBase2();
    d.printDerived();
    return 0;
}