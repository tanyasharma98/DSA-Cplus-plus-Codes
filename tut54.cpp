#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    // Map is an associative array
    map<string , int> mapString;
    mapString["Tanya"] =90;
    mapString["koli"] =40;
    mapString["sho-chi"] =70;
    
    map< string , int> :: iterator it;
    mapString.insert({{"fufu",30},{"siko",65}});
    for (it=mapString.begin(); it!=mapString.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<"The size of map is : "<<mapString.size()<<endl;
    cout<<"The max_size of map is : "<<mapString.max_size()<<endl;
    cout<<"The empty of map is : "<<mapString.empty()<<endl;
    return 0;
}