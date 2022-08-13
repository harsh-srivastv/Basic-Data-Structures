// https://practice.geeksforgeeks.org/problems/find-the-median0527/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> arr)
		{
		    // Code here.
		    int n = arr.size();
		    sort(arr.begin(), arr.end());
		    
		    if(n%2==0){
		        int median = (arr[n/2] + arr[n/2-1])/2;
		        return median;
		    }
		    else{
		        int k = int(n/2);
		        return arr[k];
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends