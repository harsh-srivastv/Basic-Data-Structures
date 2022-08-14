#include<bits/stdc++.h>
using namespace std;

bool Check_Pallindrome(string str, int start, int end)
{
    if(start>=end){
        return true;
    }
    return (str[start] == str[end]) && Check_Pallindrome(str, start+1, end-1);
}

int main()
{   
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int start = 0;
    int end = str.size() - 1;
    bool res = Check_Pallindrome(str, start, end);
    cout<<res;
    return 0;
}