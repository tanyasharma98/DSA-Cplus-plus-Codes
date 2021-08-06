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
int paranthesisCheck(Stack *s , string express){
    int countPush = 0;
    int countPop = 0;
    char ch ;
    for (int i = 0; i <express.length(); i++){
        if(express[i]=='(' || express[i]=='[' || express[i]=='{'){
            push(s ,express[i]);
            countPush +=1;
        }
        else if(express[i]==')' || express[i]==']' ||express[i]=='}'){
            if (isEmpty(s))
            {
                return 0;
            }
            ch=pop(s);
            countPop +=1;
            if(!match(ch,express[i])){
                return 0;
            }
            }
            }
    cout<<"Toatal push "<<countPush<<endl;  
    cout<<"Toatal pop "<<countPop<<endl;  

    if (isEmpty(s))
    {
        return 1;
    }
    else{
        return 0;
    }
    
    }    

int main(){
    Stack st;
    Stack *s = &st;
    s->size=50;
    s->top=-1;
    s->arr = new char(s->size);
    // string express = "{4*(4+2)*[3/2]+{75+(97}";    //not matching
    string express = "{a*b(45)/d)}";    //even

    if(paranthesisCheck(s,express)){
        cout<<"Pranthesis Balanced"<<endl;
    }
    else{
        cout<<"parenthesis Not Balanced"<<endl;
    }

    return 0;
}