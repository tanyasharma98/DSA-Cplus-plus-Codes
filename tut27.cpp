#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int x);
    void get_roll_number();
};
void Student ::set_roll_number(int x)
{
    roll_number = x;
}
void Student ::get_roll_number()
{
    cout << "Your roll number is : " << roll_number << endl;
}

class Exams : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p);
    void get_marks();
};
void Exams::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exams ::get_marks()
{
    cout << "Your marks in maths are : " << maths << endl;
    cout << "Your marks in physics are : " << physics << endl;
}
class Result : public Exams
{
protected:
    int percentage;

public:
    void get_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is : " << (maths + physics) / 2 << " %" << endl;
    }
};

int main()
{
    /*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */
    Result tanya;
    tanya.set_roll_number(48);
    tanya.set_marks(99, 100);
    tanya.get_result();
    return 0;
}