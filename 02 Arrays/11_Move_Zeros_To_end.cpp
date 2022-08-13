#include<bits/stdc++.h>
using namespace std;

// ==========================: Naive Approach O(n^2) :============================

void move_zeros(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
}

// ==========================: Efficient Approach O(n) :============================

void move_zeros(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{   
    int arr[] = {10,20,0,30,8,0,0,12};
    int n = 8;

    move_zeros(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}