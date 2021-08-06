#include<iostream>
using namespace std;

class circularQueue{
    public:
    int size;
    int f;
    int r;
    int* arr;
};
int isFull(circularQueue *q){
    if ((q->r+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}
int isEmpty(circularQueue *q){
    if (q->r== q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(circularQueue*q, int val){
    if (isFull(q))
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Enqueue elements is : "<<val<<endl;
        q->r= (q->r+1)%q->size;
        q->arr[q->r]= val;
    }
}
int dequeue(circularQueue *q){
    int a=-1;
    if(isEmpty(q))
    {
        return a;
    }
    q->f = (q->f+1)%q->size;
    a=q->arr[q->f];
    return a;
}
int main(){
    circularQueue q;
    q.size=4;
    // 0 th index for f and r
    q.f=q.r = 0;
    q.arr = new int();

    //Enqueue the elements in queue
    enqueue(&q,44);
    enqueue(&q,70);
    enqueue(&q,56);

    //Dequeue the elements
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    cout<<"Dequeue value is "<<dequeue(&q)<<endl;
    enqueue(&q, 77);
    if(isFull(&q)){
        cout<<"Queue is full"<<endl;
    }
    if(isEmpty(&q)){
        cout<<"Queue is empty"<<endl;
    }

    return 0;
}