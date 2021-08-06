#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
};
void displayLinkedlist(Node * ptr){
        while(ptr!= NULL){
        cout<<"The element is "<<ptr->data<<endl;
        ptr= ptr->next;
        }
    }
int main(){

    Node * head;
    Node * second;
    Node * third;
    Node * fourth;

    //Allocate memory for nodes in linkedlist in heap 
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    //Link First and Second Node
    head->data= 7;
    head->next= second;

    //Link Second and Third
    second->data =14;
    second->next = third;

    //Link  Third and fourth
    third->data =100;
    third->next = fourth;

    //Terminating link with Fourth node
    fourth->data =40;
    fourth->next =NULL;

    displayLinkedlist(head);

    return 0;
}