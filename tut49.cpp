#include<iostream>
using namespace std;
template <class T1=int, class T2= float, class T3=char>
class tanya{
    public:
    T1 a;
    T2 b;
    T3 c;
    tanya(T1 x , T2 y, T3 z){
        a =x;
        b = y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    tanya <>t(23,56.5,'s');
    t.display();
    cout<<endl;
    tanya <float, char,char>tan(67.56,'o','d');
    tan.display();
    return 0;
}