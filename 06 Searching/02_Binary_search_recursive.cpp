#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low, int high, int key)
{
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==key){
        return mid+1;
    }
    else if(arr[mid]>key){
        return binary_search( arr,  low,  mid-1,  key);
    }
    else{
        return binary_search( arr,  mid+1,  high,  key);
    }
}

int main()
{   
    int high=5, low=0;
    int arr[] = {2, 5, 7, 29, 8};

    int key=8;

    int result = binary_search(arr, low, high, key);
    cout<<result;
    return 0;
}