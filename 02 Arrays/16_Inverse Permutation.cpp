// https://practice.geeksforgeeks.org/problems/inverse-permutation0344/1?page=1&category[]=Arrays&sortBy=accuracy

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> inversePermutation(int arr[], int size);

// Driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
        	cout << ans[i] << " ";
    	cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<int> inversePermutation(int arr[], int size) {
    // int res[size];
    vector<int> res(size);
    for(int i=0;i<size;i++){
        res[arr[i]-1] = i+1;
    }
    return res;
}