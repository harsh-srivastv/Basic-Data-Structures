// https://practice.geeksforgeeks.org/problems/triangle-shrinking-downwards0459/1?page=1&category[]=Arrays&category[]=Strings&sortBy=accuracy

//{ Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string triDownwards(string S) {
        string res = "";
        for(int i=0;i<S.size();i++){
            for(int j=0;j<S.size();j++){
                if(j<i){
                    res += '.';
                }
                else{
                    res += S[j];
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}
// } Driver Code Ends