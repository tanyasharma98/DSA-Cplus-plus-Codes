#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void displayCircular(Node *ptr)
{
    Node *p = ptr; //head
    do
    {
        cout << "Element is : " << p->data << endl;
        p = p->next;
    } while (p != ptr);
}

//Insertion At the beginning of the list
Node *insertionBeginning(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;

    Node *p = head->next;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}


Node * insertionAtend(Node * head, int data){
    Node * ptr = new Node();
    ptr->data = data;

    Node * p = head->next;
    while (p->next != head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next= head;
    return head;
}
int main()
{
    Node *head;
    Node *first;
    Node *second;
    Node *third;

    //allocating memory in heap
    head = new Node();
    first = new Node();
    second = new Node();
    third = new Node();

    //Circular Linked List
    head->data = 11;
    head->next = first;

    first->data = 22;
    first->next = second;

    second->data = 33;
    second->next = third;

    //Circularly pointing toward head
    third->data = 44;
    third->next = head;

    cout << "list before insertion" << endl;
    displayCircular(head);

    //list after insertion
    cout << "list after insertion" << endl;
    // head = insertionBeginning(head, 99);
    // head = insertionBeginning(head, 1000);
    // head = insertionBeginning(head, 65);


    head= insertionAtend(head, 55);
    head= insertionAtend(head, 66);
    displayCircular(head);
    return 0;
}