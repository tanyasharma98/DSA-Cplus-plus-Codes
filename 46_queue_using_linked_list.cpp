#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
};
Node * f= NULL;
Node * r= NULL;
void displayLinkedlist(Node * ptr){ 
        while(ptr!= NULL){
        cout<<"The element is "<<ptr->data<<endl;
        ptr= ptr->next;
        }
    }
void enqueue(int val){
    Node * n = new Node();
    if(n==NULL){
        cout<<"Queue is Full"<<endl;
    }
    else{
        n->data= val;
        n->next= NULL;
        if (f==NULL)
        {
            f=r=n;
        }
        else{
        r->next=n;
        r=n;
        }
    }
}
int dequeue(){
    Node * ptr = f;
    int val=-1;
    if(f==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        f= f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int main(){
    displayLinkedlist(f);
    cout<<"Dequeue element is "<<dequeue()<<endl;
    enqueue(23);
    enqueue(67);
    enqueue(88);
    displayLinkedlist(f);
    cout<<"Dequeue element is "<<dequeue()<<endl;
    cout<<"Dequeue element is "<<dequeue()<<endl;
    return 0;
}