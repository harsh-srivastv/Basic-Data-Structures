#include<bits/stdc++.h>
using namespace std;
// lomuto partition does the partition of the array in O(n) time and O(n) auxiliary space
void lomuto_partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // always take last element as pivot element.
    // if pivot is not the last element then swap it with the last element of the array
    int i=low-1;
    for(int j=low; j<=high-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[high]);
}

int main()
{
    int arr[] = {10, 2, 5, 16, 22, 15};
    int low=0, high=5;
    lomuto_partition(arr, low, high);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}