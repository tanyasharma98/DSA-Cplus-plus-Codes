#include<iostream>
using namespace std;
class Study{
    int data1;
    int data2;
    int data3;
    public:
    Study(int a , int b=80, int c=45){
        data1= a;
        data2 =b;
        data3 =c;
    }
    void printData();
};
void Study::printData(){
    cout<<"The value of data1 is :"<<data1<<endl;
    cout<<"The value of data2 is :"<<data2<<endl;
    cout<<"The value of data3 is :"<<data3<<endl;
}
int main(){
    Study s(2,4);
    s.printData();
    Study s1(5);
    s1.printData();
    Study s2(98);
    s2.printData();
    return 0;
}