#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
};

Node * createNode(int data){
    Node * n;
    n= new Node();
    n->data = data;
    n->left =NULL;
    n->right=NULL;
    return n;
}
int main(){

    // ==============================Long Process====
    //Constructing a node
    // Node * p;
    // p = new Node();
    // //Creating parent Node
    // p->data=5;
    // p->left=NULL;
    // p->right=NULL;

    // //Creating child node 
    // Node *p1 ;
    // p1= new Node();
    // p1->data=33;
    // p1->left=NULL;
    // p1->right =NULL;

    // //Creating second child node
    // Node * p2;
    // p2= new Node();
    // p2->data =99;
    // p2->left =NULL;
    // p2->right =NULL;

    //Linking the left and right to parent node
    // p->left=p1;
    // p->right=p2;


    // -----------------------------------------Easy Process for creating Node -----------
    Node *p = createNode(5);
    Node *p1 = createNode(44);
    Node *p2 = createNode(89);
    p->left=p1;
    p->right=p2;
    
    return 0;
}