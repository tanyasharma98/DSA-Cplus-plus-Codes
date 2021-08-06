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
void preOrder(Node * root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(Node * root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}
void inOrder(Node * root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
int main(){
    Node *p = createNode(4);
    Node *p1 = createNode(1);
    Node *p2 = createNode(6);  
    Node *p3 = createNode(5);  
    Node *p4 = createNode(2);  

    //-----------Tree
    /*          4
               /  \
              1    6
             / \  
            5   2 
    */
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    cout<<"Preorder :"<<endl;
    preOrder(p);
    cout<<endl;
    cout<<"Postorder :"<<endl;
    postOrder(p);
    cout<<endl;
    cout<<"Inorder :"<<endl;
    inOrder(p);
    return 0;
}