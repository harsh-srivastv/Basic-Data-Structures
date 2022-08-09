// https://practice.geeksforgeeks.org/problems/find-index4752/1

//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int> answer;
        int begin = -1;
        int end = -1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                begin = i;
                break;
            }
        }
        answer.push_back(begin);
        
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]==key)
            {
                end = j;
                break;
            }
        }
        answer.push_back(end);
        
        return answer;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends