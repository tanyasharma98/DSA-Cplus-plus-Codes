#include<iostream>
#include<fstream>
using namespace std;
/* 
    These are some useful classes for working with files in C++
    1  fstreambase
    2  ifstream --> derived from fstreambase
    3  ofstream --> derived from fstreambase
*/
int main(){
    string s = "tanya helo";
    string st;
    //Opening File using constructor and writing  it
    ///ofstream out("sample44.txt");// write Operation
    // out<<s;



    //Opening File using constructor and reading  it
    ifstream in("sample44b.txt");// Readinf Opeartion
    // in>>st;
    getline(in, st);
    cout<<st;

    return 0;
}