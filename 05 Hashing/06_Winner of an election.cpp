// https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1

//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string, int> map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        
        string ans = "";
        int mini = INT_MIN;
        for(auto t:map){
            if(t.second > mini){
                mini = t.second;
                ans = t.first;
            }
            else if(mini == t.second){
                ans = min(ans, t.first);
            }
        }
        vector<string> res;
        res.push_back(ans);
        res.push_back(to_string(mini));
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends