
/******************************************************************************
 
// Bubble sort algorithm
// To execute this snippet you can use https://www.onlinegdb.com/ and select C++

*******************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

// make sure swap function is before bubble sort
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}


void bubbleSort(int arr[],int n){
    int i, j;
    for(i=0;i<n-1;i++){
        // you can even go up to n-1 but n-i-1 is enough 
        // because the last i elements will already be sorted
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
             // swap the addresses of adjacent elements
                 swap(&arr[j], &arr[j+1]); 
        }
    }
}

int main()
{
    int arr[] = {56, 98, 78, 44, 32};
    
    // find size of array
    int n = sizeof(arr)/sizeof(arr[1]);
    
     // call bubble sort
    bubbleSort(arr,n);
    
    cout<<"Sorted array:  ";
    
    // print the sorted array
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
        
    return 0;
}
