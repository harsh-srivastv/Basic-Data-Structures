#include<bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main()
{
    int arr[] = {10, 2, 5, 16, 22, 4};
    int n=6;
    Selection_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}