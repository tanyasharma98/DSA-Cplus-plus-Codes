#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying vector";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
        cout<<endl;
   
}
int main(){
    //Ways to create Vector

    vector<int>vec1; //Zero length Integer Vector
    // int element, size;
    // cout<<"Enter size of vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     cout<<"Enter a  number to add in vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // // vector<int> :: iterator iter = vec1.end();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 800);
    // vec1.insert(iter+1, 800);
    // vec1.insert(iter+1,5000,800);  //5 copies inserted
    // vec1.insert(iter-1, 800);
    // display(vec1);


    vector<char> vec2(4); //4 - elements char vector
    // vec2.push_back('5');
    // display(vec2);
    vector<char> vec3(vec2); // 4-elements vectore using vec2
    // display(vec3);
    vector<int> vec4(6,19); //6-elements vector
    display(vec4);
    

    
    return 0;
}