#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculator
{
    int a, b;

public:
    void set_Simplevalue()
    {
        cout << "Enter 1st value" << endl;
        cin >> a;
        cout << "Enter 2nd value" << endl;
        cin >> b;
    }
    void get_Simplevalue()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
    }
};
class scientificCalculator
{
    int a, b;

public:
    void set_Scientificvalue()
    {
        cout << "Enter 1st value" << endl;
        cin >> a;
        cout << "Enter 2nd value" << endl;
        cin >> b;
    }
    void get_Scientificvalue()
    {
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of cos(b) is " << cos(b) << endl;
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
        cout << "The value of tan(b) is " << tan(b) << endl;
    }
};
class hybridCalculator : public SimpleCalculator, public scientificCalculator
{
public:
    void display()
    {
        get_Simplevalue();
        get_Scientificvalue();
    }
};
int main()
{
    hybridCalculator h1;
    cout<<"Simple Calculator"<<endl;
    h1.set_Simplevalue();
    cout<<"Scientific Calculator"<<endl;
    h1.set_Scientificvalue();
    h1.display();
    return 0;
}