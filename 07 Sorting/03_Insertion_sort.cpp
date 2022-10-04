#include<bits/stdc++.h>
using namespace std;

// worst case: O(n^2) when array is sorted in reverse order
// best case: O(n) when array is sorted

// it is inplace and stable
// used for small and almost sorted arrays

void Insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 and arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{   
    int arr[] = {10, 2, 5, 16, 22, 4};
    int n=6;
    Insertion_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}