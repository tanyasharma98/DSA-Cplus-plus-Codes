#include<iostream>
using namespace std;

class Shop{
    int item[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"Enter Id number of item : "<<counter+1<<endl;
    cin>>item[counter];
    cout<<"Enter Price of the item : "<<item[counter]<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout<<"Price of your Item id("<<item[i]<<") is : "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    int a;
    cout<<"Enter Number of items you want to add"<<endl;
    cin>>a;
    Shop MeMe;
    MeMe.initCounter();
    for (int i = 0; i < a; i++)
    {
        /* code */
        MeMe.setPrice();
    }
    MeMe.displayPrice();
    return 0;
}