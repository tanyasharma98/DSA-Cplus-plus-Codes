#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int x){
        a =x;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"Cpoy Constructor Called"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"The value is : "<<a<<endl;
    }
};
int main(){
    Number n1, n2, n3(70), z2;
    n1.display();
    n2.display();
    n3.display();
    Number z(n3); // Copy constructor invoked
    z.display();

    z2= n3;//Cpoy Constructor not called
    z2.display();

    Number z3 = n3;// Copy constructor invoked
    z3.display();
    return 0;
}