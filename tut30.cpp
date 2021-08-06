#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you ?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"kasiye ho?"<<endl;
    }
};
class Derived : public Base1 ,public Base2{
    public:
    void greet(){
        Base2 ::greet();
    }
};
class B{
    public:
    void say(){
        cout<<"Hello World!"<<endl;
    }
};
class D: public B{
    int a;
    //D's say() method will override Base class say()method
    public:
    void say(){
        cout<<"Get lost you!"<<endl;
    }
};
int main(){
    // Ambiguity 1
    // Base1 baseobj1;  
    // Base2 baseobj2;
    // baseobj1.greet();  
    // baseobj2.greet();  
    // Derived d;
    // d.greet();


    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}