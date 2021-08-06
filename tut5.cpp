#include<iostream>
using namespace std;
// struct employee
// {
//     int eID;
//     char favChar;
//     float salary;
// };


// typedef struct employee
// {
//     int eID;
//     char favChar;
//     float salary;
// } ep;

union food
{
    // select max bytes then choose only one as required
    int dal; //4 bytes
    char kimchi; //2 bytes
    float pounds; //4 bytes
};
int main(){
    enum Meal{breakfast , lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // union food f1;
    // f1.kimchi = 'v';
    // cout<<f1.kimchi<<endl;
    // cout<<f1.pounds<<endl;




    // struct employee tanya;
    // ep janya;
    // tanya.salary = 40000000000;
    // tanya.eID = 1;
    // tanya.favChar ='o';
    // cout<<"Tanya salary is : "<<tanya.salary<<endl;
    // cout<<"Tanya eID is : "<<tanya.eID<<endl;
    // cout<<"Tanya favChar is : "<<tanya.favChar<<endl;
    return 0;
}