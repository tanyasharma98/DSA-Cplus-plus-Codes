#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; //Class Variable----------//Default 0 and value will be same for every object
    public:
    void setData(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of Employee is: "<<id<<" and count is :"<<count<<endl; 
    }
    static void getCount(void){
        // count<<id; // throw error as static function can get access of only static variable
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count; //Bydefault value is zero
//Count is  static data member of class
// int Employee::count=1000;  //set value of count Here if want
int main(){
    Employee tanya,pino,shino;
    tanya.setData();
    tanya.getData();
    Employee::getCount(); // For Static 

    pino.setData();
    pino.getData();
    Employee::getCount();
    
    shino.setData();
    shino.getData();
    Employee::getCount();
    return 0;
}