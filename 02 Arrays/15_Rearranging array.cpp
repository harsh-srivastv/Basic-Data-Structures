// https://practice.geeksforgeeks.org/problems/rearranging-array1648/1?page=1&category[]=Arrays&sortBy=accuracy

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
       sort(a, a+n);
       int i=0;
       int j=n-1;
       int k=0;
       while(i<j){
           
           answer[k] = a[i];
           k++;
           answer[k] = a[j];
           k++;
           i++;
           j--;
       }
       if(i==j){
           answer[k] = a[j];
       }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i, a[n+5], answer[n+5]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.Rearrange(a, n, answer);
		
		for(i=0;i<n;i++)
		cout<<answer[i]<<" ";
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends