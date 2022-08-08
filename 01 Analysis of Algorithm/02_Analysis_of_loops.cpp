#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int i, c, n;

    // this loop will take floor value of O(n/c) time
    for(i=0;i<n;i+c)
    {
        continue;
    }
    // this loop will take ciel value of O(n/c) time
    for(i=n;i>n;i-c)
    {
        continue;
    }
    // this loop will take O(logn) time
    for(i=0;i<n;i*c)
    {
        continue;
    }
    // this loop will take O(logn) time
    for(i=0;i<n;i/c)
    {
        continue;
    }
    // this loop will take O(loglogn) time
    for(i=2;i<n;i=pow(i,c))
    {
        continue;
    }
    return 0;
}