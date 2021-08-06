#include<iostream>
using namespace std;

void display(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}
void delSorting(int arr[], int size,int index){
    if (index >size){
        cout<<"Deletion Failed";       
        exit(1);
    }
    for (int i = index ; i < size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
}
int main(){
    int size = 4;
    int arr[100] ={7,21,32,80};
    display(arr, size);
    int element = 45, index =1;
    size = size-1;
    delSorting(arr , size ,index);
    display(arr,size);
    return 0;
}