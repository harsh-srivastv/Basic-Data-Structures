// https://practice.geeksforgeeks.org/problems/minimum-difference-pair5444/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    sort(nums.begin(), nums.end());
   	    int min_diff = INT_MAX;
   	    
   	    for(int i=1; i<nums.size(); i++){
   	        if(nums[i]-nums[i-1] < min_diff){
   	            min_diff = nums[i] - nums[i-1];
   	        }
   	    }
   	    return min_diff;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		int ans = ob.minimum_difference(nums);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends