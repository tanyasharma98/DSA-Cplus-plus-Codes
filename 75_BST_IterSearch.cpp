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
int isBST(Node * root){
    static Node * prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

Node * iterSearch(Node * root, int key){
    while (root!=NULL)
    {
    if (key== root->data)
    {
        return root;
    }
    if (key< root->data)
    {
        root = root->left;
    }
    else if (key>root->data)
    {
        root= root->right;
    }
    }
    return NULL;
}
int main(){
    Node *p = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(6);  
    Node *p3 = createNode(1);  
    Node *p4 = createNode(4);  

    //-----------Tree
    /*          5
               /  \
              3   6
             / \  
            1   4
    */
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    Node *n = iterSearch(p,3);
    if(n!=NULL){
        cout<<"found : "<<n->data<<endl;
    }
    else{
        cout<<"NOT found"<<endl;
    }
    return 0;
}