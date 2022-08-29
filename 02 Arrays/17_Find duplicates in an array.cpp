// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&category[]=Arrays&category[]=Strings&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map<int,int>map;
        vector<int>temp;
        for(int i=0;i<n;i++) map[arr[i]]++;
        
        for(auto t:map){
            if(t.second>1) temp.push_back(t.first);
        }
        
        if(!temp.size()) return {-1};
        sort(temp.begin(), temp.end());
        return temp;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends