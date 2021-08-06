#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int * arr;
};

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    /*
    Stack s;
    s.size =50;
    s.top=-1;
    s.arr= new Stack();
    */

    Stack s;
    Stack *ptr = &s;
    ptr->size=5;
    ptr->top=-1;
    ptr->arr = new int(ptr->size);


    //Pushing elements manually
    // ptr->arr[0] =4;
    // ptr->top++;

    //Pushing elements in stacks
    int as;
    cout<<"Enter Elements"<<endl;
    for (int i = 0; i < ptr->size; i++)
    {
        cin>>as;
        ptr->arr[i]=as;
        ptr->top++;
    }
    
    //Checking for empty stack
    if(isEmpty(ptr)){
        cout<<"The stack is empty";
    }
    
    //checking for full stack
    if(isFull(ptr))
    {
        cout<<"Stack is full";
    }
    // else{
    //     cout<<"The stack is not empty";
    // }
    
    return 0;
}