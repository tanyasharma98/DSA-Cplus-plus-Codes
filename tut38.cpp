#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setValue(int a)
    void setValue(int a)
    {
        this->a = a;
        // return *this;
    }
    void getValue()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    // a.setValue(5).getValue();
    a.setValue(5);
    a.getValue();
    return 0;
}