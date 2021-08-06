#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setData(void){
        salary = 200;
        cout<<"Enter the id of employee "<<endl;
        cin>>id;
    }
    void getData(void){
        cout<<"The id of employee is "<<id<<endl;
    }
};
int main(){
    Employee name[4];
    for (int i = 0; i < 4; i++)
    {
        name[i].setData();
        name[i].getData();
    }
    
    return 0;
}