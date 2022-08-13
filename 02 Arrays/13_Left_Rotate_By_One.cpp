#include<bits/stdc++.h>
using namespace std;

void left_rotate(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main()
{   
    int arr[] = {10,20,5,7,12};
    int n = 5;

    left_rotate(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}