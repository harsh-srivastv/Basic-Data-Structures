#include<bits/stdc++.h>
using namespace std;

// ===========: this function is Non Tail Recursive :====================
int fact(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

// ===========: this function is Tail Recursive :====================
int fact(int n, int k)
{
    if(n==0 || n==1){
        return k;
    }
    return fact(n-1, n*k);
}

int main()
{
    int n, k=1;
    cout<<"Enter Positive Number: ";
    cin>>n;
    int res = fact(n, k);
    cout<<res;
    return 0;
}