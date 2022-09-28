#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int main()
{   
    int n=5;
    int arr[] = {2, 5, 7, 29, 8};

    int key=9;

    int result = binary_search(arr, n, key);
    cout<<result;
    return 0;
}