#include<bits/stdc++.h>
using namespace std;

int One_to_N(int n)
{
    if(n==0){
        return 0;
    }
    One_to_N(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    One_to_N(n);
    return 0;
}