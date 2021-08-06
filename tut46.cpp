#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    // ofstream out;
    // out.open("sample44.txt");
    // out<<"Hello user\n";
    // out<<"This is me world";
    // out<<"what about you";    
    // out.close();

    ifstream in;
    in.open("sample44.txt");
    string s,st,stt;
    // in>>s>>st>>stt;
    // cout<<s<<st<<stt;

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}