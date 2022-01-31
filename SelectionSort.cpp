/******************************************************************************

// Selection sort algorithm
// To execute this snippet you can use https://www.onlinegdb.com/ and select C++

*******************************************************************************/
#include <iostream>

using namespace std;

// make sure swap function is before selection sort
void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[],int n){
    int i,j,min;
    for(i = 0; i < n-1; i++){
        
        // find the minimum element
        min = i;
        for(j = i+1; j < n; j++)
            if(arr[min] > arr[j])
                min = j;
        
        // swap the minimum element with element at index i
        swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int arr[] = {67, 53, 34, 86, 3};
    
    // find size of array
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // call selection sort
    selectionSort(arr, n);
    
    cout << "Sorted array: \n";
    
    // print the sorted array
    for(int i=0; i<n; i++)
        cout<< arr[i] <<" ";
        
    return 0;
}
