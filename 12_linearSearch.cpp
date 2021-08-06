#include<iostream>
using namespace std;

int linearSearch(int arr[], int size , int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int elemnt){
    int low, high,mid;
    low=0;
    high= size-1;

    while(low<=high){
    mid = (low+high)/2;
    if(arr[mid]==elemnt){
        return mid;
    }
    if(arr[mid]<elemnt){
        low= mid+1;
    }
    if(arr[mid]>elemnt){
        high= mid-1;
    }
    }
    return -1;
}
int main(){
    //Unsorted array Linear Search
    // int arr[]={25,35,23, 5, 2, 3, 21, 90,4,7,90};
    // int size = sizeof(arr)/sizeof(int);
    // int element=3;
    // int searching = linearSearch(arr, size,element);
    // cout<<"The number "<<element<<" found at index : "<<searching;


    //Sorted array Binary Search
    int arr[]={25,35,43, 55, 62, 73, 81, 90};
    int size = sizeof(arr)/sizeof(int);
    int element=25;
    int searching = binarySearch(arr, size,element);
    cout<<"The number "<<element<<" found at index : "<<searching;

    return 0;
}