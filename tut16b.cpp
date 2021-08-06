#include<iostream>
using namespace std;
class Y;
class X{
    int val1;
    public:
    void isvalue(int n){
        val1 =n;
    }
    void display(){
        cout<<val1<<endl;
    }
    friend void swapping(X &, Y &);
};
class Y{
    int val2;
    public:
    void isvalue(int n){
        val2 =n;
    }
    void display(){
        cout<<val2<<endl;
    }
    friend void swapping(X &, Y &);
};

void swapping(X &s1, Y &s2){
    int temp = s1.val1;
    s1.val1 = s2.val2;
    s2.val2 = temp;
}
int main(){
    X a1;
    Y b1;
    a1.isvalue(35); 
    b1.isvalue(60);
    swapping(a1,b1);
    cout<<"The value of a1 of object1 after swap is :";
    a1.display();
    cout<<"The value of b1 of object2 after swap is :";
    b1.display();
    return 0;
}