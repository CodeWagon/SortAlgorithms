/******************************************************************************
// Insertion sort algorithm
// To execute this snippet you can use https://www.onlinegdb.com/ and select C++
*******************************************************************************/
#include <iostream>

using namespace std;

void insertionSort(int arr[],int n){
    int i,j,key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        // while loop breaks as soon as we find an element smaller 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        }
    }

int main()
{
    int arr[] = {67, 53, 34, 86, 3};
    
    // find size of array
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // call insertion sort
    insertionSort(arr, n);
    
    cout << "Sorted array: \n";
    
    // print the sorted array
    for(int i=0; i<n; i++)
        cout<< arr[i] <<" ";
        
    return 0;
}
