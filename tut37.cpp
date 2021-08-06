#include<iostream>
using namespace std;

class shopItems{
    int id;
    float price;
    public:
    void setPrice(int a , float b){
        id =a;
        price = b;
    }
    void getPrice(){
        cout<<"Code for this item is "<<id<<endl;
        cout<<"Price for this item is "<<price<<endl;
    }
};
int main(){
    int size = 3;
    //int *ptr= &size;
    //int *pr = new int[20];



    //1. food
    //2.skincare
    //3.bath
    /*
      1   2   3
              ^     
              |
              |
              *ptr
      *ptrtemp

    */
    shopItems *ptr = new shopItems[3];
    shopItems *ptrtemp = ptr;
    int a;
    float b;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and Price of Items no : "<<i+1<<endl;
        cin>>a>>b;
        // (*ptr).setPrice(a,b);    OR
        ptr->setPrice(a,b);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        ptrtemp->getPrice();
        ptrtemp++;
    }
    
    return 0;
}