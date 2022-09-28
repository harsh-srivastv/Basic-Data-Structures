#include<bits/stdc++.h>
using namespace std;
//  Time complexity is O(logn)
//  array must be sorted
int count_one(int arr[], int low, int high, int key){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]>key){
        return count_one(arr, low, mid-1, key);
    }
    else if(arr[mid]<key){
        return count_one(arr, mid+1, high, key);
    }
    else{
        if(mid==0|| arr[mid]!=arr[mid]-1){
            return high+1-mid;
        }
        else{
            return count_one(arr, low, mid-1, key);
        }
    }
}

int main()
{   
    int n=5;
    int arr[] = {0,0,1,1,1};
    int key = 1; 
    int res = count_one(arr, 0, n-1, 1);
    cout<<res;
    return 0;
}