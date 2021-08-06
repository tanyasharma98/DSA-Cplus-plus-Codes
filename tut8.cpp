#include<iostream>
using namespace std;
int sum(float a , int b){
    cout<<" avlue ofa nad b "<<endl;
    return a+b;
}
int sum(int a , int b, int c){
    cout<<" value of a , b and c "<<endl;
    return a+b+c;
}

//cylinder
int volume(double r , int h){
    return 3.14*r*r*h;
}
//rectangle
int volume(int l , int b, int h){
    return l*b*h;
}
//cube
int volume(int a){
    return a*a*a;
}
int main(){
    int a=2,b=4,c=3;
    cout<<"sum with 2 arguments"<<sum(a,b)<<endl;
    cout<<"sum with 3 arguments"<<sum(a,b,c)<<endl;
    cout<<"Volume of cylinder"<<volume(b,c)<<endl;
    cout<<"Volume of rectangle"<<volume(a, b ,c)<<endl;
    cout<<"Volume of cube"<<volume(a)<<endl;
    return 0;
}