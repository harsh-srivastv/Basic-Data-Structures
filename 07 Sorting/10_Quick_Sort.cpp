#include<bits/stdc++.h>
using namespace std;

// divide and conquer algo
// worst tome is O(n^2)
// average and best time is O(nlogn)
// it is considered faster because of the following cases:
//      1. in place
//      2. cache firendly
//      3. tail recursion
// partition is key function

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

void quick_sort(int arr[], int l, int h){
    if (l<h){
        int p = partition(arr, l, h);
        quick_sort(arr, l, p-1);
        quick_sort(arr, p+1, h);
    }
}

int main()
{
    int arr[] = {10, 2, 5, 16, 22, 15};
    int low=0, high=5;
    quick_sort(arr, low, high);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}