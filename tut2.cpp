#include<iostream>
#include<iomanip>     //used for setw
using namespace std;


// Cppreference.com ---------------------- refrence
// int main(){
//     // Manipulators  eg--endl
//     int a=7, b=40, c=3453;
//     cout<<"This is a without setw"<<a<<endl;
//     cout<<"This is a without setw"<<b<<endl;
//     cout<<"This is a without setw"<<c<<endl;
//     cout<<"This is a with setw"<<setw(4)<<a<<endl;
//     cout<<"This is a with setw"<<setw(4)<<b<<endl;
//     cout<<"This is a with setw"<<setw(4)<<c<<endl;

// }



int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;

    for(int i=0;i<=10;i++){
        int b =a*i;
        cout<<a<<"*"<<i<<"="<<b<<endl;
    }
    return 0;
}
