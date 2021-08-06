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
void insertBST(Node * root, int key){
   Node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           cout<<"Cannot insert "<<key<<" , already in BST ";
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   Node * New = createNode(key);
   if(key<prev->data){
       prev->left = New;
   }
   else{
       prev->right = New;
   }
}

Node * inorderPredecesor(Node * root){
    root = root->left;
    while (root->right != NULL)
    {
        root=root->right;
    }
    return root;
    
}
Node * deleteNode(Node * root , int value){
    if(root==NULL){
        return NULL;
    }
    if (root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    
    //Searching for the node to be deleted
    if(value<root->data){
        root->left =deleteNode(root->left, value);
    }
    else if(value>root->data){
        root->right=deleteNode(root->right,value);
    }
    else{
        Node * iPre = inorderPredecesor(root);
        root->data = iPre->data;
        root->left= deleteNode(root->left,iPre->data);
    }
    return root;
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
    
    inOrder(p);
    deleteNode(p,5);
    cout<<endl;
    // cout<<"Root data is "<<p->data<<endl;
    inOrder(p);
    return 0;
}