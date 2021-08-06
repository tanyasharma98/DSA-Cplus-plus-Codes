#include<iostream>
using namespace std;

// float avgFunction(int a , int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float avgFunction2(int a , float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T>
void swappingVlaues(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1 , class T2>
float avgFunction2(T1 a , T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main(){
    float a =avgFunction2(38,9.7);
    printf("The avegare of values is %.3f",a);
    cout<<endl;
    int x= 7 , y=89;
    swappingVlaues(x, y);
    cout<<x<<endl<<y;
    return 0;
}