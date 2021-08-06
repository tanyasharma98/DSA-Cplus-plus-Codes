#include<iostream>
using namespace std;

int main(){
    //Basic Example
    int a = 4;
    int* ptr = &a;
    *ptr = 8888;
    cout<<"The value of a at address ptr is "<<*(ptr)<<endl;
    //Dynamically Initialize
    //new operator/keyword 
    // int* p = new int(30);
    float* p = new float(3.29);
    cout<<"The value at address p is "<<*(p)<<endl;
    //*--> defereeeeeeeence
    int* arr = new int[3];
    arr[0]=100;
    *(arr+1)=200;
    arr[2]=300;
    //Delete operator
    // delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[2] is "<<arr[1]<<endl;
    cout<<"The value of arr[3] is "<<arr[2]<<endl;
    return 0;
}