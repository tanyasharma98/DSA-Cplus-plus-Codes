#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    //Function Objects (Functor)--- Functions wrapped in a class so that it is available like an object
    int arr[]={43, 5, 23, 52 ,1, 0};
    // sort(arr, arr+3); //sorting only 3 elements because of arr+3
    sort(arr, arr+5); 
    sort(arr, arr+5, greater<int>()); // reverse sort 
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}