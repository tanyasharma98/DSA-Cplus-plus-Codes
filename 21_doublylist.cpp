#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
};

void displayDoubly(Node *ptr){
    Node * p = ptr;
    Node *q = ptr->next;
    cout<<"Displaying Ascending Order"<<endl;
    do
    {
    cout<<"The element is : "<<p->data<<endl;
    p=p->next;
    q=q->next;
    } while (q != NULL);
    cout<<"The element is : "<<p->data<<endl;
    cout<<"Displaying Descending Order"<<endl;
    if (q==NULL)
    {
        while(p!= NULL){
        cout<<"Element is : "<<p->data<<endl;
        p=p->prev;
        p->next=p->prev;
    }
    }
}
int main(){
    Node * N1;
    Node * N2;
    Node * N3;
    Node * N4;

    //Allocation of memory
    N1 = new Node();
    N2 = new Node();
    N3 = new Node();
    N4 = new Node();

    //Linking Node
    N1->prev= NULL;
    N1->data= 10;
    N1->next= N2;

    N2->prev=N1;
    N2->data=20;
    N2->next=N3;

    N3->prev= N2;
    N3->data=30;
    N3->next= N4;

    N4->prev=N3;
    N4->data=40;
    N4->next=NULL;

    displayDoubly(N1);
    return 0;
}