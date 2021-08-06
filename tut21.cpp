#include<iostream>
using namespace std;

class BankDeposite{
    int principal;
    int year;
    float interestRate;
    float returnRate;
    public:
    BankDeposite(){}
    BankDeposite(int p , int y, float ir); // ir  can be a value like 0.04 
    BankDeposite(int p , int y, int ir); // ir  can be a value like 14 
    void show();
};
BankDeposite :: BankDeposite(int p, int y , float ir){
    principal = p;
    year = y;
    interestRate = ir;
    returnRate = principal;
    for (int i = 0; i < y; i++)
    {
        returnRate = returnRate * (1+interestRate);
    }
    
}
BankDeposite :: BankDeposite(int p, int y , int ir){
    principal = p;
    year = y;
    interestRate = float(ir)/100;
    returnRate = principal;
    for (int i = 0; i < y; i++)
    {
        returnRate = returnRate * (1+interestRate);
    }
}
void BankDeposite :: show(){
    cout<<"Your Principal Amount is :"<<principal<<endl;
    cout<<"Your Principal Amount after "<<year<<" year with interest rate of "<<interestRate<<" is : "<<returnRate<<endl;
}

int main(){
    BankDeposite bd1 , bd2, bd3;
    int p,y;
    float r;
    int R;
    bd3.show();
    cout<<"Enter the value of p, y, r :"<<endl;   
    cin>>p>>y>>r;
    bd1 = BankDeposite(p,y,r);
    bd1.show();
    cout<<"Enter the value of p, y, R :"<<endl;   
    cin>>p>>y>>R;
    bd2 = BankDeposite(p,y ,R);
    bd2.show();
    return 0;
}