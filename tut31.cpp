#include<iostream>
using namespace std;
/*
Inheritance
Student--test
student--sports
test---result
sports---result
*/

class Student{
    protected:
    int roll_no;
    public:
    void set_roll(int x){
        roll_no = x;
    }
    void get_roll(){
        cout<<"Your roll no. is : "<<roll_no<<endl;
    }
};
class Test: virtual public Student{
    protected:
    int maths;
    int physics;
    public:
    void set_marks(int m1, int m2){
        maths = m1;
        physics =m2;
    }
    void get_marks(){
        cout<<"Your marks are : "<<endl
        <<"Your maths marks are : "<<maths<<endl
        <<"Your physics marks are : "<<physics<<endl;
    }
};
class Sports:  public virtual Student{
    protected:
    float scores;
    public:
    void set_score(float sc){
        scores = sc;
    }
    void get_score(){
        cout<<"Your scores are : "<<scores<<endl;
    }
};
class Results:public Sports, public Test{
    protected: 
    float total;
    public:
    void all_result(){
        total = maths+physics+ scores;
        get_roll();
        get_marks();
        get_score();
        cout<<"Your total Score is "<<total<<endl;
    }
};
int main(){
    Results tanya;
    tanya.set_roll(3900);
    tanya.set_marks(90.5, 98.9);
    tanya.set_score(10);
    tanya.all_result();   
    return 0;
}