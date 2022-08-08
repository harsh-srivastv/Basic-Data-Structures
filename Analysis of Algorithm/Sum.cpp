#include<bits/stdc++.h>
using namespace std;

// this function takes constant time O(1)
int MySum(int n)
{
    return n*(n+1)/2;
}

// this function takes linear time O(n)
int MySum(int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + i;
    }
    return sum;
}

// this function takes quadratic time O(n^2)
int MySum(int n)
{
    int sum = 0;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{   
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    int sum_ = MySum(number);
    cout<<"The sum for Natural Numbers till "<<number<<" is: "<<sum_;
    return 0;
}