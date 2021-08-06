#include<iostream>
using namespace std;

void display(int arr[] , int size){
    if (size<100)
    {
        //Code for Traversing
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    else{
    cout<<"Insertion Failed";
    }
    cout<<endl;    
}
void instSorting(int arr[], int size, int element, int capacity, int index){
    if (size>= capacity){
        
        exit(1);
    }
    //Code for insertion
    for (int i = size-1 ; i >= index ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}
int main(){
    // int size = 400;
    int size = 4;
    int arr[100] ={7,21,32,80};
    display(arr, size);
    int element = 45, index =1;
    size +=1;
    instSorting(arr , size , element, 100, index);
    display(arr,size);
    return 0;
}