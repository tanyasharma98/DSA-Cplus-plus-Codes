#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int * arr;
};

int isFull(Stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
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
void push(Stack *ptr , int value){
    if(isFull(ptr)){
        cout<<"Stack Overflow!! Cannot push "<<value<<" in stack"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] =value;
    }
}
int pop(Stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(Stack * ptr, int index){
    int arrayInd = ptr->top-index+1;
    if(arrayInd<0){
        cout<<"Not a valid Position"<<endl;
        return -1;
    }
    else{
        return ptr->arr[arrayInd];
    }
}
int stackTop(Stack *ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(Stack *ptr){
    return ptr->arr[0];
}

int main(){
    Stack s;
    Stack *sp = &s;
    sp->size=50;
    sp->top=-1;
    sp->arr = new int(sp->size);
    push(sp, 60);
    push(sp, 434);
    push(sp, 86);
    push(sp, 2);
    push(sp, 99);
    push(sp, 209);
    //Printing values from stack
    //Intializing position from 1
    for (int i = 1; i<=sp->top+1; i++)
    {
        cout<<"The value at position "<<i<<" is "<<peek(sp,i)<<endl;
    }


    cout<<"Top most value in stack is "<<stackTop(sp)<<endl;   
    cout<<"Bottom most value in stack is "<<stackBottom(sp)<<endl;   
    return 0;
}