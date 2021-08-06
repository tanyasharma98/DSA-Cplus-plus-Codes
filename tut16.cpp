#include<iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
    void setValue(int n){
        data = n;
    }
    friend void add(X,Y);
};
class Y{
    int num;
    public:
    void setValue(int n){
        num = n;
    }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"Summing values os X and Y is : "<<(o1.data +o2.num)<<endl;
}

int main(){
    X a1;
    Y b1;
    a1.setValue(2);
    b1.setValue(8);
    add(a1,b1);
    return 0;
}