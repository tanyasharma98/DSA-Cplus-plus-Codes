#include<iostream>
using namespace std;

template <class T>
class Tanya{
    public:
    T data;
    Tanya(T x){
        data =x;
    }
    void display();
};

template<class T>
void Tanya<T>:: display(){
    cout<<"The value of data is "<<data<<endl;
}


void func(int a){
    cout<<"I am func() with value "<<a<<endl; 
}

template<class T>
void func(T a){
    cout<<"I am Templatize func() with value "<<a<<endl; 
}

template<class T>
void func1(T a){
     cout<<"I am func() with value "<<a<<endl; 
 }
int main(){
    // Tanya <int>Ta(7);
    // cout<<Ta.data<<endl;
    // Ta.display();

    func(4); // Exact MAtch has higher priority
    func(6.7);
    func1('p');

    return 0;
}