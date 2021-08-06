#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};

*/
class Test{
    int a;
    int b;
    public:
    // Test(int x, int y): a(x), b(y){
    // Test(int x, int y): a(x), b(y+x){
    // Test(int x, int y): a(x), b(2*y){
    // Test(int x, int y): a(x+y), b(y){
    // Test(int x, int y): b(x), a(y){
    // Test(int x, int y): a(x), b(a+y){
    // Test(int x, int y): b(x), a(b+y){//RED Flag this will create problems because a will be initialized first
    // Test(int x, int y): b(x), a(b+y){// Intitalize int b first then int a
    // Test(int x, int y): a(x){// Intitalize int b first then int a
    Test(int x, int y){// Intitalize int b first then int a
        b=y;
        a=x;
        cout<<"Test constructor invoked "<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main(){
    Test t(5,10);
    return 0;
}