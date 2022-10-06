#include<bits/stdc++.h>
using namespace std;

// maxheapify returns sorted array in increasing order
// minheapify returns sorted array in decreasing order

// tihs function re-arranges the heap by comparing the root, left, right values 
// and make the largest value among them as the root
void maxheapify(int arr[], int n, int i){
    int largest = i, left = 2*i+1, right = 2*i+2;
    if(left < n and arr[left]>arr[largest]) largest = left;
    if(right < n and arr[right]>arr[largest]) largest = right;
    if(largest != i){
        swap(arr[largest], arr[i]);
        maxheapify(arr, n, largest);
    }
}
// this function creates the heap which is later converted to max heap using heapify
// (n-2)/2 gives the parent node of the last node
void build_heap(int arr[], int n){
    for(int i=(n-2)/2; i>=0; i--){
        maxheapify(arr, n, i);
    }
}

void heap_sort(int arr[], int n){
    build_heap(arr, n);
    for(int i=n-1;i>0;i--){
        swap(arr[0], arr[i]);
        maxheapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {10, 2, 5, 16, 22, 15};
    int n=6;
    heap_sort(arr, n);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}