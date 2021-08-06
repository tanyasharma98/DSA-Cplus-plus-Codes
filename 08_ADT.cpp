#include<iostream>
using namespace std;

class MyArray{
    public:
    int total_size;
    int used_size;
    int * arr;
    MyArray( int tsize , int usize){
        total_size = tsize;
        used_size = usize;
        arr = new int[tsize];
    }
    void set_value(){
        for (int i = 0; i < used_size; i++)
        {
            cin>>arr[i];
        }
        
    }
    void display(){
        for (int i = 0; i < used_size; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }
};
int main(){
    MyArray Marks(10,4);
    Marks.set_value();
    Marks.display();
    return 0;
}