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

void countsort(int *A, int n)
{
    //for max element in array
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    int i, j;
    int *count = new int(max + 1);

    //Initializing the count array
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    //Incrementing the corresponding index in count array
    for (int i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    i = 0; // counter for count array
    j = 0; // counter for given array A

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[] = {2, 53, 11, 7, 5, 99};
    int n = 6;
    printArr(A, n);
    countsort(A, n);
    printArr(A, n);
    return 0;
}