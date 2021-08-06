#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
};
void displayLinkedlist(Node * ptr){
        while(ptr!= NULL){
        cout<<"The element is "<<ptr->data<<endl;
        ptr= ptr->next;
        }
    }

//Case-1
Node * deletionBeginning(Node *head){
    Node * p = head;
    head = p->next;
    free(p);
    return head;
}

//Case-2
Node * deletionAtend(Node *head){
    Node *p = head;
    Node *q = p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//Case-3
Node * deletionAtindex(Node *head, int index){
    Node *p = head;
    Node *q = p->next;
    int i =0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next= q->next;
    free(q);
    return head;
}

//Case-4
Node * deletionValue(Node *head, int value){
    Node *p= head;
    Node *q = p->next;
    while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
   
    return head;
}
//Case -4

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
    cout<<"Linked List Before Deletion"<<endl;
    displayLinkedlist(head);
    cout<<"Linked List After Deletion"<<endl;

    //Deletion at beginning of linked list
    // head = deletionBeginning(head);

    //Deletion at the end of the list
    // head = deletionAtend(head);

    //Deletion at given index
    // head = deletionAtindex(head,2);

    // Deleting the given value in list
    head = deletionValue(head,7);
    displayLinkedlist(head);
    
    return 0;
}