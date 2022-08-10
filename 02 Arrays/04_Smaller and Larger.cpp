// https://practice.geeksforgeeks.org/problems/smaller-and-larger4005/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int> ans;
	    int smaller = 0;
	    int greater = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=x)
            {
                smaller++;
            }
            if(arr[i]>=x)
            {
                greater++;
            }
        }
        ans.push_back(smaller);
        ans.push_back(greater);
        return ans;
	    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends