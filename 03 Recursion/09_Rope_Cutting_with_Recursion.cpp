#include<bits/stdc++.h>
using namespace std;

int Ropecut(int n, int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = max(Ropecut(n-a, a, b, c), Ropecut(n-b, a, b, c), Ropecut(n-c, a, b, c));
    if(res == -1){
        return -1;
    }
    return res+1;
}

int main()
{   
    int n = 5;
    int a = 2, b = 1, c = 5;
    int res = Ropecut(n ,a, b, c);
    cout<<res;
    return 0;
}