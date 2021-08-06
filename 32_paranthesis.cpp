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
void pop(Stack* ptr){
        char val = ptr->arr[ptr->top];
        ptr->top--;
}
int paranthesisCheck(Stack *s , string express){
    int countPush = 0;
    int countPop = 0;
    for (int i = 0; i <express.length(); i++){
        if(express[i]=='('){
            push(s ,express[i]);
            countPush +=1;
        }
        else if(express[i]==')'){
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
            countPop +=1;
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
    // string express = "7-(8(3*9)+11+12))-8)";   //Uneven
    string express = "7-((8(3*9)+11+(12))-8)";    //even
    // string express = "7*)64(";  //uneven
    // paranthesisCheck(s,express);

    if(paranthesisCheck(s,express)){
        cout<<"Matching"<<endl;
    }
    else{
        cout<<"Not matching"<<endl;
    }

    return 0;
}