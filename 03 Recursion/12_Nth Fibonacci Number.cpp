// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
# define mod 1000000007;
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long  int first = 0;
        long long int second = 1;
        
        for (int i = 2; i <= n; i++){
            long long int current = (first + second) % mod;
            first = second;
            second = current;
        }
        
        return second;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends