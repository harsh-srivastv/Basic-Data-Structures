#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n==0){
        return 0;
    }
    return n + Sum(n-1);
}

int main()
{
    int n, k=1;
    cout<<"Enter Positive Number: ";
    cin>>n;
    int res = Sum(n);
    cout<<res;
    return 0;
}