#include<bits/stdc++.h>
using namespace std;

int last_occurence(int arr[], int low, int high, int key)
{
    if(low>high) return -1;

    int mid = (low+high)/2;
    if(arr[mid]>key){
        return last_occurence(arr, low, mid-1, key);
    }
    else if(arr[mid]<key){
        return last_occurence(arr, mid+1, high, key);
    }
    else{
        if(mid==high || arr[mid]!=arr[mid+1]){
            return mid+1;
        }
        else{
            return last_occurence(arr, mid+1, high, key);
        }
    }
}

int main()
{   
    int n=6;
    int arr[] = {10, 10, 20, 20, 20, 30};
    int key = 20;

    int res = last_occurence(arr, 0, 5, key);
    cout<<res;
    return 0;
}