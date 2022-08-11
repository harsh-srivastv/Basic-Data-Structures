// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long int min = a[0], max = a[0];
    pair<long long ,long long> ans;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min = a[i];
            
        if(a[i]>max)
            max = a[i];
    }
    ans.first = min;
    ans.second = max;
    return ans;
}