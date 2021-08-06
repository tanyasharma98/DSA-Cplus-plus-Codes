#include<iostream>
using namespace std;

class DEqueue{
    public:
    int size;
    int f;
    int r;
    int* arr;
};
int isFULL(DEqueue *q){
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
};
int isEmpty(DEqueue *q){
    if(q->f==-1){
        return 1;
    }
    return 0;
};

void print(DEqueue *q){
    for (int i =q->f+1; i <=q->r; i++)
    {
        cout<<q->arr[i]<<endl;
    }
    
};
void initialize(DEqueue *q, int val){
    if(q->f== -1 && q->r==-1){
        q->r++;
        q->arr[q->r]= val;
    }
    else{
    q->r++;
    q->arr[q->r]= val;
    }
};


void enqueueF(DEqueue *q, int val){
    if(q->f==-1){
        cout<<"Can;t enqueue in front"<<endl;
    }
    else{
        q->arr[q->f]= val;
        q->f--;
    }
};
void enqueueR(DEqueue *q, int val){
    if(isFULL(q)){
        cout<<"Queue is full"<<endl;
    }
    else{
    q->r++;
    q->arr[q->r]= val;
    }
};
int dequeueF(DEqueue *q){
    int a=-1;
    q->f++;
    if(isEmpty(q)){
        return a;
    }
    else{
        a=q->arr[q->f];
        return a;
    }
};
int dequeueR(DEqueue *q){
    int a =-1;
    if(q->r < q->size-1){
        a=q->arr[q->r];
        q->r--;
        return a;
    }
    else{
        return a;
    }
};
int main(){
    DEqueue q;
    q.f = q.r =-1;
    q.size =6;
    q.arr= new int();   
    initialize(&q,77);
    initialize(&q,33);
    initialize(&q,87);
    initialize(&q,10);
    cout<<"Dequeue element from front is "<<dequeueF(&q)<<endl;
    cout<<"Dequeue element from front is "<<dequeueF(&q)<<endl;
    enqueueF(&q,65);
    enqueueR(&q,9);
    cout<<"Dequeue element from rare is "<<dequeueR(&q)<<endl;
    // enqueueF(&q,3);
    print(&q);
    return 0;
}