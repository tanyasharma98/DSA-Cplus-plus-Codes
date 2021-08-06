#include<iostream>
using namespace std;

int main(){
    int marks[] = {34,64,352,76,21,856,1246};
    for (int i = 0; i < sizeof(marks)/sizeof(marks[0]); i++)
    {
        /* code */
        cout<<"The marks are : "<<marks[i]<<endl;
    }
    cout<<"while loop"<<endl;
    int len = sizeof(marks)/sizeof(marks[0]);
    int j=0;
    while(j<len)
    {
        /* code */
        cout<<"The value with wile loop is :"<<marks[j]<<endl;
        j++;
    }
    cout<<"Do-While loop"<<endl;
     int k=0;
    do
    {
        /* code */
        cout<<"The value with Do-while loop is :"<<marks[k]<<endl;
        k++;
    }while (k<len);
    
    
// Pointers and arrays

// Pointer Arithmetic
// Address New = Address current + i* sizeof(datatype)
// (p+i)           (p)
// eg           = 32 + 1* 4
//              =36
// 

int* p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<*p++<<endl;
cout<<*p<<endl;
// cout<<marks<<endl;
// cout<<"The value of marks[0] ---> *p is "<<*p<<endl;
// cout<<"The value of marks[1] ---> *(p+1) is "<<*(p+1)<<endl;
// cout<<"The value of marks[2] ---> *(p+2) is "<<*(p+2)<<endl;
// cout<<"The value of marks[3] ---> *(p+3) is "<<*(p+3)<<endl;
// cout<<"The value of marks[4] ---> *(p+4) is "<<*(p+4)<<endl;
    return 0;
}





   