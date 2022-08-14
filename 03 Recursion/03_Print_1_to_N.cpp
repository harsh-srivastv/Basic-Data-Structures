#include<bits/stdc++.h>
using namespace std;

// ===========: this function is Non Tail Recursive :====================
int One_to_N(int n)
{
    if(n==0){
        return 0;
    }
    One_to_N(n-1);
    cout<<n<<" ";
}

// ===========: this function is Tail Recursive :==================== (Preffered)
// In tail recursion last function call is the recursive call and it is more optimized than non tail.
int One_to_N(int n, int k)
{
    if(n==0){
        return 0;
    }
    cout<<k<<" ";
    One_to_N(n-1, k+1);
}

int main()
{
    int n, k=1;
    cout<<"Enter Number: ";
    cin>>n;
    One_to_N(n, k);
    return 0;
}