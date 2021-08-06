#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *top = NULL;
void displayLinkedlist(Node * ptr){
        while(ptr!= NULL){
        cout<<"The element is "<<ptr->data<<endl;
        ptr= ptr->next;
        }
    }
int isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(Node *top)
{
    Node *ptr = new Node();
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Node * push(Node * top, int value)
{
    if(isFull(top))
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        Node *n = new Node();
        n->data= value;
        n->next=top;
        top=n;
        return top;
    }
}
int pop(Node * tp)
{
    if(isEmpty(tp))
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        Node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int main()
{
    
    top = push(top, 30);
    top = push(top, 65);
    top = push(top, 2);
    top = push(top, 97);
    int element = pop(top);
    cout<<"Popped element is "<<element<<endl;
    displayLinkedlist(top);
    return 0;
}