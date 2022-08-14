#include<bits/stdc++.h>
using namespace std;

int d2b(int n)
{
    if(n==0){
        return 0;
    }
    d2b(n/2);
    cout<<(n%2);
}

int main()
{   
    int n;
    cout<<"Enter Decimal Number: ";
    cin>>n;
    d2b(n);
    return 0;
}