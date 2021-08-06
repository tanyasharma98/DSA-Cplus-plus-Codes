//Birthday Card
#include<iostream>
using namespace std;

int main(){
    int values;
    cin>>values;
    int n;
    cin>>n;
    int arr[n];


    for (int i = 1; i < values+1; i++)
    {
        arr[i]=i;
    }
    
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < values+1; i++)
        {
            if(j%arr[j]){
                arr[j]=j;
                arr[j]=j;
            }
        }
        cout<<arr[i];
    }
    

    return 0;
}