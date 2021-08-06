#include<iostream>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title =s;
        rating =r;
    }
    // virtual void display(){cout<<"Bogus Code";} ---------------5 th rule
    virtual void display(){}
};
class cwhVideo:public CWH{
    protected:
    float videoLength;
    public:
    cwhVideo(string s, float r, float vl):CWH(s, r){
        videoLength = vl;
    }
    void display(){
        cout<<"The title of video channel is "<<title<<endl;
        cout<<"The rating of video cahnnel is "<<rating<<" out of 5 ."<<endl;
        cout<<"The length of this video is "<<videoLength<<" mins"<<endl;
    }
};
class cwhText:public CWH{
    protected:
    int words;
    public:
    cwhText(string s, float r, int wc):CWH(s, r){
        words= wc;
    }
    void display(){
        cout<<"The title of Text channel is "<<title<<endl;
        cout<<"The rating of Text cahnnel is "<<rating<<" out of 5 "<<endl;
        cout<<"The word count is "<<words<<" words"<<endl;
    }
};
int main(){
    string title ="Tanya Tuts";
    float rating = 4.9;
    float length = 9.8;
    int words =609;

    //Displaying video content
    cwhVideo video(title, rating,length);
    // video.display();

    //Displaying Text Content
    cwhText Text(title, rating,words);
    // Text.display();


    //Using Pointers

    CWH * pt[2];
    pt[0]= &video;
    pt[1]= &Text;

    pt[0]->display();
    pt[1]->display();
    return 0;
}

/*
Rules for virtual functions
1) They cannot be static
2) They are accessed by object pointers
3) Virtual functions can be a friend of another class
4) A virtual function in the base class might not be used.
5) If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/