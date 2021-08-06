#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    char * arr;
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
void push(Stack *ptr , char value){
        ptr->top++;
        ptr->arr[ptr->top] =value;
}
char pop(Stack* ptr){
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
}
char stackTop(Stack *ptr){
    return ptr->arr[ptr->top];
}
int match(char a , char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    return 0;
}
    
int isOperator(char ch){
    if (ch=='*' || ch=='/' ||ch=='+'||ch=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
};
int precedence(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }
    else if (ch=='+' || ch=='-')
    {
        return 2;
    }
    else {
        return -1;
    }
};
string infixTopostfix(Stack *s, string infix){
    // Stack *postfix = new char(infix.length()+1);
    string postfix ="";
    // for (int i = 0; i < infix.length(); i++)
    int i=0; // Track infix traversal
    while(i!= infix.length())
    {
        if(!isOperator(infix[i])){
            // push(postfix,infix[i]);
            postfix += infix[i];
             i++;
        }
        else //if(isOperator(infix[i]))
        {
            while(!isEmpty(s) && precedence(infix[i]) <=precedence(stackTop(s))) {
                char val = pop(s);
                postfix += val;
            }
            push(s,infix[i]); 
            i++;
            // if (precedence(infix[i] > precedence(stackTop(s))))
            // {
            //     cout<<"I am here;";
            //     cout<<infix[i];
            //     push(s,infix[i]);
            //      i++;
            // }
            // else{
            //     char val = pop(s);
            //     postfix += val;
            //     // push(postfix,pop(s));
            // }   
        }
    }
    while(!isEmpty(s))
    {
        char val = pop(s);
        postfix +=val;
    }
    return postfix;
}

int main(){
    Stack st;
    Stack *s = &st;
    s->size=50;
    s->top=-1;
    s->arr = new char(s->size);
    // string express = "{4*(4+2)*[3/2]+{75+(97}";    //not matching
    // string express = "a*b-g/4";    
    string express = "x-y/z-k*d";    //even
    cout<<"Postfix of is : "<<infixTopostfix(s,express);
    

    return 0;
}