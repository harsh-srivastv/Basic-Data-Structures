#include<bits/stdc++.h>
using namespace std;

// this function print nth fibonacci number
int isFibonacci(int n)
{
    if(n<=1){
        return n;
    }
    return isFibonacci(n-1) + isFibonacci(n-2);
}

int main()
{   
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    int res = isFibonacci(n);
    cout<<res;
    return 0;
}