#include<iostream>
using namespace std;
int fibo(int n){
    if (n<2){
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    // 5! = 5*4*3*2*1
    // 0! = 1
    // 1! = 1
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Factorial "<<factorial(a)<<endl;
    cout<<"Fibonacci Series "<<fibo(a)<<endl;
    return 0;
}