#include<iostream>
using namespace std;
// Function Prototype
// Type Function_Name(argument)
// int sum(int a, int b); //----Acceptable
// int sum(int a,b); //=== Not- Acceptable
int sum(int , int ); //----- Acceptable
// void g(void); //----- Acceptable
void g(); //----- Acceptable

// void swapping(int a , int b){ //temp  a   b
//     int temp =a;          // 2    2   3
//     a=b;                  // 2    3   3
//     b= temp;              // 2    3   2
// }


// Call by Reference by Pointers
// void swapPointer(int* a , int* b){ //temp  a   b
//     int temp = *a;          // 2    2   3
//     *a = *b;                  // 2    3   3
//     *b= temp;              // 2    3   2
// }

// Call by Reference by C++ pointers
// void swapReferenceVar(int &a,int &b){ //temp  a   b
//     int temp = a;          // 2    2   3
//     a = b;                  // 2    3   3
//     b= temp;              // 2    3   2
// }



// Reference Return value
int & swapReferenceVar(int &a,int &b){ //temp  a   b
    int temp = a;          // 2    2   3
    a = b;                  // 2    3   3
    b= temp;              // 2    3   2
    return a;
}
int main(){
    // int num1 , num2;
    // cout<<"Enter num1"<<endl;
    // cin>>num1;
    // cout<<"Enter num2"<<endl;
    // cin>>num2;
    // // num1 and num2 are Actual Parameters
    // cout<<"The sum is : "<<sum(num1, num2)<<endl;
    // g();

    int x=2, y=3;
    cout<<"The value of x is : "<<x<< "and value of y is : "<<y<<endl;
    // swapping(x,y); ------> This will not swap
    // swapPointer(&x , &y); //------> This will swap
    // swapReferenceVar(x,y);
    // cout<<"The value of x is : "<<x<< "and value of y is : "<<y<<endl;
    swapReferenceVar(x,y) = 3444;
    cout<<"The value of x is : "<<x<< "and value of y is : "<<y<<endl;
    return 0;
}

int sum(int a , int b){
    // Formal parameters a and b are taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}
void g(){
    cout<<"Hey , get lost";
}