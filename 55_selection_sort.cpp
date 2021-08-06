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
void selectionSort(int *Arr, int n)
{
    //loop for pass (n-1) =5
    int indexOfmin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexOfmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j] < Arr[indexOfmin])
            {
                indexOfmin = j;
            }
        }
        //swapping elements
        temp = Arr[i];
        Arr[i] = Arr[indexOfmin];
        Arr[indexOfmin] = temp;
    }
}
int main()
{
    int Arr[] = {2, 53, 11, 7, 5, 99};
    int n = 6;
    printArr(Arr, n);
    selectionSort(Arr, n);
    printArr(Arr, n);
    return 0;
}