#include<bits/stdc++.h>
using namespace std;

// it is a divide and conquer algorithm
// stable algorithm
// takes O(logn) and O(n) aux space
// well suited for linked list takes O(1) aux space
// used in external sorting
// gets out-performed by quick sort

/*void merge(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m and j<n){
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}*/

void merge(int a[], int low, int mid, int high)
{
    // setting up auxilary arrays
    int n1 = mid-low+1, n2 = high-mid;
    int left[n1], right[n2];

    for(int i=0;i<n1;i++) { left[i] = a[low+i]; }
    for(int j=0;j<n2;j++) { right[j] = a[mid+1+j]; }

    // standard merge code
    int i=0,j=0,k=low;
    while(i<n1 and j<n2){
        if(left[i]<=right[j]){
            a[k] = left[i];
            i++;
            k++;
        }
        else{
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int low, int high){
    if(low < high){
        int mid = low + (high - low)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {10, 2, 5, 16, 22, 4};
    int low=0, high=5;
    merge_sort(arr, low, high);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}