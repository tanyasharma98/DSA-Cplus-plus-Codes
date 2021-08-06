#include <iostream>
using namespace std;

void printArr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void merge(int *A, int low, int mid, int high)
{
    int i, j, k, B[high+1];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    //Coping remaining elements of A[i]
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    //Coping remaining elements of A[j]
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int b = low; b <=high; b++)
    {
        A[b] =B[b];
    }
}
void mergeSort(int *A,int low, int high){
    int mid;
    if(low<high){
        mid = (low + high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A, low, mid, high);
    }
}
int main()
{
    int A[] = {2, 53, 11, 7, 5, 99};
    int n = 6;
    printArr(A, n);
    mergeSort(A,0,n-1);
    printArr(A, n);
    return 0;
}