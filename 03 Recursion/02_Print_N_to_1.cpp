#include<bits/stdc++.h>
using namespace std;

int N_to_1(int n)
{
    if(n<1){
        return 0;
    }
    cout<<n<<" ";
    N_to_1(n-1);
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    N_to_1(n);
    return 0;
}