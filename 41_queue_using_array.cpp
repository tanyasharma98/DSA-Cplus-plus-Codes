#include<iostream>
using namespace std;

class Queue{
    public:
    int size;
    int f;
    int r;
    int* arr;
};
int isFull(Queue *q){
    if (q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(Queue *q){
    if (q->r== q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(Queue *q, int val){
    if (isFull(q))
    {
        cout<<"Queue is full";
    }
    else{
        cout<<"Enqueue elements is : "<<val<<endl;
        q->r++;
        q->arr[q->r]= val;
    }
}
int dequeue(Queue *q){
    int a=-1;
    if(isEmpty(q))
    {
        return a;
    }
    q->f++;
    a=q->arr[q->f];
    return a;
}
int main(){
    Queue q;
    q.size=4;
    q.f=q.r = -1;
    q.arr = new int();

    //Enqueue the elements in queue
    enqueue(&q,44);
    enqueue(&q,70);
    enqueue(&q,56);
    enqueue(&q,56);


    //Dequeue the elements
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    if(isFull(&q)){
        cout<<"Queue is full";
    }
    if(isEmpty(&q)){
        cout<<"Queue is empty";
    }

    return 0;
}