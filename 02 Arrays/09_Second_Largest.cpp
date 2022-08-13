// https://practice.geeksforgeeks.org/problems/second-largest3735/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int first(int arr[], int n){
	    int largest = 0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest){
	            largest = arr[i];
	        }
	    }
	    return largest;
	}
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = first(arr, n);
	    int res  = -1;
	    int second = 0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=largest){
	            if(res == -1){
	                res = arr[i];
	            }
	            else if(arr[i]>res){
	                res = arr[i];
	            }
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends