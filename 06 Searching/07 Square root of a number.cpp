// https://practice.geeksforgeeks.org/problems/square-root/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int low=0;
        long long int high=x;
        long long int ans = -1;
        
        while(low<=high)
        {
            long long int mid=low + (high-low)/2;
            // cout<<mid<<endl;
            long long int sqr = mid*mid;
            if(sqr == x){
                return mid;
            }
            else if(sqr > x){
                high = mid-1;
            }
            else{
                low = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends