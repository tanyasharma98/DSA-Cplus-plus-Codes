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
int main(){
    Stack s;
    Stack *sp = &s;
    sp->size=5;
    sp->top=-1;
    sp->arr = new int(sp->size);
    cout<<"Created"<<endl;
    cout<<"Before Pushing Value to stack:Empty "<<isEmpty(sp)<<endl;
    cout<<"Before Pushing Value to stack:Full "<<isFull(sp)<<endl;
    push(sp, 60);
    push(sp, 434);
    push(sp, 86);
    push(sp, 2);
    push(sp, 99);
    push(sp, 40); // Stack Overflow Here
    cout<<"After Pushing Value to stack:Empty "<<isEmpty(sp)<<endl;
    cout<<"After Pushing Value to stack:Full "<<isFull(sp)<<endl;

    cout<<pop(sp)<<" is popped from stack"<<endl; //Lifo
    cout<<pop(sp)<<" is popped from stack"<<endl; 
    cout<<pop(sp)<<" is popped from stack"<<endl;

    return 0;
}