#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"The value of constructor at object number : "<<count<<endl;
    }
    ~num(){
        cout<<"The value of distructor at object number : "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are inside main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"We are inside block of n1"<<endl;
        cout<<"Creating two object inside n1 "<<endl;
        num n2, n3;
        cout<<"Exiting the block "<<endl;
    }    
    cout<<"Finished here"<<endl;
    return 0;
}