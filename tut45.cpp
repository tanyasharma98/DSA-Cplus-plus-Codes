#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with tout stream
    ofstream tout("sample44.txt");
    cout<<"Enter your name"<<endl;

    //Creating a string and taking name from the user as input 
    string name;
    cin>>name;

    //Writing the string to the connected file
    tout<<"My name is "<<name;
    tout.close();
    ifstream tin("sample44.txt");
    string content;
    // tin>>content;
    getline(tin,content); // to get characters after space
    cout<<content;
    tin.close();
    return 0;
}