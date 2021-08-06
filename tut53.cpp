#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator itr;
    for (itr =lst.begin(); itr!=lst.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

}
int main(){
    // 5 2 7 8
    list<int> list1; //list of zero length

    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    display(list1);

    //Removing elements from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(1);
    // display(list1);

    //Sorting elements
    // list1.sort();
    // display(list1);

    //Reversing the list
    // list1.reverse();
    // display(list1);

    list<int> list2(3); //Empty list with 3 elements
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 50;
    iter++;
    *iter = 6;
    iter++;
    *iter =80;
    display(list2);
    

    //Merging Two list
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"Merging list2 in list1 : ";
    // display(list1);
    
    //Swap
    list1.swap(list2);
    cout<< "Swapped list 1 :";
    display(list1);   
    cout<< "Swapped list 2 :";
    display(list2);
    return 0;
}