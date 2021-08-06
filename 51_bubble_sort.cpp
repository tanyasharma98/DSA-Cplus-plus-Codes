#include <iostream>
using namespace std;

void printArr(int *Arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}
void bubbleSortAdaptive(int *Arr, int n)
{
     int temp;
    int isSorted=0;
    for (int i = 0; i <= n-1; i++) // For number of pass
    {
        cout<<"Workin on pass "<<i+1<<endl;
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(Arr[j]>Arr[j+1]){
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }  
}
void bubbleSort(int *Arr, int n)
{
     int temp;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        cout<<"Workin on pass "<<i+1<<endl;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(Arr[j]>Arr[j+1]){
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }  
}
int main()
{
    int Arr[] = {2, 53, 11, 7, 5,99};
    // int Arr[]={1,2,3,4,5,6};
    int n = 6;
    printArr(Arr, n);
    bubbleSort(Arr, n);
    // bubbleSortAdaptive(Arr, n);
    printArr(Arr, n);
    return 0;
}