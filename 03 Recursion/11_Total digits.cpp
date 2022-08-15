// https://practice.geeksforgeeks.org/problems/total-digits4030/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int totalDigits(long long int n){
        // code here
        long long int count = 0;
        for(int i=1;i<=n;i++){
            count+=log10(i)+1;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.totalDigits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends