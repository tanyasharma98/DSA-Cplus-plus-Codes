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

//Case-1
Node * insertBegining(Node * head){
    Node *ptr = new Node();
    int data;
    cout<<"Enter Data to enter in begining"<<endl;
    cin>>data;
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

//Case -2
Node * insertAtindex(Node * head, int data, int index){
    Node *ptr = new Node();
    Node * p = head;
    int i=0;
    while(i!=index-1){
       p = p->next;
       i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


Node * insertAtend(Node *head , int data){
    Node *ptr = new Node();
    ptr->data=data;

    Node *p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    return head;
}

Node * insertAfterNode(Node *head , Node * previousNode, int data){
    Node * ptr = new Node();
    ptr->data =data;

    ptr->next=previousNode->next;
    previousNode->next=ptr;
    return head;
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
    cout<<"Linked List Before Insertion"<<endl;
    displayLinkedlist(head);
    cout<<endl;
    //Insertion at Beginning of Linked List
    // head = insertBegining(head);

    //Insertion using index or in between nodes
    // head = insertAtindex(head, 88,1);

    //Insertion at the end of list
    cout<<"Linked List After Insertion"<<endl;
    // head = insertAtend(head, 7000);


    //Insertion After given Node
    head = insertAfterNode(head, second,59);
    displayLinkedlist(head);
    return 0;
}