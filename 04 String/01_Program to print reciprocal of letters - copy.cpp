// https://practice.geeksforgeeks.org/problems/program-to-print-reciprocal-of-letters36233623/1?page=1&category[]=Strings&sortBy=accuracy

//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        string ans = "";
        for(int i=0;i<S.size();i++){
            if(islower(S[i])){
                int prev_diff = abs('a'-S[i]);
                int diff = abs(S[i]-'z')-prev_diff;
                ans += char(S[i] + diff);
            }
            else if(isupper(S[i])){
                int prev_diff = abs('A'-S[i]);
                int diff = abs(S[i]-'Z')-prev_diff;
                ans += char(S[i] + diff);
            }
            else{
                ans += S[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends