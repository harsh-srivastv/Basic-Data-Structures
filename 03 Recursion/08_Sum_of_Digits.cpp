#include<bits/stdc++.h>
using namespace std;

int Sum_of_Digits(int n)
{
    int k;
    if(n<1){
        return 0;
    }
    k = n%10;
    return k + Sum_of_Digits(n/10);
}

int main()
{   
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int res = Sum_of_Digits(n);
    cout<<res;
    return 0;
}