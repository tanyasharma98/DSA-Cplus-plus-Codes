#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printNum()
    {
        cout << "The complex value is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(2, 3);
    c1.printNum();
    Complex c2(8);
    c2.printNum();
    Complex c3;
    c3.printNum();
    return 0;
}