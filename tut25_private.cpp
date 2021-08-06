#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
class Derived : Base
{ // Class is being derived publically
    int data3;

public:
    void Process();
    void Display();
};
void Derived::Process()
{
    setData();
    data3 = data2 * getData1();
}
void Derived ::Display()
{
    cout << "The value of data 1 is : " << getData1() << endl;
    cout << "The value of data 2 is : " << data2 << endl;
    cout << "The value of data 3 is : " << data3 << endl;
}
int main()
{
    Derived d1;
    // d1.setData();
    d1.Process();
    d1.Display();
    return 0;
}
